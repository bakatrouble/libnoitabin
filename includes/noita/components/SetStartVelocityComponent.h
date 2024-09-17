#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct SetStartVelocityComponent : types::Component {
    const std::string _component_name = "SetStartVelocityComponent";
    types::vec2<float> velocity;
    types::ValueRange<float> randomize_angle;
    types::ValueRange<float> randomize_speed;

    static void parse(binary_io::any_istream &in, SetStartVelocityComponent &out);
};  // struct

} // namespace
