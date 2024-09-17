#include <noita/components/TorchComponent.h>

void noita::components::TorchComponent::parse(binary_io::any_istream &in, noita::components::TorchComponent &out) {
    priv::read_integral(in, out.probability_of_ignition_attempt);
    priv::read_integral(in, out.suffocation_check_offset_y);
    priv::read_integral(in, out.frames_suffocated_to_extinguish);
    priv::read_integral(in, out.extinguishable);
    priv::read_integral(in, out.fire_audio_weight);
}
