#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ProjectileComponent : types::Component {
    const std::string _component_name = "ProjectileComponent";
    enums::PROJECTILE_TYPE projectile_type;
    int32_t lifetime;
    int32_t lifetime_randomness;
    bool on_lifetime_out_explode;
    bool collide_with_world;
    types::ConfigGunActionInfo config;
    float speed_min;
    float speed_max;
    float friction;
    float direction_random_rad;
    float direction_nonrandom_rad;
    float lob_min;
    float lob_max;
    float camera_shake_when_shot;
    float shoot_light_flash_radius;
    uint32_t shoot_light_flash_r;
    uint32_t shoot_light_flash_g;
    uint32_t shoot_light_flash_b;
    bool create_shell_casing;
    std::string shell_casing_material;
    types::vec2<float> shell_casing_offset;
    std::string muzzle_flash_file;
    int32_t bounces_left;
    float bounce_energy;
    bool bounce_always;
    bool bounce_at_any_angle;
    bool attach_to_parent_trigger;
    std::string bounce_fx_file;
    float angular_velocity;
    bool velocity_sets_rotation;
    bool velocity_sets_scale;
    float velocity_sets_scale_coeff;
    bool velocity_sets_y_flip;
    float velocity_updates_animation;
    float ground_penetration_coeff;
    int32_t ground_penetration_max_durability_to_destroy;
    std::string go_through_this_material;
    bool do_moveto_update;
    int32_t on_death_duplicate_remaining;
    bool on_death_gfx_leave_sprite;
    bool on_death_explode;
    bool on_death_emit_particle;
    int32_t on_death_emit_particle_count;
    bool die_on_liquid_collision;
    bool die_on_low_velocity;
    float die_on_low_velocity_limit;
    std::string on_death_emit_particle_type;
    bool on_death_particle_check_concrete;
    bool ground_collision_fx;
    bool explosion_dont_damage_shooter;
    types::ConfigExplosion config_explosion;
    float on_death_item_pickable_radius;
    bool penetrate_world;
    float penetrate_world_velocity_coeff;
    bool penetrate_entities;
    bool on_collision_die;
    bool on_collision_remove_projectile;
    bool on_collision_spawn_entity;
    std::string spawn_entity;
    bool spawn_entity_is_projectile;
    float physics_impulse_coeff;
    int32_t damage_every_x_frames;
    bool damage_scaled_by_speed;
    float damage_scale_max_speed;
    enums::RAGDOLL_FX ragdoll_fx_on_collision;
    bool collide_with_entities;
    std::string collide_with_tag;
    std::string dont_collide_with_tag;
    int32_t collide_with_shooter_frames;
    bool friendly_fire;
    float damage;
    types::ConfigDamagesByType damage_by_type;
    types::ConfigDamageCritical damage_critical;
    float knockback_force;
    float ragdoll_force_multiplier;
    float hit_particle_force_multiplier;
    float blood_count_multiplier;
    std::string damage_game_effect_entities;
    bool never_hit_player;
    bool collect_materials_to_shooter;
    bool play_damage_sounds;
    int32_t mLastFrameDamaged;

    static void parse(binary_io::any_istream &in, ProjectileComponent &out);
};  // struct

} // namespace
