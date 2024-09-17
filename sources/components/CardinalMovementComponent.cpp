#include <noita/components/CardinalMovementComponent.h>

void noita::components::CardinalMovementComponent::parse(binary_io::any_istream &in, noita::components::CardinalMovementComponent &out) {
    priv::read_integral(in, out.horizontal_movement);
    priv::read_integral(in, out.vertical_movement);
    priv::read_integral(in, out.intercardinal_movement);
}
