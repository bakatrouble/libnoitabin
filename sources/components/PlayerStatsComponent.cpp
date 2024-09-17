#include <noita/components/PlayerStatsComponent.h>

void noita::components::PlayerStatsComponent::parse(binary_io::any_istream &in, noita::components::PlayerStatsComponent &out) {
    priv::read_integral(in, out.lives);
    priv::read_integral(in, out.max_hp);
    priv::read_integral(in, out.speed);
}
