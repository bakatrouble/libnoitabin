#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct RotateTowardsComponent : types::Component {
    const std::string _component_name = "RotateTowardsComponent";
    std::string entity_with_tag;

    static void parse(binary_io::any_istream &in, RotateTowardsComponent &out);
};  // struct

} // namespace
