#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct NullDamageComponent : types::Component {
    const std::string _component_name = "NullDamageComponent";
    float null_chance;

    static void parse(binary_io::any_istream &in, NullDamageComponent &out);
};  // struct

} // namespace
