#include <noita/components/AltarComponent.h>

void noita::components::AltarComponent::parse(binary_io::any_istream &in, noita::components::AltarComponent &out) {
    priv::read_integral(in, out.recognized_entity_tags);
    priv::read_integral(in, out.good_fx_material);
    priv::read_integral(in, out.neutral_fx_material);
    priv::read_integral(in, out.evil_fx_material);
    priv::read_integral(in, out.uses_remaining);
}
