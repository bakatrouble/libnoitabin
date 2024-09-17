#include <noita/components/WormAttractorComponent.h>

void noita::components::WormAttractorComponent::parse(binary_io::any_istream &in, noita::components::WormAttractorComponent &out) {
    priv::read_integral(in, out.direction);
    priv::read_integral(in, out.radius);
}
