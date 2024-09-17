#include <noita/components/VelocityComponent.h>

void noita::components::VelocityComponent::parse(binary_io::any_istream &in, noita::components::VelocityComponent &out) {
    priv::read_integral(in, out.gravity_x);
    priv::read_integral(in, out.gravity_y);
    priv::read_integral(in, out.mass);
    priv::read_integral(in, out.air_friction);
    priv::read_integral(in, out.terminal_velocity);
    priv::read_integral(in, out.apply_terminal_velocity);
    priv::read_integral(in, out.updates_velocity);
    priv::read_integral(in, out.displace_liquid);
    priv::read_integral(in, out.affect_physics_bodies);
    priv::read_integral(in, out.limit_to_max_velocity);
    priv::read_integral(in, out.liquid_death_threshold);
    priv::read_integral(in, out.liquid_drag);
    types::vec2<float>::parse(in, out.mVelocity);
}
