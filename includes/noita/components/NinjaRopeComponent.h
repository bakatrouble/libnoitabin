#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct NinjaRopeComponent : types::Component {
    const std::string _component_name = "NinjaRopeComponent";
    float max_length;
    float mLength;

    static void parse(binary_io::any_istream &in, NinjaRopeComponent &out);
};  // struct

} // namespace
