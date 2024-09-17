#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct BossDragonComponent : types::Component {
    const std::string _component_name = "BossDragonComponent";
    float speed;
    float speed_hunt;
    float acceleration;
    float direction_adjust_speed;
    float direction_adjust_speed_hunt;
    float gravity;
    float tail_gravity;
    float part_distance;
    int32_t ground_check_offset;
    float eat_ground_radius;
    bool eat_ground;
    float hitbox_radius;
    float bite_damage;
    float target_kill_radius;
    float target_kill_ragdoll_force;
    float hunt_box_radius;
    float random_target_box_radius;
    int32_t new_hunt_target_check_every;
    int32_t new_random_target_check_every;
    float jump_cam_shake;
    float jump_cam_shake_distance;
    float eat_anim_wait_mult;
    std::string projectile_1;
    int32_t projectile_1_count;
    std::string projectile_2;
    int32_t projectile_2_count;
    std::string ragdoll_filename;

    static void parse(binary_io::any_istream &in, BossDragonComponent &out);
};  // struct

} // namespace
