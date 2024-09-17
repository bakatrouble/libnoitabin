#include <noita/components/PhysicsJoint2MutatorComponent.h>

void noita::components::PhysicsJoint2MutatorComponent::parse(binary_io::any_istream &in, noita::components::PhysicsJoint2MutatorComponent &out) {
    priv::read_integral(in, out.joint_id);
    priv::read_integral(in, out.destroy);
    priv::read_integral(in, out.motor_speed);
    priv::read_integral(in, out.motor_max_torque);
    priv::read_integral(in, out.mBox2DJointId);
}
