#include <noita/components/VerletPhysicsComponent.h>

void noita::components::VerletPhysicsComponent::parse(binary_io::any_istream &in, noita::components::VerletPhysicsComponent &out) {
    priv::read_integral(in, out.num_points);
    priv::read_integral(in, out.num_links);
    priv::read_integral(in, out.width);
    priv::read_integral(in, out.type);
    priv::read_integral(in, out.resting_distance);
    priv::read_integral(in, out.mass_min);
    priv::read_integral(in, out.mass_max);
    priv::read_integral(in, out.stiffness);
    priv::read_integral(in, out.velocity_dampening);
    priv::read_integral(in, out.liquid_damping);
    priv::read_integral(in, out.gets_entity_velocity_coeff);
    priv::read_integral(in, out.collide_with_cells);
    priv::read_integral(in, out.simulate_gravity);
    priv::read_integral(in, out.simulate_wind);
    priv::read_integral(in, out.wind_change_speed);
    priv::read_integral(in, out.constrain_stretching);
    priv::read_integral(in, out.pixelate_sprite_transforms);
    priv::read_integral(in, out.scale_sprite_x);
    priv::read_integral(in, out.follow_entity_transform);
    types::vec2<float>::parse(in, out.animation_target_offset);
    priv::read_integral(in, out.animation_amount);
    priv::read_integral(in, out.animation_speed);
    priv::read_integral(in, out.animation_energy);
    priv::read_integral(in, out.cloth_sprite_z_index);
    priv::read_integral(in, out.stain_cells_probability);
    priv::read_integral(in, out.cloth_color_edge);
    priv::read_integral(in, out.cloth_color);
    types::vec2<float>::parse(in, out.m_position_previous);
    priv::read_integral(in, out.m_is_culled_previous);
    priv::read_integral_vector(in, out.colors);
    priv::read_integral_vector(in, out.materials);
}
