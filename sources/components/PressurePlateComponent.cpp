#include <noita/components/PressurePlateComponent.h>

void noita::components::PressurePlateComponent::parse(binary_io::any_istream &in, noita::components::PressurePlateComponent &out) {
    priv::read_integral(in, out.check_every_x_frames);
    priv::read_integral(in, out.state);
    types::vec2<float>::parse(in, out.aabb_min);
    types::vec2<float>::parse(in, out.aabb_max);
    priv::read_integral(in, out.material_percent);
}
