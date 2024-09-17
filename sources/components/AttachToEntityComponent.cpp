#include <noita/components/AttachToEntityComponent.h>

void noita::components::AttachToEntityComponent::parse(binary_io::any_istream &in, noita::components::AttachToEntityComponent &out) {
    priv::read_integral(in, out.only_position);
    priv::read_integral(in, out.target_hotspot_tag);
    priv::read_integral(in, out.target_sprite_id);
    priv::read_integral(in, out.rotate_based_on_x_scale);
    priv::read_integral(in, out.destroy_component_when_target_is_gone);
    types::CXForm::parse(in, out.Transform);
}
