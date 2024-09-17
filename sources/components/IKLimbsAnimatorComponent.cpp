#include <noita/components/IKLimbsAnimatorComponent.h>

void noita::components::IKLimbsAnimatorComponent::parse(binary_io::any_istream &in, noita::components::IKLimbsAnimatorComponent &out) {
    priv::read_integral(in, out.future_state_samples);
    priv::read_integral(in, out.ground_attachment_ray_length_coeff);
    priv::read_integral(in, out.leg_velocity_coeff);
    priv::read_integral(in, out.affect_flying);
    priv::read_integral(in, out.large_movement_penalty_coeff);
    priv::read_integral(in, out.no_ground_attachment_penalty_coeff);
    priv::read_integral(in, out.ray_skip_material);
    priv::read_integral(in, out.is_limp);
    types::vec2<float>::parse(in, out.mPrevBodyPosition);
}
