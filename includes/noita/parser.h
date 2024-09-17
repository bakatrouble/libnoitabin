#pragma once

#include <binary_io/binary_io.hpp>
#include <set>
#include <unordered_map>

namespace noita::priv {
    void read_string(binary_io::any_istream &in, std::string &out);

    void read_csv_string(binary_io::any_istream &in, std::set<std::string> &dst);

    template<typename T>
    void read_integral(binary_io::any_istream &in, T &out) {
        if constexpr (binary_io::concepts::integral<T>) {
            in.read(std::endian::big, out);
        } else if constexpr (std::same_as<T, std::string>) {
            read_string(in, out);
        } else {
            static_assert(false, "not an integral type");
        }
    }

    template<typename T>
    void read_integral_vector(binary_io::any_istream &in, std::vector<T> &out) {
        uint32_t size;
        in.read(std::endian::big, size);
        out.resize(size);
        for (uint32_t i=0; i < size; i++) {
            read_integral(in, out[i]);
        }
    }

    template<typename TKey, typename TValue>
    void read_integral_map(binary_io::any_istream &in, std::unordered_map<TKey, TValue> &out) {
        uint32_t size;
        in.read(std::endian::big, size);
        TKey key;
        TValue value;
        for (uint32_t i=0; i < size; i++) {
            read_integral(in, key);
            read_integral(in, value);
            out[key] = value;
        }
    }

    template<typename T>
    void read_custom_vector(binary_io::any_istream &in, std::vector<T> &out) {
        uint32_t size;
        in.read(std::endian::big, size);
        out.resize(size);
        for (uint32_t i=0; i < size; i++) {
            T::parse(in, out[i]);
        }
    }
}
