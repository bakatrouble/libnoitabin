#include <noita/components/GameAreaEffectComponent.h>

void noita::components::GameAreaEffectComponent::parse(binary_io::any_istream &in, noita::components::GameAreaEffectComponent &out) {
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.collide_with_tag);
    priv::read_integral(in, out.frame_length);
    priv::read_integral_vector(in, out.game_effect_entitities);
}
