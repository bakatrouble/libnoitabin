#include <noita/components/ItemCostComponent.h>

void noita::components::ItemCostComponent::parse(binary_io::any_istream &in, noita::components::ItemCostComponent &out) {
    priv::read_integral(in, out.cost);
    priv::read_integral(in, out.stealable);
}
