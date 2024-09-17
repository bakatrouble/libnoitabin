#include <noita/components/MaterialInventoryComponent.h>

void noita::components::MaterialInventoryComponent::parse(binary_io::any_istream &in, noita::components::MaterialInventoryComponent &out) {
    priv::read_integral(in, out.drop_as_item);
    priv::read_integral(in, out.on_death_spill);
    priv::read_integral(in, out.leak_gently);
    priv::read_integral(in, out.leak_on_damage_percent);
    priv::read_integral(in, out.leak_pressure_min);
    priv::read_integral(in, out.leak_pressure_max);
    priv::read_integral(in, out.min_damage_to_leak);
    priv::read_integral(in, out.b2_force_on_leak);
    priv::read_integral(in, out.death_throw_particle_velocity_coeff);
    priv::read_integral(in, out.kill_when_empty);
    priv::read_integral(in, out.halftime_materials);
    priv::read_integral(in, out.do_reactions);
    priv::read_integral(in, out.do_reactions_explosions);
    priv::read_integral(in, out.do_reactions_entities);
    priv::read_integral(in, out.reaction_speed);
    priv::read_integral(in, out.reactions_shaking_speeds_up);
    priv::read_integral(in, out.max_capacity);
    priv::read_integral_vector(in, out.count_per_material_type);
    priv::read_integral(in, out.audio_collision_size_modifier_amount);
    priv::read_integral(in, out.last_frame_drank);
}
