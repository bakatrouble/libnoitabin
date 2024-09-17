#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PhysicsThrowableComponent : types::Component {
    const std::string _component_name = "PhysicsThrowableComponent";
    float throw_force_coeff;
    float max_throw_speed;
    float min_torque;
    float max_torque;
    float tip_check_offset_min;
    float tip_check_offset_max;
    float tip_check_random_rotation_deg;
    float attach_min_speed;
    bool attach_to_surfaces_knife_style;
    int32_t hp;

    static void parse(binary_io::any_istream &in, PhysicsThrowableComponent &out);
};  // struct

} // namespace
