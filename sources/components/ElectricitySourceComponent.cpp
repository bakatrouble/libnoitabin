#include <noita/components/ElectricitySourceComponent.h>

void noita::components::ElectricitySourceComponent::parse(binary_io::any_istream &in, noita::components::ElectricitySourceComponent &out) {
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.emission_interval_frames);
}
