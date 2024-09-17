#include <noita/components/ArcComponent.h>

void noita::components::ArcComponent::parse(binary_io::any_istream &in, noita::components::ArcComponent &out) {
    priv::read_integral(in, out.type);
    priv::read_integral(in, out.material);
    priv::read_integral(in, out.lifetime);
}
