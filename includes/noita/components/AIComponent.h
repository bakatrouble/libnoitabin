#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct AIComponent : types::Component {
    const std::string _component_name = "AIComponent";
    float TEMP_TEMP_TEMP;

    static void parse(binary_io::any_istream &in, AIComponent &out);
};  // struct

} // namespace
