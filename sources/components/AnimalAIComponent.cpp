#include <noita/components/AnimalAIComponent.h>

void noita::components::AnimalAIComponent::parse(binary_io::any_istream &in, noita::components::AnimalAIComponent &out) {
    priv::read_integral(in, out.ai_state);
    priv::read_integral(in, out.ai_state_timer);
    priv::read_integral(in, out.keep_state_alive_when_enabled);
    priv::read_integral(in, out.preferred_job);
    priv::read_integral(in, out.escape_if_damaged_probability);
    priv::read_integral(in, out.attack_if_damaged_probability);
    priv::read_integral(in, out.eye_offset_x);
    priv::read_integral(in, out.eye_offset_y);
    priv::read_integral(in, out.attack_only_if_attacked);
    priv::read_integral(in, out.dont_counter_attack_own_herd);
    priv::read_integral(in, out.creature_detection_range_x);
    priv::read_integral(in, out.creature_detection_range_y);
    priv::read_integral(in, out.creature_detection_angular_range_deg);
    priv::read_integral(in, out.creature_detection_check_every_x_frames);
    priv::read_integral(in, out.max_distance_to_cam_to_start_hunting);
    priv::read_integral(in, out.pathfinding_max_depth_no_target);
    priv::read_integral(in, out.pathfinding_max_depth_has_target);
    priv::read_integral(in, out.aggressiveness_min);
    priv::read_integral(in, out.aggressiveness_max);
    priv::read_integral(in, out.tries_to_ranged_attack_friends);
    priv::read_integral(in, out.attack_melee_enabled);
    priv::read_integral(in, out.attack_dash_enabled);
    priv::read_integral(in, out.attack_landing_ranged_enabled);
    priv::read_integral(in, out.attack_ranged_enabled);
    priv::read_integral(in, out.attack_knockback_multiplier);
    priv::read_integral(in, out.is_static_turret);
    priv::read_integral(in, out.attack_melee_max_distance);
    priv::read_integral(in, out.attack_melee_action_frame);
    priv::read_integral(in, out.attack_melee_frames_between);
    priv::read_integral(in, out.attack_melee_damage_min);
    priv::read_integral(in, out.attack_melee_damage_max);
    priv::read_integral(in, out.attack_melee_impulse_vector_x);
    priv::read_integral(in, out.attack_melee_impulse_vector_y);
    priv::read_integral(in, out.attack_melee_impulse_multiplier);
    priv::read_integral(in, out.attack_melee_offset_x);
    priv::read_integral(in, out.attack_melee_offset_y);
    priv::read_integral(in, out.attack_melee_finish_enabled);
    types::ConfigExplosion::parse(in, out.attack_melee_finish_config_explosion);
    priv::read_integral(in, out.attack_melee_finish_action_frame);
    priv::read_integral(in, out.attack_dash_distance);
    priv::read_integral(in, out.attack_dash_frames_between);
    priv::read_integral(in, out.attack_dash_damage);
    priv::read_integral(in, out.attack_dash_speed);
    priv::read_integral(in, out.attack_dash_lob);
    priv::read_integral(in, out.attack_ranged_min_distance);
    priv::read_integral(in, out.attack_ranged_max_distance);
    priv::read_integral(in, out.attack_ranged_action_frame);
    types::LensValue<int32_t>::parse(in, out.attack_ranged_frames_between);
    priv::read_integral(in, out.attack_ranged_offset_x);
    priv::read_integral(in, out.attack_ranged_offset_y);
    priv::read_integral(in, out.attack_ranged_use_message);
    priv::read_integral(in, out.attack_ranged_predict);
    priv::read_integral(in, out.attack_ranged_entity_file);
    priv::read_integral(in, out.attack_ranged_entity_count_min);
    priv::read_integral(in, out.attack_ranged_entity_count_max);
    priv::read_integral(in, out.attack_ranged_use_laser_sight);
    priv::read_integral(in, out.attack_ranged_laser_sight_beam_kind);
    priv::read_integral(in, out.attack_ranged_aim_rotation_enabled);
    priv::read_integral(in, out.attack_ranged_aim_rotation_speed);
    priv::read_integral(in, out.attack_ranged_aim_rotation_shooting_ok_angle_deg);
    priv::read_integral(in, out.attack_ranged_state_duration_frames);
    priv::read_integral(in, out.hide_from_prey);
    priv::read_integral(in, out.hide_from_prey_target_distance);
    priv::read_integral(in, out.hide_from_prey_time);
    priv::read_integral(in, out.food_material);
    priv::read_integral(in, out.food_particle_effect_material);
    priv::read_integral(in, out.food_eating_create_particles);
    priv::read_integral(in, out.eating_area_radius_x);
    priv::read_integral(in, out.eating_area_radius_y);
    priv::read_integral(in, out.mouth_offset_x);
    priv::read_integral(in, out.mouth_offset_y);
    priv::read_integral(in, out.defecates_and_pees);
    priv::read_integral(in, out.butt_offset_x);
    priv::read_integral(in, out.butt_offset_y);
    priv::read_integral(in, out.pee_velocity_x);
    priv::read_integral(in, out.pee_velocity_y);
    priv::read_integral(in, out.needs_food);
    priv::read_integral(in, out.sense_creatures);
    priv::read_integral(in, out.sense_creatures_through_walls);
    priv::read_integral(in, out.can_fly);
    priv::read_integral(in, out.can_walk);
    priv::read_integral(in, out.path_distance_to_target_node_to_turn_around);
    priv::read_integral(in, out.path_cleanup_explosion_radius);
    priv::read_integral(in, out.max_distance_to_move_from_home);
    types::LensValue<float>::parse(in, out.mAggression);
}
