#pragma once

#include <fstream>
#include <noita/component.h>
#include <noita/entity.h>

namespace noita {
    void read_entities(binary_io::any_istream &in, std::vector<types::Entity> &dst);

    void read_entities_file(const std::filesystem::path &path, std::vector<types::Entity> &dst);

    void read_entities_file(const std::string &path, std::vector<types::Entity> &dst);

    void read_entities_file(const char* path, std::vector<types::Entity> &dst);

    void read_compressed_entities(const std::filesystem::path &path, std::vector<types::Entity> &dst);

    void read_compressed_entities(const std::string &path, std::vector<types::Entity> &dst);

    void read_compressed_entities(const char* path, std::vector<types::Entity> &dst);
}
