#include <noita/components/DieIfSpeedBelowComponent.h>

void noita::components::DieIfSpeedBelowComponent::parse(binary_io::any_istream &in, noita::components::DieIfSpeedBelowComponent &out) {
    priv::read_integral(in, out.min_speed);
    priv::read_integral(in, out.mMinSpeedSquared);
}
