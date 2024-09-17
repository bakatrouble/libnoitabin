#include <noita/components/LevitationComponent.h>

void noita::components::LevitationComponent::parse(binary_io::any_istream &in, noita::components::LevitationComponent &out) {
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.entity_force);
    priv::read_integral(in, out.box2d_force);
    priv::read_integral(in, out.effect_lifetime_frames);
}
