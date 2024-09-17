#include <noita/components/MagicXRayComponent.h>

void noita::components::MagicXRayComponent::parse(binary_io::any_istream &in, noita::components::MagicXRayComponent &out) {
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.steps_per_frame);
    priv::read_integral(in, out.mStep);
    priv::read_integral(in, out.mRadius);
}
