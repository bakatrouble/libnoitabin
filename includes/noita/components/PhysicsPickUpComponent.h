#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PhysicsPickUpComponent : types::Component {
    const std::string _component_name = "PhysicsPickUpComponent";
    types::CXForm transform;
    types::vec2<float> original_left_joint_pos;
    types::vec2<float> original_right_joint_pos;
    float pick_up_strength;

    static void parse(binary_io::any_istream &in, PhysicsPickUpComponent &out);
};  // struct

} // namespace
