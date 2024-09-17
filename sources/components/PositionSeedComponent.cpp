#include <noita/components/PositionSeedComponent.h>

void noita::components::PositionSeedComponent::parse(binary_io::any_istream &in, noita::components::PositionSeedComponent &out) {
    priv::read_integral(in, out.pos_x);
    priv::read_integral(in, out.pos_y);
}
