#include <noita/components/PlayerCollisionComponent.h>

void noita::components::PlayerCollisionComponent::parse(binary_io::any_istream &in, noita::components::PlayerCollisionComponent &out) {
    priv::read_integral(in, out.getting_crushed_threshold);
    priv::read_integral(in, out.moving_up_before_getting_crushed_threshold);
}
