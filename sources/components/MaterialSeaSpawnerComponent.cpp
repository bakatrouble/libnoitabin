#include <noita/components/MaterialSeaSpawnerComponent.h>

void noita::components::MaterialSeaSpawnerComponent::parse(binary_io::any_istream &in, noita::components::MaterialSeaSpawnerComponent &out) {
    priv::read_integral(in, out.material);
    types::vec2<int32_t>::parse(in, out.size);
    types::vec2<int32_t>::parse(in, out.offset);
    priv::read_integral(in, out.speed);
    priv::read_integral(in, out.sine_wavelength);
    priv::read_integral(in, out.sine_amplitude);
    priv::read_integral(in, out.noise_scale);
    priv::read_integral(in, out.noise_threshold);
    priv::read_integral(in, out.m_position);
    priv::read_integral(in, out.frames_run);
}
