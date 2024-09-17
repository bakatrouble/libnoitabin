#pragma once

#include "parser.h"

namespace noita::types {
    template<typename T>
    struct vec2 {
        T x;
        T y;

        static void parse(binary_io::any_istream &in, vec2<T> &out) {
            priv::read_integral(in, out.x);
            priv::read_integral(in, out.y);
        }
    };

    template<typename T>
    struct ValueRange {
        T min;
        T max;

        static void parse(binary_io::any_istream &in, ValueRange<T> &out) {
            priv::read_integral(in, out.min);
            priv::read_integral(in, out.max);
        }
    };

    struct AABB {
        ValueRange<int32_t> x;
        ValueRange<int32_t> y;

        static void parse(binary_io::any_istream &in, AABB &out);
    };

    struct ConfigGun {
        int32_t actions_per_round;
        bool shuffle_deck_when_empty;
        int32_t reparse_time;
        int32_t deck_capacity;

        static void parse(binary_io::any_istream &in, ConfigGun &out);
    };
    
    struct ConfigDamageCritical {
        int32_t chance;
        float damage_multiplier;

        static void parse(binary_io::any_istream &in, ConfigDamageCritical &out);
    };

    struct ConfigGunActionInfo {
        std::string action_id;
        std::string action_name;
        std::string action_description;
        std::string action_sprite_filename;
        std::string action_unidentified_sprite_filename;
        int32_t action_type;
        std::string action_spawn_level;
        std::string action_spawn_probability;
        std::string action_spawn_requires_flag;
        bool action_spawn_manual_unlock;
        int32_t action_max_uses;
        std::string custom_xml_file;
        float action_mana_drain;
        bool action_is_dangerous_blast;
        int32_t action_draw_many_count;
        bool action_ai_never_uses;
        bool action_never_unlimited;
        bool state_shuffled;
        int32_t state_cards_drawn;
        bool state_discarded_action;
        bool state_destroyed_action;
        int32_t fire_rate_wait;
        float speed_multiplier;
        float child_speed_multiplier;
        float dampening;
        float explosion_radius;
        float spread_degrees;
        float pattern_degrees;
        float screenshake;
        float recoil;
        float damage_melee_add;
        float damage_projectile_add;
        float damage_electricity_add;
        float damage_fire_add;
        float damage_explosion_add;
        float damage_ice_add;
        float damage_slice_add;
        float damage_healing_add;
        float damage_curse_add;
        float damage_drill_add;
        float damage_null_add;
        int32_t damage_critical_chance;
        float damage_critical_multiplier;
        float explosion_damage_to_materials;
        float knockback_force;
        int32_t reparse_time;
        int32_t lightning_count;
        std::string material;
        int32_t material_amount;
        std::string trail_material;
        int32_t trail_material_amount;
        int32_t bounces;
        float gravity;
        float light;
        float blood_count_multiplier;
        int32_t gore_particles;
        int32_t ragdoll_fx;
        bool friendly_fire;
        float physics_impulse_coeff;
        int32_t lifetime_add;
        std::string sprite;
        std::string extra_entities;
        std::string game_effect_entities;
        std::string sound_loop_tag;
        std::string projectile_file;

        static void parse(binary_io::any_istream &in, ConfigGunActionInfo &out);
    };

    struct ConfigExplosion {
        bool never_cache;
        float explosion_radius;
        std::string explosion_sprite;
        bool explosion_sprite_emissive;
        bool explosion_sprite_additive;
        bool explosion_sprite_random_rotation;
        float explosion_sprite_lifetime;
        float damage;
        ConfigDamageCritical damage_critical;
        float camera_shake;
        bool particle_effect;
        std::string parse_this_entity;
        bool light_enabled;
        float light_fade_time;
        uint32_t light_r;
        uint32_t light_g;
        uint32_t light_b;
        float light_radius_coeff;
        bool hole_enabled;
        bool destroy_non_platform_solid_enabled;
        int32_t electricity_count;
        int32_t min_radius_for_cracks;
        int32_t crack_count;
        float knockback_force;
        bool hole_destroy_liquid;
        bool hole_destroy_physics_dynamic;
        std::string create_cell_material;
        int32_t create_cell_probability;
        int32_t background_lightning_count;
        std::string spark_material;
        int32_t material_sparks_min_hp;
        int32_t material_sparks_probability;
        int32_t material_sparks_count_min;
        int32_t material_sparks_count_max;
        bool material_sparks_enabled;
        bool material_sparks_real;
        bool material_sparks_scale_with_hp;
        bool sparks_enabled;
        int32_t sparks_count_min;
        int32_t sparks_count_max;
        float sparks_inner_radius_coeff;
        bool stains_enabled;
        float stains_radius;
        int32_t ray_energy;
        int32_t max_durability_to_destroy;
        int32_t gore_particle_count;
        bool shake_vegetation;
        bool damage_mortals;
        bool physics_throw_enabled;
        vec2<float> physics_explosion_power;
        float physics_multiplier_ragdoll_force;
        float cell_explosion_power;
        float cell_explosion_radius_min;
        float cell_explosion_radius_max;
        float cell_explosion_velocity_min;
        float cell_explosion_damage_required;
        float cell_explosion_probability;
        float cell_explosion_power_ragdoll_coeff;
        bool pixel_sprites_enabled;
        bool is_digger;
        bool audio_enabled;
        std::string audio_event_name;
        float audio_liquid_amount_normalized;
        ValueRange<int32_t> delay;
        int32_t explosion_delay_id;
        bool not_scaled_by_gamefx;

        static void parse(binary_io::any_istream &in, ConfigExplosion &out);
    };
    
    struct ConfigDamagesByType {
        float melee;
        float projectile;
        float explosion;
        float electricity;
        float fire;
        float drill;
        float slice;
        float ice;
        float healing;
        float physics_hit;
        float radioactive;
        float poison;
        float overheating;
        float curse;
        float holy;

        static void parse(binary_io::any_istream &in, ConfigDamagesByType &out);
    };

    struct ConfigDrugFx {
        float distortion_amount;
        float strobe_amount;
        float after_image_amount;
        float after_image_zoom_mult;
        float after_image_zoom_amount;
        float nightvision_amount;

        static void parse(binary_io::any_istream &in, ConfigDrugFx &out);
    };

    struct ConfigLaser {
        int32_t max_cell_durability_to_destroy;
        uint32_t damage_to_cells;
        float max_length;
        float beam_radius;
        int32_t beam_particle_chance;
        float beam_particle_fade;
        int32_t beam_particle_type;
        bool beam_particle_fade_reverse;
        int32_t hit_particle_chance;
        bool audio_enabled;
        bool audio_hit_always_enabled;
        float damage_to_entities;
        bool damage_apply_hitbox_dmg_multiplier;
        bool root_entity_is_responsible_for_damage;

        static void parse(binary_io::any_istream &in, ConfigLaser &out);
    };

    struct ConfigNpcParty {
        vec2<float> position;
        bool entities_exist;
        int32_t direction;
        float speed;
        std::vector<uint32_t> member_entities;
        std::vector<std::string> member_files;

        static void parse(binary_io::any_istream &in, ConfigNpcParty &out);
    };
    
    struct ConfigPendingPortal {
        uint32_t id;
        uint32_t target_id;
        bool is_at_home;
        std::string target_biome_name;
        vec2<float> position;
        vec2<float> target_position;

        static void parse(binary_io::any_istream &in, ConfigPendingPortal &out);
    };

    template<typename T>
    struct Color {
        T r, g, b, a;

        static void parse(binary_io::any_istream &in, Color<T> &out) {
            priv::read_integral(in, out.r);
            priv::read_integral(in, out.g);
            priv::read_integral(in, out.b);
            priv::read_integral(in, out.a);
        }
    };

    struct CXForm {
        vec2<float> position;
        vec2<float> scale;
        float rotation;

        static void parse(binary_io::any_istream &in, CXForm &out);
    };

    template<typename T>
    struct LensValue {
        T value;
        T value2;
        int32_t unk;

        static void parse(binary_io::any_istream &in, LensValue<T> &out) {
            priv::read_integral(in, out.value);
            priv::read_integral(in, out.value2);
            priv::read_integral(in, out.unk);
        }
    };

    struct PathFindingJumpParams {
        float x;
        float y;
        float lob;

        static void parse(binary_io::any_istream &in, PathFindingJumpParams &out);
    };

    struct ConfigCutThroughWorld {
        int32_t x;
        int32_t y_min;
        int32_t y_max;
        int32_t radius;
        int32_t edge_darkening_width;
        uint32_t global_id;

        static void parse(binary_io::any_istream &in, ConfigCutThroughWorld &out);
    };

    struct PixelSpriteImage {
        uint32_t width;
        uint32_t height;
        uint8_t *buf;

        static void parse(binary_io::any_istream &in, PixelSpriteImage &out);
    };

    struct PixelSprite {
        std::string image_file;
        CXForm transform;
        int32_t someint;
        int32_t someint2;
        bool somebool;
        bool somebool2;
        bool somebool3;
        bool somebool4;
        bool somebool5;
        std::string material;
        bool is_updated;
        PixelSpriteImage image;

        static void parse(binary_io::any_istream &in, PixelSprite &out);
    };
}
