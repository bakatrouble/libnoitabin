#include <noita/components/IKLimbAttackerComponent.h>

void noita::components::IKLimbAttackerComponent::parse(binary_io::any_istream &in, noita::components::IKLimbAttackerComponent &out) {
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.leg_velocity_coeff);
    priv::read_integral(in, out.targeting_radius);
    priv::read_integral(in, out.targeting_raytrace);
    priv::read_integral(in, out.target_entities_with_tag);
    types::vec2<float>::parse(in, out.mTarget);
}
