#include <noita/components/PhysicsAIComponent.h>

void noita::components::PhysicsAIComponent::parse(binary_io::any_istream &in, noita::components::PhysicsAIComponent &out) {
    priv::read_integral(in, out.target_vec_max_len);
    priv::read_integral(in, out.force_coeff);
    priv::read_integral(in, out.force_balancing_coeff);
    priv::read_integral(in, out.force_max);
    priv::read_integral(in, out.torque_coeff);
    priv::read_integral(in, out.torque_balancing_coeff);
    priv::read_integral(in, out.torque_max);
    priv::read_integral(in, out.torque_damaged_max);
    priv::read_integral(in, out.torque_jump_random);
    priv::read_integral(in, out.damage_deactivation_probability);
    priv::read_integral(in, out.damage_deactivation_time_min);
    priv::read_integral(in, out.damage_deactivation_time_max);
    priv::read_integral(in, out.die_on_remaining_mass_percentage);
    priv::read_integral(in, out.levitate);
    priv::read_integral(in, out.v0_jump_logic);
    priv::read_integral(in, out.v0_swim_logic);
    priv::read_integral(in, out.v0_body_id_logic);
    priv::read_integral(in, out.swim_check_y_min);
    priv::read_integral(in, out.swim_check_y_max);
    priv::read_integral(in, out.swim_check_side_x);
    priv::read_integral(in, out.swim_check_side_y);
    priv::read_integral(in, out.keep_inside_world);
    priv::read_integral(in, out.free_if_static);
}
