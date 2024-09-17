#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct VariableStorageComponent : types::Component {
    const std::string _component_name = "VariableStorageComponent";
    std::string name;
    std::string value_string;
    int32_t value_int;
    bool value_bool;
    float value_float;

    static void parse(binary_io::any_istream &in, VariableStorageComponent &out);
};  // struct

} // namespace
