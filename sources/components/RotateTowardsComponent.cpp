#include <noita/components/RotateTowardsComponent.h>

void noita::components::RotateTowardsComponent::parse(binary_io::any_istream &in, noita::components::RotateTowardsComponent &out) {
    priv::read_integral(in, out.entity_with_tag);
}
