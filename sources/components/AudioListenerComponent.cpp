#include <noita/components/AudioListenerComponent.h>

void noita::components::AudioListenerComponent::parse(binary_io::any_istream &in, noita::components::AudioListenerComponent &out) {
    priv::read_integral(in, out.z);
}
