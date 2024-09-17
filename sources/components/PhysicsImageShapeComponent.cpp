#include <noita/components/PhysicsImageShapeComponent.h>

void noita::components::PhysicsImageShapeComponent::parse(binary_io::any_istream &in, noita::components::PhysicsImageShapeComponent &out) {
    priv::read_integral(in, out.is_root);
    priv::read_integral(in, out.body_id);
    priv::read_integral(in, out.use_sprite);
    priv::read_integral(in, out.is_circle);
    priv::read_integral(in, out.centered);
    priv::read_integral(in, out.offset_x);
    priv::read_integral(in, out.offset_y);
    priv::read_integral(in, out.z);
    priv::read_integral(in, out.image_file);
    priv::read_integral(in, out.material);
}
