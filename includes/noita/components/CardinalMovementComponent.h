#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct CardinalMovementComponent : types::Component {
    const std::string _component_name = "CardinalMovementComponent";
    bool horizontal_movement;
    bool vertical_movement;
    bool intercardinal_movement;

    static void parse(binary_io::any_istream &in, CardinalMovementComponent &out);
};  // struct

} // namespace
