#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct WormComponent : types::Component {
    const std::string _component_name = "WormComponent";
    float speed;
    float acceleration;
    types::LensValue<float> ground_decceleration;
    float gravity;
    float tail_gravity;
    float part_distance;
    int32_t ground_check_offset;
    float hitbox_radius;
    float bite_damage;
    float target_kill_radius;
    float target_kill_ragdoll_force;
    float jump_cam_shake;
    float jump_cam_shake_distance;
    float eat_anim_wait_mult;
    std::string ragdoll_filename;
    bool is_water_worm;
    float max_speed;

    static void parse(binary_io::any_istream &in, WormComponent &out);
};  // struct

} // namespace
