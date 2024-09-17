#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct AIAttackComponent : types::Component {
    const std::string _component_name = "AIAttackComponent";
    int32_t use_probability;
    float min_distance;
    float max_distance;
    float angular_range_deg;
    int32_t state_duration_frames;
    int32_t frames_between;
    int32_t frames_between_global;
    std::string animation_name;
    bool attack_landing_ranged_enabled;
    int32_t attack_ranged_action_frame;
    float attack_ranged_offset_x;
    float attack_ranged_offset_y;
    float attack_ranged_root_offset_x;
    float attack_ranged_root_offset_y;
    bool attack_ranged_use_message;
    bool attack_ranged_predict;
    std::string attack_ranged_entity_file;
    int32_t attack_ranged_entity_count_min;
    int32_t attack_ranged_entity_count_max;
    bool attack_ranged_use_laser_sight;
    bool attack_ranged_aim_rotation_enabled;
    float attack_ranged_aim_rotation_speed;
    float attack_ranged_aim_rotation_shooting_ok_angle_deg;

    static void parse(binary_io::any_istream &in, AIAttackComponent &out);
};  // struct

} // namespace
