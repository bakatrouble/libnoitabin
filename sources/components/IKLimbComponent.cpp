#include <noita/components/IKLimbComponent.h>

void noita::components::IKLimbComponent::parse(binary_io::any_istream &in, noita::components::IKLimbComponent &out) {
    priv::read_integral(in, out.length);
    priv::read_integral(in, out.thigh_extra_lenght);
    types::vec2<float>::parse(in, out.end_position);
    priv::read_integral(in, out.mJointSideInterpolation);
    types::vec2<float>::parse(in, out.mJointWorldPos);
    types::vec2<float>::parse(in, out.mEndPrevPos);
}
