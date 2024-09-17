#include <noita/components/OrbComponent.h>

void noita::components::OrbComponent::parse(binary_io::any_istream &in, noita::components::OrbComponent &out) {
    priv::read_integral(in, out.orb_id);
}
