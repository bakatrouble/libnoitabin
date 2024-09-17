#include <noita/components/FogOfWarRemoverComponent.h>

void noita::components::FogOfWarRemoverComponent::parse(binary_io::any_istream &in, noita::components::FogOfWarRemoverComponent &out) {
    priv::read_integral(in, out.radius);
}
