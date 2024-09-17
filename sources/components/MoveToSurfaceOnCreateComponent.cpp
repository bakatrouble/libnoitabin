#include <noita/components/MoveToSurfaceOnCreateComponent.h>

void noita::components::MoveToSurfaceOnCreateComponent::parse(binary_io::any_istream &in, noita::components::MoveToSurfaceOnCreateComponent &out) {
    priv::read_integral(in, out.type);
    priv::read_integral(in, out.lookup_radius);
    priv::read_integral(in, out.offset_from_surface);
    priv::read_integral(in, out.ray_count);
    priv::read_integral(in, out.verlet_min_joint_distance);
}
