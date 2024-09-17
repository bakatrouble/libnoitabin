#include <noita/components/HomingComponent.h>

void noita::components::HomingComponent::parse(binary_io::any_istream &in, noita::components::HomingComponent &out) {
    priv::read_integral(in, out.target_tag);
    priv::read_integral(in, out.target_who_shot);
    priv::read_integral(in, out.detect_distance);
    priv::read_integral(in, out.homing_velocity_multiplier);
    priv::read_integral(in, out.homing_targeting_coeff);
    priv::read_integral(in, out.just_rotate_towards_target);
    priv::read_integral(in, out.max_turn_rate);
    priv::read_integral(in, out.predefined_target);
    priv::read_integral(in, out.look_for_root_entities_only);
}
