#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct DamageModelComponent : types::Component {
    const std::string _component_name = "DamageModelComponent";
    double hp;
    double max_hp;
    double max_hp_cap;
    double max_hp_old;
    types::ConfigDamagesByType damage_multipliers;
    float critical_damage_resistance;
    int32_t invincibility_frames;
    bool falling_damages;
    float falling_damage_height_min;
    float falling_damage_height_max;
    float falling_damage_damage_min;
    float falling_damage_damage_max;
    bool air_needed;
    float air_in_lungs;
    float air_in_lungs_max;
    float air_lack_of_damage;
    float minimum_knockback_force;
    bool materials_damage;
    int32_t material_damage_min_cell_count;
    std::string materials_that_damage;
    std::string materials_how_much_damage;
    bool materials_damage_proportional_to_maxhp;
    bool physics_objects_damage;
    bool materials_create_messages;
    std::string materials_that_create_messages;
    std::string ragdoll_filenames_file;
    std::string ragdoll_material;
    float ragdoll_offset_x;
    float ragdoll_offset_y;
    enums::RAGDOLL_FX ragdoll_fx_forced;
    std::string blood_material;
    std::string blood_spray_material;
    bool blood_spray_create_some_cosmetic;
    float blood_multiplier;
    int32_t ragdoll_blood_amount_absolute;
    std::string blood_sprite_directional;
    std::string blood_sprite_large;
    std::string healing_particle_effect_entity;
    bool create_ragdoll;
    bool ragdollify_child_entity_sprites;
    float ragdollify_root_angular_damping;
    bool ragdollify_disintegrate_nonroot;
    bool wait_for_kill_flag_on_death;
    bool kill_now;
    bool drop_items_on_death;
    bool ui_report_damage;
    bool ui_force_report_damage;
    int32_t in_liquid_shooting_electrify_prob;
    float wet_status_effect_damage;
    bool is_on_fire;
    float fire_probability_of_ignition;
    int32_t fire_how_much_fire_generates;
    float fire_damage_ignited_amount;
    float fire_damage_amount;
    int32_t mLastElectricityResistanceFrame;
    int32_t mLastFrameReportedBlock;
    int32_t mLastMaxHpChangeFrame;

    static void parse(binary_io::any_istream &in, DamageModelComponent &out);
};  // struct

} // namespace
