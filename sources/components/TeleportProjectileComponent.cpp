#include <noita/components/TeleportProjectileComponent.h>

void noita::components::TeleportProjectileComponent::parse(binary_io::any_istream &in, noita::components::TeleportProjectileComponent &out) {
    priv::read_integral(in, out.min_distance_from_wall);
    priv::read_integral(in, out.actionable_lifetime);
    priv::read_integral(in, out.reset_shooter_y_vel);
}
