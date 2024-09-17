#include <noita/components/DroneLauncherComponent.h>

void noita::components::DroneLauncherComponent::parse(binary_io::any_istream &in, noita::components::DroneLauncherComponent &out) {
    priv::read_integral(in, out.drone_entity_file);
}
