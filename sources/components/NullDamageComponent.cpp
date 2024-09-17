#include <noita/components/NullDamageComponent.h>

void noita::components::NullDamageComponent::parse(binary_io::any_istream &in, noita::components::NullDamageComponent &out) {
    priv::read_integral(in, out.null_chance);
}
