#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct CharacterDataComponent : types::Component {
    const std::string _component_name = "CharacterDataComponent";
    int32_t platforming_type;
    types::LensValue<float> collision_aabb_min_x;
    types::LensValue<float> collision_aabb_max_x;
    types::LensValue<float> collision_aabb_min_y;
    types::LensValue<float> collision_aabb_max_y;
    float mass;
    int32_t buoyancy_check_offset_y;
    float liquid_velocity_coeff;
    float gravity;
    types::LensValue<float> fly_time_max;
    float fly_recharge_spd;
    float fly_recharge_spd_ground;
    bool flying_needs_recharge;
    int32_t flying_in_air_wait_frames;
    int32_t flying_recharge_removal_frames;
    int32_t climb_over_y;
    int32_t check_collision_max_size_x;
    int32_t check_collision_max_size_y;
    bool is_on_ground;
    bool is_on_slippery_ground;
    float ground_stickyness;
    bool effect_hit_ground;
    int32_t eff_hg_damage_min;
    int32_t eff_hg_damage_max;
    float eff_hg_position_x;
    float eff_hg_position_y;
    float eff_hg_size_x;
    float eff_hg_size_y;
    float eff_hg_velocity_min_x;
    float eff_hg_velocity_max_x;
    float eff_hg_velocity_min_y;
    float eff_hg_velocity_max_y;
    float eff_hg_offset_y;
    bool eff_hg_update_box2d;
    float eff_hg_b2force_multiplier;
    float destroy_ground;
    bool send_transform_update_message;
    bool dont_update_velocity_and_xform;
    float mFlyingTimeLeft;

    static void parse(binary_io::any_istream &in, CharacterDataComponent &out);
};  // struct

} // namespace
