#include <noita/components/SetLightAlphaFromVelocityComponent.h>

void noita::components::SetLightAlphaFromVelocityComponent::parse(binary_io::any_istream &in, noita::components::SetLightAlphaFromVelocityComponent &out) {
    priv::read_integral(in, out.max_velocity);
}
