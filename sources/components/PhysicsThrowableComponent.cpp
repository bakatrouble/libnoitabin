#include <noita/components/PhysicsThrowableComponent.h>

void noita::components::PhysicsThrowableComponent::parse(binary_io::any_istream &in, noita::components::PhysicsThrowableComponent &out) {
    priv::read_integral(in, out.throw_force_coeff);
    priv::read_integral(in, out.max_throw_speed);
    priv::read_integral(in, out.min_torque);
    priv::read_integral(in, out.max_torque);
    priv::read_integral(in, out.tip_check_offset_min);
    priv::read_integral(in, out.tip_check_offset_max);
    priv::read_integral(in, out.tip_check_random_rotation_deg);
    priv::read_integral(in, out.attach_min_speed);
    priv::read_integral(in, out.attach_to_surfaces_knife_style);
    priv::read_integral(in, out.hp);
}
