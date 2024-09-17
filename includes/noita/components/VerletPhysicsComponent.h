#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct VerletPhysicsComponent : types::Component {
    const std::string _component_name = "VerletPhysicsComponent";
    int32_t num_points;
    int32_t num_links;
    int32_t width;
    enums::VERLET_TYPE type;
    float resting_distance;
    float mass_min;
    float mass_max;
    float stiffness;
    float velocity_dampening;
    float liquid_damping;
    float gets_entity_velocity_coeff;
    bool collide_with_cells;
    bool simulate_gravity;
    bool simulate_wind;
    float wind_change_speed;
    bool constrain_stretching;
    bool pixelate_sprite_transforms;
    bool scale_sprite_x;
    bool follow_entity_transform;
    types::vec2<float> animation_target_offset;
    float animation_amount;
    float animation_speed;
    float animation_energy;
    float cloth_sprite_z_index;
    int32_t stain_cells_probability;
    uint32_t cloth_color_edge;
    uint32_t cloth_color;
    types::vec2<float> m_position_previous;
    bool m_is_culled_previous;
    std::vector<uint32_t> colors;
    std::vector<uint32_t> materials;

    static void parse(binary_io::any_istream &in, VerletPhysicsComponent &out);
};  // struct

} // namespace
