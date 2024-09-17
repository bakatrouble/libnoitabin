#include <noita/components/VerletWorldJointComponent.h>

void noita::components::VerletWorldJointComponent::parse(binary_io::any_istream &in, noita::components::VerletWorldJointComponent &out) {
    types::vec2<float>::parse(in, out.world_position);
    priv::read_integral(in, out.verlet_point_index);
}
