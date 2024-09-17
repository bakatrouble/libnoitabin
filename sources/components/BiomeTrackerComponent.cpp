#include <noita/components/BiomeTrackerComponent.h>

void noita::components::BiomeTrackerComponent::parse(binary_io::any_istream &in, noita::components::BiomeTrackerComponent &out) {
    priv::read_integral(in, out.limit_to_every_n_frame);
}
