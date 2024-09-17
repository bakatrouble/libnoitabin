#include <noita/components/KickComponent.h>

void noita::components::KickComponent::parse(binary_io::any_istream &in, noita::components::KickComponent &out) {
    priv::read_integral(in, out.can_kick);
    types::LensValue<float>::parse(in, out.max_force);
    types::LensValue<float>::parse(in, out.player_kickforce);
    priv::read_integral(in, out.kick_radius);
    types::LensValue<float>::parse(in, out.kick_damage);
    types::LensValue<float>::parse(in, out.kick_knockback);
    priv::read_integral(in, out.telekinesis_throw_speed);
    priv::read_integral(in, out.kick_entities);
}
