#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ParticleEmitterComponent : types::Component {
    const std::string _component_name = "ParticleEmitterComponent";
    std::string emitted_material_name;
    bool create_real_particles;
    bool emit_real_particles;
    bool emit_cosmetic_particles;
    bool cosmetic_force_create;
    bool render_back;
    bool render_ultrabright;
    bool collide_with_grid;
    bool collide_with_gas_and_fire;
    bool particle_single_width;
    bool emit_only_if_there_is_space;
    int32_t emitter_lifetime_frames;
    bool fire_cells_dont_ignite_damagemodel;
    bool color_is_based_on_pos;
    uint32_t color;
    float custom_alpha;
    types::vec2<float> offset;
    float x_pos_offset_min;
    float y_pos_offset_min;
    float x_pos_offset_max;
    float y_pos_offset_max;
    types::ValueRange<float> area_circle_radius;
    float area_circle_sector_degrees;
    float x_vel_min;
    float x_vel_max;
    float y_vel_min;
    float y_vel_max;
    float direction_random_deg;
    types::vec2<float> gravity;
    float velocity_always_away_from_center;
    float lifetime_min;
    float lifetime_max;
    float airflow_force;
    float airflow_time;
    float airflow_scale;
    float friction;
    float attractor_force;
    types::LensValue<int32_t> count_min;
    types::LensValue<int32_t> count_max;
    int32_t emission_interval_min_frames;
    int32_t emission_interval_max_frames;
    int32_t emission_chance;
    enums::PARTICLE_EMITTER_CUSTOM_STYLE custom_style;
    int32_t delay_frames;
    bool is_emitting;
    bool use_material_inventory;
    bool is_trail;
    float trail_gap;
    bool render_on_grid;
    bool fade_based_on_lifetime;
    bool draw_as_long;
    float b2_force;
    bool set_magic_creation;
    std::string image_animation_file;
    std::string image_animation_colors_file;
    float image_animation_speed;
    bool image_animation_loop;
    float image_animation_phase;
    float image_animation_emission_probability;
    bool image_animation_raytrace_from_center;
    bool image_animation_use_entity_rotation;
    bool ignore_transform_updated_msg;

    static void parse(binary_io::any_istream &in, ParticleEmitterComponent &out);
};  // struct

} // namespace
