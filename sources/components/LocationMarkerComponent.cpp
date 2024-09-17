#include <noita/components/LocationMarkerComponent.h>

void noita::components::LocationMarkerComponent::parse(binary_io::any_istream &in, noita::components::LocationMarkerComponent &out) {
    priv::read_integral(in, out.id);
}
