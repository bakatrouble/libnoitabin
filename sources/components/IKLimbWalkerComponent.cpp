#include <noita/components/IKLimbWalkerComponent.h>

void noita::components::IKLimbWalkerComponent::parse(binary_io::any_istream &in, noita::components::IKLimbWalkerComponent &out) {
    priv::read_integral(in, out.ground_attachment_min_spread);
    priv::read_integral(in, out.ground_attachment_max_tries);
    priv::read_integral(in, out.ground_attachment_max_angle);
    priv::read_integral(in, out.ground_attachment_ray_length_coeff);
    priv::read_integral(in, out.leg_velocity_coeff);
    priv::read_integral(in, out.affect_flying);
    priv::read_integral(in, out.ray_skip_material);
    types::vec2<float>::parse(in, out.mTarget);
    types::vec2<float>::parse(in, out.mPrevTarget);
    types::vec2<float>::parse(in, out.mPrevCenterPosition);
    priv::read_integral(in, out.mState);
}
