#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct AnimalAIComponent : types::Component {
    const std::string _component_name = "AnimalAIComponent";
    int32_t ai_state;
    int32_t ai_state_timer;
    bool keep_state_alive_when_enabled;
    std::string preferred_job;
    int32_t escape_if_damaged_probability;
    int32_t attack_if_damaged_probability;
    int32_t eye_offset_x;
    int32_t eye_offset_y;
    bool attack_only_if_attacked;
    bool dont_counter_attack_own_herd;
    float creature_detection_range_x;
    float creature_detection_range_y;
    float creature_detection_angular_range_deg;
    int32_t creature_detection_check_every_x_frames;
    float max_distance_to_cam_to_start_hunting;
    int32_t pathfinding_max_depth_no_target;
    int32_t pathfinding_max_depth_has_target;
    float aggressiveness_min;
    float aggressiveness_max;
    bool tries_to_ranged_attack_friends;
    bool attack_melee_enabled;
    bool attack_dash_enabled;
    bool attack_landing_ranged_enabled;
    bool attack_ranged_enabled;
    float attack_knockback_multiplier;
    bool is_static_turret;
    int32_t attack_melee_max_distance;
    int32_t attack_melee_action_frame;
    int32_t attack_melee_frames_between;
    float attack_melee_damage_min;
    float attack_melee_damage_max;
    float attack_melee_impulse_vector_x;
    float attack_melee_impulse_vector_y;
    float attack_melee_impulse_multiplier;
    float attack_melee_offset_x;
    float attack_melee_offset_y;
    bool attack_melee_finish_enabled;
    types::ConfigExplosion attack_melee_finish_config_explosion;
    int32_t attack_melee_finish_action_frame;
    float attack_dash_distance;
    int32_t attack_dash_frames_between;
    float attack_dash_damage;
    float attack_dash_speed;
    float attack_dash_lob;
    float attack_ranged_min_distance;
    float attack_ranged_max_distance;
    int32_t attack_ranged_action_frame;
    types::LensValue<int32_t> attack_ranged_frames_between;
    float attack_ranged_offset_x;
    float attack_ranged_offset_y;
    bool attack_ranged_use_message;
    bool attack_ranged_predict;
    std::string attack_ranged_entity_file;
    int32_t attack_ranged_entity_count_min;
    int32_t attack_ranged_entity_count_max;
    bool attack_ranged_use_laser_sight;
    bool attack_ranged_laser_sight_beam_kind;
    bool attack_ranged_aim_rotation_enabled;
    float attack_ranged_aim_rotation_speed;
    float attack_ranged_aim_rotation_shooting_ok_angle_deg;
    int32_t attack_ranged_state_duration_frames;
    bool hide_from_prey;
    float hide_from_prey_target_distance;
    int32_t hide_from_prey_time;
    int32_t food_material;
    int32_t food_particle_effect_material;
    bool food_eating_create_particles;
    int32_t eating_area_radius_x;
    int32_t eating_area_radius_y;
    int32_t mouth_offset_x;
    int32_t mouth_offset_y;
    bool defecates_and_pees;
    int32_t butt_offset_x;
    int32_t butt_offset_y;
    float pee_velocity_x;
    float pee_velocity_y;
    bool needs_food;
    bool sense_creatures;
    bool sense_creatures_through_walls;
    bool can_fly;
    bool can_walk;
    int32_t path_distance_to_target_node_to_turn_around;
    float path_cleanup_explosion_radius;
    float max_distance_to_move_from_home;
    types::LensValue<float> mAggression;

    static void parse(binary_io::any_istream &in, AnimalAIComponent &out);
};  // struct

} // namespace
