#include <noita/components/CellEaterComponent.h>

void noita::components::CellEaterComponent::parse(binary_io::any_istream &in, noita::components::CellEaterComponent &out) {
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.eat_probability);
    priv::read_integral(in, out.ignored_material);
    priv::read_integral(in, out.only_stain);
    priv::read_integral(in, out.eat_dynamic_physics_bodies);
    priv::read_integral(in, out.limited_materials);
    priv::read_integral(in, out.ignored_material_tag);
    priv::read_integral_vector(in, out.materials);
}
