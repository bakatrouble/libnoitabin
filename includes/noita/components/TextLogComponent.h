#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct TextLogComponent : types::Component {
    const std::string _component_name = "TextLogComponent";
    std::string key;
    std::string image_filename;

    static void parse(binary_io::any_istream &in, TextLogComponent &out);
};  // struct

} // namespace
