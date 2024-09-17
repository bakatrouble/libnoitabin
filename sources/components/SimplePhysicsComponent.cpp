#include <noita/components/SimplePhysicsComponent.h>

void noita::components::SimplePhysicsComponent::parse(binary_io::any_istream &in, noita::components::SimplePhysicsComponent &out) {
    priv::read_integral(in, out.can_go_up);
}
