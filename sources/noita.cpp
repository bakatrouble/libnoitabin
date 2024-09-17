#include <fastlz.h>
#include <noita.h>
#include "noita/parser.h"

void noita::read_entities(binary_io::any_istream &in, std::vector<types::Entity> &dst) {
    uint32_t filetype;
    std::string hash;
    uint32_t entitiesCnt;

    priv::read_integral(in, filetype);
    priv::read_integral(in, hash);
    priv::read_integral(in, entitiesCnt);
    for (uint32_t i=0; i < entitiesCnt; i++) {
        dst.emplace_back(types::Entity{});
        types::Entity::parse(in, dst.back());
    }
}

void noita::read_entities_file(const std::filesystem::path &path, std::vector<types::Entity> &dst) {
    binary_io::file_istream file(path);
    binary_io::any_istream in(std::move(file));
    read_entities(in, dst);
}

void noita::read_entities_file(const std::string &path, std::vector<types::Entity> &dst) {
    read_entities_file(std::filesystem::path(path), dst);
}

void noita::read_entities_file(const char *path, std::vector<types::Entity> &dst) {
    read_entities_file(std::filesystem::path(path), dst);
}

void noita::read_compressed_entities(const std::filesystem::path &path, std::vector<types::Entity> &dst) {
    int32_t compressedSize;
    int32_t decompressedSize;
    std::ifstream file(path);
    file.read((char*)&compressedSize, 4);
    file.read((char*)&decompressedSize, 4);
    auto *compressed = new char[compressedSize];
    auto *decompressed = new char[decompressedSize];

    file.read(compressed, compressedSize);
    if (compressedSize == decompressedSize) {
        memcpy(decompressed, compressed, decompressedSize);
    } else {
        if (fastlz_decompress(compressed, compressedSize, decompressed, decompressedSize) == 0) {
            throw std::runtime_error("decompression error");
        }
    }
    delete[] compressed;

    binary_io::span_istream is(std::as_bytes(std::span{ decompressed, (uint32_t)decompressedSize }));
    binary_io::any_istream in(std::move(is));
    read_entities(in, dst);
    delete[] decompressed;
}

void noita::read_compressed_entities(const std::string &path, std::vector<types::Entity> &dst) {
    read_compressed_entities(std::filesystem::path(path), dst);
}

void noita::read_compressed_entities(const char *path, std::vector<types::Entity> &dst) {
    read_compressed_entities(std::filesystem::path(path), dst);
}
