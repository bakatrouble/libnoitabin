#include <noita/components/FogOfWarRadiusComponent.h>

void noita::components::FogOfWarRadiusComponent::parse(binary_io::any_istream &in, noita::components::FogOfWarRadiusComponent &out) {
    priv::read_integral(in, out.radius);
}
