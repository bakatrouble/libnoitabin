#include <noita/components/PhysicsJointComponent.h>

void noita::components::PhysicsJointComponent::parse(binary_io::any_istream &in, noita::components::PhysicsJointComponent &out) {
    priv::read_integral(in, out.nail_to_wall);
    priv::read_integral(in, out.grid_joint);
    priv::read_integral(in, out.breakable);
    priv::read_integral(in, out.type);
    priv::read_integral(in, out.body1_id);
    priv::read_integral(in, out.body2_id);
    priv::read_integral(in, out.pos_x);
    priv::read_integral(in, out.pos_y);
    priv::read_integral(in, out.delta_x);
    priv::read_integral(in, out.delta_y);
    priv::read_integral(in, out.mMotorEnabled);
    priv::read_integral(in, out.mMotorSpeed);
    priv::read_integral(in, out.mMaxMotorTorque);
}
