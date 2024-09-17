#include <noita/components/ShotEffectComponent.h>

void noita::components::ShotEffectComponent::parse(binary_io::any_istream &in, noita::components::ShotEffectComponent &out) {
    priv::read_integral(in, out.condition_effect);
    priv::read_integral(in, out.condition_status);
    priv::read_integral(in, out.extra_modifier);
}
