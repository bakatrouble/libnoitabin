#include <noita/components/CharacterDataComponent.h>

void noita::components::CharacterDataComponent::parse(binary_io::any_istream &in, noita::components::CharacterDataComponent &out) {
    priv::read_integral(in, out.platforming_type);
    types::LensValue<float>::parse(in, out.collision_aabb_min_x);
    types::LensValue<float>::parse(in, out.collision_aabb_max_x);
    types::LensValue<float>::parse(in, out.collision_aabb_min_y);
    types::LensValue<float>::parse(in, out.collision_aabb_max_y);
    priv::read_integral(in, out.mass);
    priv::read_integral(in, out.buoyancy_check_offset_y);
    priv::read_integral(in, out.liquid_velocity_coeff);
    priv::read_integral(in, out.gravity);
    types::LensValue<float>::parse(in, out.fly_time_max);
    priv::read_integral(in, out.fly_recharge_spd);
    priv::read_integral(in, out.fly_recharge_spd_ground);
    priv::read_integral(in, out.flying_needs_recharge);
    priv::read_integral(in, out.flying_in_air_wait_frames);
    priv::read_integral(in, out.flying_recharge_removal_frames);
    priv::read_integral(in, out.climb_over_y);
    priv::read_integral(in, out.check_collision_max_size_x);
    priv::read_integral(in, out.check_collision_max_size_y);
    priv::read_integral(in, out.is_on_ground);
    priv::read_integral(in, out.is_on_slippery_ground);
    priv::read_integral(in, out.ground_stickyness);
    priv::read_integral(in, out.effect_hit_ground);
    priv::read_integral(in, out.eff_hg_damage_min);
    priv::read_integral(in, out.eff_hg_damage_max);
    priv::read_integral(in, out.eff_hg_position_x);
    priv::read_integral(in, out.eff_hg_position_y);
    priv::read_integral(in, out.eff_hg_size_x);
    priv::read_integral(in, out.eff_hg_size_y);
    priv::read_integral(in, out.eff_hg_velocity_min_x);
    priv::read_integral(in, out.eff_hg_velocity_max_x);
    priv::read_integral(in, out.eff_hg_velocity_min_y);
    priv::read_integral(in, out.eff_hg_velocity_max_y);
    priv::read_integral(in, out.eff_hg_offset_y);
    priv::read_integral(in, out.eff_hg_update_box2d);
    priv::read_integral(in, out.eff_hg_b2force_multiplier);
    priv::read_integral(in, out.destroy_ground);
    priv::read_integral(in, out.send_transform_update_message);
    priv::read_integral(in, out.dont_update_velocity_and_xform);
    priv::read_integral(in, out.mFlyingTimeLeft);
}
