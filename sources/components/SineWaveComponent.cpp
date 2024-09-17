#include <noita/components/SineWaveComponent.h>

void noita::components::SineWaveComponent::parse(binary_io::any_istream &in, noita::components::SineWaveComponent &out) {
    priv::read_integral(in, out.sinewave_freq);
    priv::read_integral(in, out.sinewave_m);
    priv::read_integral(in, out.lifetime);
}
