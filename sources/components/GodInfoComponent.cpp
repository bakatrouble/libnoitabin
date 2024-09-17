#include <noita/components/GodInfoComponent.h>

void noita::components::GodInfoComponent::parse(binary_io::any_istream &in, noita::components::GodInfoComponent &out) {
    priv::read_integral(in, out.mana_current);
    priv::read_integral(in, out.mana_max);
    priv::read_integral(in, out.gold);
}
