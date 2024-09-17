#include <noita/components/PhysicsRagdollComponent.h>

void noita::components::PhysicsRagdollComponent::parse(binary_io::any_istream &in, noita::components::PhysicsRagdollComponent &out) {
    priv::read_integral(in, out.filename);
    priv::read_integral(in, out.filenames);
    priv::read_integral(in, out.offset_x);
    priv::read_integral(in, out.offset_y);
}
