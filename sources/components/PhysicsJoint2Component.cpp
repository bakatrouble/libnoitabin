#include <noita/components/PhysicsJoint2Component.h>

void noita::components::PhysicsJoint2Component::parse(binary_io::any_istream &in, noita::components::PhysicsJoint2Component &out) {
    priv::read_integral(in, out.joint_id);
    priv::read_integral(in, out.break_force);
    priv::read_integral(in, out.break_distance);
    priv::read_integral(in, out.break_on_body_modified);
    priv::read_integral(in, out.break_on_shear_angle_deg);
    priv::read_integral(in, out.type);
    priv::read_integral(in, out.body1_id);
    priv::read_integral(in, out.body2_id);
    priv::read_integral(in, out.offset_x);
    priv::read_integral(in, out.offset_y);
    priv::read_integral(in, out.ray_x);
    priv::read_integral(in, out.ray_y);
    priv::read_integral(in, out.surface_attachment_offset_x);
    priv::read_integral(in, out.surface_attachment_offset_y);
}
