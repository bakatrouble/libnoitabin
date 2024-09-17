#include <noita/components/HitEffectComponent.h>

void noita::components::HitEffectComponent::parse(binary_io::any_istream &in, noita::components::HitEffectComponent &out) {
    priv::read_integral(in, out.condition_effect);
    priv::read_integral(in, out.condition_status);
    priv::read_integral(in, out.effect_hit);
    priv::read_integral(in, out.value);
    priv::read_integral(in, out.value_string);
}
