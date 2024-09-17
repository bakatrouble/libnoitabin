#include <noita/components/CameraBoundComponent.h>

void noita::components::CameraBoundComponent::parse(binary_io::any_istream &in, noita::components::CameraBoundComponent &out) {
    priv::read_integral(in, out.enabled);
    priv::read_integral(in, out.distance);
    priv::read_integral(in, out.distance_border);
    priv::read_integral(in, out.max_count);
    priv::read_integral(in, out.freeze_on_distance_kill);
    priv::read_integral(in, out.freeze_on_max_count_kill);
}
