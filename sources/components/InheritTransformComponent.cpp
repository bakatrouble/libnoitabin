#include <noita/components/InheritTransformComponent.h>

void noita::components::InheritTransformComponent::parse(binary_io::any_istream &in, noita::components::InheritTransformComponent &out) {
    priv::read_integral(in, out.use_root_parent);
    priv::read_integral(in, out.only_position);
    priv::read_integral(in, out.parent_hotspot_tag);
    priv::read_integral(in, out.parent_sprite_id);
    priv::read_integral(in, out.always_use_immediate_parent_rotation);
    priv::read_integral(in, out.rotate_based_on_x_scale);
    types::CXForm::parse(in, out.Transform);
}
