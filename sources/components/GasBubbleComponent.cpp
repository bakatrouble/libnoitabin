#include <noita/components/GasBubbleComponent.h>

void noita::components::GasBubbleComponent::parse(binary_io::any_istream &in, noita::components::GasBubbleComponent &out) {
    priv::read_integral(in, out.acceleration);
    priv::read_integral(in, out.max_speed);
}
