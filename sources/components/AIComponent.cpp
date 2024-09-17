#include <noita/components/AIComponent.h>

void noita::components::AIComponent::parse(binary_io::any_istream &in, noita::components::AIComponent &out) {
    priv::read_integral(in, out.TEMP_TEMP_TEMP);
}
