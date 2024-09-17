#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct SpriteParticleEmitterComponent : types::Component {
    const std::string _component_name = "SpriteParticleEmitterComponent";
    std::string sprite_file;
    bool sprite_centered;
    bool sprite_random_rotation;
    bool render_back;
    float delay;
    float lifetime;
    types::Color<float> color;
    types::Color<float> color_change;
    bool additive;
    bool emissive;
    types::vec2<float> velocity;
    types::vec2<float> gravity;
    float velocity_slowdown;
    float rotation;
    float angular_velocity;
    bool use_velocity_as_rotation;
    bool use_rotation_from_velocity_component;
    bool use_rotation_from_entity;
    float entity_velocity_multiplier;
    types::vec2<float> scale;
    types::vec2<float> scale_velocity;
    float z_index;
    types::ValueRange<float> randomize_lifetime;
    types::AABB randomize_position;
    bool randomize_position_inside_hitbox;
    types::AABB randomize_velocity;
    types::AABB randomize_scale;
    types::ValueRange<float> randomize_rotation;
    types::ValueRange<float> randomize_angular_velocity;
    types::ValueRange<float> randomize_alpha;
    types::ValueRange<float> randomize_animation_speed_coeff;
    bool velocity_always_away_from_center;
    types::vec2<float> expand_randomize_position;
    bool camera_bound;
    float camera_distance;
    bool is_emitting;
    int32_t count_min;
    int32_t count_max;
    int32_t emission_interval_min_frames;
    int32_t emission_interval_max_frames;
    std::string entity_file;

    static void parse(binary_io::any_istream &in, SpriteParticleEmitterComponent &out);
};  // struct

} // namespace
