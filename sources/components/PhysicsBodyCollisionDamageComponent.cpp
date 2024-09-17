#include <noita/components/PhysicsBodyCollisionDamageComponent.h>

void noita::components::PhysicsBodyCollisionDamageComponent::parse(binary_io::any_istream &in, noita::components::PhysicsBodyCollisionDamageComponent &out) {
    priv::read_integral(in, out.speed_threshold);
    priv::read_integral(in, out.damage_multiplier);
}
