#include <ranges>
#include <noita/parser.h>

void noita::priv::read_string(binary_io::any_istream &in, std::string &out) {
    uint32_t size;
    in.read(std::endian::big, size);
    out.resize(size);
    in.read_bytes(std::as_writable_bytes(std::span{ out.data(), size }));
}

void noita::priv::read_csv_string(binary_io::any_istream &in, std::set<std::string> &dst) {
    std::string raw;
    read_string(in, raw);
    for (const auto tokenRange: std::views::split(raw, ',')) {
        auto token = std::ranges::to<std::string>(tokenRange);
        dst.emplace(token);
    }
}
