#include <noita/components/LimbBossComponent.h>

void noita::components::LimbBossComponent::parse(binary_io::any_istream &in, noita::components::LimbBossComponent &out) {
    priv::read_integral(in, out.state);
}
