#include <noita/types.h>

void noita::types::AABB::parse(binary_io::any_istream &in, noita::types::AABB &out) {
    ValueRange<int32_t>::parse(in, out.x);
    ValueRange<int32_t>::parse(in, out.y);
}

void noita::types::ConfigGun::parse(binary_io::any_istream &in, noita::types::ConfigGun &out) {
    priv::read_integral(in, out.actions_per_round);
    priv::read_integral(in, out.shuffle_deck_when_empty);
    priv::read_integral(in, out.reparse_time);
    priv::read_integral(in, out.deck_capacity);
}

void noita::types::PixelSprite::parse(binary_io::any_istream &in, noita::types::PixelSprite &out) {
    priv::read_integral(in, out.image_file);
    CXForm::parse(in, out.transform);
    priv::read_integral(in, out.someint);
    priv::read_integral(in, out.someint2);
    priv::read_integral(in, out.somebool);
    priv::read_integral(in, out.somebool2);
    priv::read_integral(in, out.somebool3);
    priv::read_integral(in, out.somebool4);
    priv::read_integral(in, out.somebool5);
    priv::read_integral(in, out.material);
    priv::read_integral(in, out.is_updated);
    if (out.is_updated)
        PixelSpriteImage::parse(in, out.image);
}

void noita::types::ConfigDamageCritical::parse(binary_io::any_istream &in, noita::types::ConfigDamageCritical &out) {
    priv::read_integral(in, out.chance);
    priv::read_integral(in, out.damage_multiplier);
}

void noita::types::ConfigGunActionInfo::parse(binary_io::any_istream &in, noita::types::ConfigGunActionInfo &out) {
    priv::read_integral(in, out.action_id);
    priv::read_integral(in, out.action_name);
    priv::read_integral(in, out.action_description);
    priv::read_integral(in, out.action_sprite_filename);
    priv::read_integral(in, out.action_unidentified_sprite_filename);
    priv::read_integral(in, out.action_type);
    priv::read_integral(in, out.action_spawn_level);
    priv::read_integral(in, out.action_spawn_probability);
    priv::read_integral(in, out.action_spawn_requires_flag);
    priv::read_integral(in, out.action_spawn_manual_unlock);
    priv::read_integral(in, out.action_max_uses);
    priv::read_integral(in, out.custom_xml_file);
    priv::read_integral(in, out.action_mana_drain);
    priv::read_integral(in, out.action_is_dangerous_blast);
    priv::read_integral(in, out.action_draw_many_count);
    priv::read_integral(in, out.action_ai_never_uses);
    priv::read_integral(in, out.action_never_unlimited);
    priv::read_integral(in, out.state_shuffled);
    priv::read_integral(in, out.state_cards_drawn);
    priv::read_integral(in, out.state_discarded_action);
    priv::read_integral(in, out.state_destroyed_action);
    priv::read_integral(in, out.fire_rate_wait);
    priv::read_integral(in, out.speed_multiplier);
    priv::read_integral(in, out.child_speed_multiplier);
    priv::read_integral(in, out.dampening);
    priv::read_integral(in, out.explosion_radius);
    priv::read_integral(in, out.spread_degrees);
    priv::read_integral(in, out.pattern_degrees);
    priv::read_integral(in, out.screenshake);
    priv::read_integral(in, out.recoil);
    priv::read_integral(in, out.damage_melee_add);
    priv::read_integral(in, out.damage_projectile_add);
    priv::read_integral(in, out.damage_electricity_add);
    priv::read_integral(in, out.damage_fire_add);
    priv::read_integral(in, out.damage_explosion_add);
    priv::read_integral(in, out.damage_ice_add);
    priv::read_integral(in, out.damage_slice_add);
    priv::read_integral(in, out.damage_healing_add);
    priv::read_integral(in, out.damage_curse_add);
    priv::read_integral(in, out.damage_drill_add);
    priv::read_integral(in, out.damage_null_add);
    priv::read_integral(in, out.damage_critical_chance);
    priv::read_integral(in, out.damage_critical_multiplier);
    priv::read_integral(in, out.explosion_damage_to_materials);
    priv::read_integral(in, out.knockback_force);
    priv::read_integral(in, out.reparse_time);
    priv::read_integral(in, out.lightning_count);
    priv::read_integral(in, out.material);
    priv::read_integral(in, out.material_amount);
    priv::read_integral(in, out.trail_material);
    priv::read_integral(in, out.trail_material_amount);
    priv::read_integral(in, out.bounces);
    priv::read_integral(in, out.gravity);
    priv::read_integral(in, out.light);
    priv::read_integral(in, out.blood_count_multiplier);
    priv::read_integral(in, out.gore_particles);
    priv::read_integral(in, out.ragdoll_fx);
    priv::read_integral(in, out.friendly_fire);
    priv::read_integral(in, out.physics_impulse_coeff);
    priv::read_integral(in, out.lifetime_add);
    priv::read_integral(in, out.sprite);
    priv::read_integral(in, out.extra_entities);
    priv::read_integral(in, out.game_effect_entities);
    priv::read_integral(in, out.sound_loop_tag);
    priv::read_integral(in, out.projectile_file);
}

void noita::types::ConfigExplosion::parse(binary_io::any_istream &in, noita::types::ConfigExplosion &out) {
    priv::read_integral(in, out.never_cache);
    priv::read_integral(in, out.explosion_radius);
    priv::read_integral(in, out.explosion_sprite);
    priv::read_integral(in, out.explosion_sprite_emissive);
    priv::read_integral(in, out.explosion_sprite_additive);
    priv::read_integral(in, out.explosion_sprite_random_rotation);
    priv::read_integral(in, out.explosion_sprite_lifetime);
    priv::read_integral(in, out.damage);
    ConfigDamageCritical::parse(in, out.damage_critical);
    priv::read_integral(in, out.camera_shake);
    priv::read_integral(in, out.particle_effect);
    priv::read_integral(in, out.parse_this_entity);
    priv::read_integral(in, out.light_enabled);
    priv::read_integral(in, out.light_fade_time);
    priv::read_integral(in, out.light_r);
    priv::read_integral(in, out.light_g);
    priv::read_integral(in, out.light_b);
    priv::read_integral(in, out.light_radius_coeff);
    priv::read_integral(in, out.hole_enabled);
    priv::read_integral(in, out.destroy_non_platform_solid_enabled);
    priv::read_integral(in, out.electricity_count);
    priv::read_integral(in, out.min_radius_for_cracks);
    priv::read_integral(in, out.crack_count);
    priv::read_integral(in, out.knockback_force);
    priv::read_integral(in, out.hole_destroy_liquid);
    priv::read_integral(in, out.hole_destroy_physics_dynamic);
    priv::read_integral(in, out.create_cell_material);
    priv::read_integral(in, out.create_cell_probability);
    priv::read_integral(in, out.background_lightning_count);
    priv::read_integral(in, out.spark_material);
    priv::read_integral(in, out.material_sparks_min_hp);
    priv::read_integral(in, out.material_sparks_probability);
    priv::read_integral(in, out.material_sparks_count_min);
    priv::read_integral(in, out.material_sparks_count_max);
    priv::read_integral(in, out.material_sparks_enabled);
    priv::read_integral(in, out.material_sparks_real);
    priv::read_integral(in, out.material_sparks_scale_with_hp);
    priv::read_integral(in, out.sparks_enabled);
    priv::read_integral(in, out.sparks_count_min);
    priv::read_integral(in, out.sparks_count_max);
    priv::read_integral(in, out.sparks_inner_radius_coeff);
    priv::read_integral(in, out.stains_enabled);
    priv::read_integral(in, out.stains_radius);
    priv::read_integral(in, out.ray_energy);
    priv::read_integral(in, out.max_durability_to_destroy);
    priv::read_integral(in, out.gore_particle_count);
    priv::read_integral(in, out.shake_vegetation);
    priv::read_integral(in, out.damage_mortals);
    priv::read_integral(in, out.physics_throw_enabled);
    vec2<float>::parse(in, out.physics_explosion_power);
    priv::read_integral(in, out.physics_multiplier_ragdoll_force);
    priv::read_integral(in, out.cell_explosion_power);
    priv::read_integral(in, out.cell_explosion_radius_min);
    priv::read_integral(in, out.cell_explosion_radius_max);
    priv::read_integral(in, out.cell_explosion_velocity_min);
    priv::read_integral(in, out.cell_explosion_damage_required);
    priv::read_integral(in, out.cell_explosion_probability);
    priv::read_integral(in, out.cell_explosion_power_ragdoll_coeff);
    priv::read_integral(in, out.pixel_sprites_enabled);
    priv::read_integral(in, out.is_digger);
    priv::read_integral(in, out.audio_enabled);
    priv::read_integral(in, out.audio_event_name);
    priv::read_integral(in, out.audio_liquid_amount_normalized);
    ValueRange<int32_t>::parse(in, out.delay);
    priv::read_integral(in, out.explosion_delay_id);
    priv::read_integral(in, out.not_scaled_by_gamefx);
}

void noita::types::ConfigDamagesByType::parse(binary_io::any_istream &in, noita::types::ConfigDamagesByType &out) {
    priv::read_integral(in, out.melee);
    priv::read_integral(in, out.projectile);
    priv::read_integral(in, out.explosion);
    priv::read_integral(in, out.electricity);
    priv::read_integral(in, out.fire);
    priv::read_integral(in, out.drill);
    priv::read_integral(in, out.slice);
    priv::read_integral(in, out.ice);
    priv::read_integral(in, out.healing);
    priv::read_integral(in, out.physics_hit);
    priv::read_integral(in, out.radioactive);
    priv::read_integral(in, out.poison);
    priv::read_integral(in, out.overheating);
    priv::read_integral(in, out.curse);
    priv::read_integral(in, out.holy);
}

void noita::types::ConfigDrugFx::parse(binary_io::any_istream &in, noita::types::ConfigDrugFx &out) {
    priv::read_integral(in, out.distortion_amount);
    priv::read_integral(in, out.strobe_amount);
    priv::read_integral(in, out.after_image_amount);
    priv::read_integral(in, out.after_image_zoom_mult);
    priv::read_integral(in, out.after_image_zoom_amount);
    priv::read_integral(in, out.nightvision_amount);
}

void noita::types::ConfigLaser::parse(binary_io::any_istream &in, ConfigLaser &out) {
    priv::read_integral(in, out.max_cell_durability_to_destroy);
    priv::read_integral(in, out.damage_to_cells);
    priv::read_integral(in, out.max_length);
    priv::read_integral(in, out.beam_radius);
    priv::read_integral(in, out.beam_particle_chance);
    priv::read_integral(in, out.beam_particle_fade);
    priv::read_integral(in, out.beam_particle_type);
    priv::read_integral(in, out.beam_particle_fade_reverse);
    priv::read_integral(in, out.hit_particle_chance);
    priv::read_integral(in, out.audio_enabled);
    priv::read_integral(in, out.audio_hit_always_enabled);
    priv::read_integral(in, out.damage_to_entities);
    priv::read_integral(in, out.damage_apply_hitbox_dmg_multiplier);
    priv::read_integral(in, out.root_entity_is_responsible_for_damage);
}

void noita::types::ConfigNpcParty::parse(binary_io::any_istream &in, noita::types::ConfigNpcParty &out) {
    vec2<float>::parse(in, out.position);
    priv::read_integral(in, out.entities_exist);
    priv::read_integral(in, out.direction);
    priv::read_integral(in, out.speed);
    priv::read_integral_vector(in, out.member_entities);
    priv::read_integral_vector(in, out.member_files);
}

void noita::types::ConfigPendingPortal::parse(binary_io::any_istream &in, noita::types::ConfigPendingPortal &out) {
    priv::read_integral(in, out.id);
    priv::read_integral(in, out.target_id);
    priv::read_integral(in, out.is_at_home);
    priv::read_integral(in, out.target_biome_name);
    vec2<float>::parse(in, out.position);
    vec2<float>::parse(in, out.target_position);
}

void noita::types::CXForm::parse(binary_io::any_istream &in, noita::types::CXForm &out) {
    vec2<float>::parse(in, out.position);
    vec2<float>::parse(in, out.scale);
    priv::read_integral(in, out.rotation);
}

void noita::types::PathFindingJumpParams::parse(binary_io::any_istream &in, noita::types::PathFindingJumpParams &out) {
    priv::read_integral(in, out.x);
    priv::read_integral(in, out.y);
    priv::read_integral(in, out.lob);
}

void noita::types::ConfigCutThroughWorld::parse(binary_io::any_istream &in, noita::types::ConfigCutThroughWorld &out) {
    priv::read_integral(in, out.x);
    priv::read_integral(in, out.y_min);
    priv::read_integral(in, out.y_max);
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.edge_darkening_width);
    priv::read_integral(in, out.global_id);
}

void noita::types::PixelSpriteImage::parse(binary_io::any_istream &in, noita::types::PixelSpriteImage &out) {
    priv::read_integral(in, out.width);
    priv::read_integral(in, out.height);
    out.buf = new uint8_t[out.width * out.height * 4];
    in.read_bytes(std::as_writable_bytes(std::span{ out.buf, out.width * out.height * 4 }));
}
