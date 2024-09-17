#include <noita/components/SpriteStainsComponent.h>

void noita::components::SpriteStainsComponent::parse(binary_io::any_istream &in, noita::components::SpriteStainsComponent &out) {
    priv::read_integral(in, out.sprite_id);
    priv::read_integral(in, out.fade_stains_towards_srite_top);
    types::LensValue<int32_t>::parse(in, out.stain_shaken_drop_chance_multiplier);
}
