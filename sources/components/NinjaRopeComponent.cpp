#include <noita/components/NinjaRopeComponent.h>

void noita::components::NinjaRopeComponent::parse(binary_io::any_istream &in, noita::components::NinjaRopeComponent &out) {
    priv::read_integral(in, out.max_length);
    priv::read_integral(in, out.mLength);
}
