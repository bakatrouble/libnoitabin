#include <noita/components/PhysicsShapeComponent.h>

void noita::components::PhysicsShapeComponent::parse(binary_io::any_istream &in, noita::components::PhysicsShapeComponent &out) {
    priv::read_integral(in, out.recreate);
    priv::read_integral(in, out.is_circle);
    priv::read_integral(in, out.is_box);
    priv::read_integral(in, out.is_capsule);
    priv::read_integral(in, out.is_based_on_sprite);
    priv::read_integral(in, out.friction);
    priv::read_integral(in, out.restitution);
    priv::read_integral(in, out.density);
    priv::read_integral(in, out.local_position_x);
    priv::read_integral(in, out.local_position_y);
    priv::read_integral(in, out.radius_x);
    priv::read_integral(in, out.radius_y);
    priv::read_integral(in, out.capsule_x_percent);
    priv::read_integral(in, out.capsule_y_percent);
    priv::read_integral(in, out.material);
}
