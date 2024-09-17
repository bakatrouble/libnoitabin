#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct MaterialInventoryComponent : types::Component {
    const std::string _component_name = "MaterialInventoryComponent";
    bool drop_as_item;
    bool on_death_spill;
    bool leak_gently;
    float leak_on_damage_percent;
    float leak_pressure_min;
    float leak_pressure_max;
    float min_damage_to_leak;
    float b2_force_on_leak;
    float death_throw_particle_velocity_coeff;
    bool kill_when_empty;
    bool halftime_materials;
    int32_t do_reactions;
    bool do_reactions_explosions;
    bool do_reactions_entities;
    int32_t reaction_speed;
    bool reactions_shaking_speeds_up;
    double max_capacity;
    std::vector<double> count_per_material_type;
    float audio_collision_size_modifier_amount;
    int32_t last_frame_drank;

    static void parse(binary_io::any_istream &in, MaterialInventoryComponent &out);
};  // struct

} // namespace
