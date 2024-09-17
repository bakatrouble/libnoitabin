#include <noita/components/CharacterCollisionComponent.h>

void noita::components::CharacterCollisionComponent::parse(binary_io::any_istream &in, noita::components::CharacterCollisionComponent &out) {
    priv::read_integral(in, out.getting_crushed_threshold);
    priv::read_integral(in, out.moving_up_before_getting_crushed_threshold);
}
