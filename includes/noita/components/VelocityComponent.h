#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct VelocityComponent : types::Component {
    const std::string _component_name = "VelocityComponent";
    float gravity_x;
    float gravity_y;
    float mass;
    float air_friction;
    float terminal_velocity;
    bool apply_terminal_velocity;
    bool updates_velocity;
    bool displace_liquid;
    bool affect_physics_bodies;
    bool limit_to_max_velocity;
    int32_t liquid_death_threshold;
    float liquid_drag;
    types::vec2<float> mVelocity;

    static void parse(binary_io::any_istream &in, VelocityComponent &out);
};  // struct

} // namespace
