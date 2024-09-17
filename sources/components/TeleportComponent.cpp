#include <noita/components/TeleportComponent.h>

void noita::components::TeleportComponent::parse(binary_io::any_istream &in, noita::components::TeleportComponent &out) {
    types::vec2<float>::parse(in, out.target);
    priv::read_integral(in, out.target_x_is_absolute_position);
    priv::read_integral(in, out.target_y_is_absolute_position);
    priv::read_integral(in, out.source_particle_fx_file);
    priv::read_integral(in, out.target_particle_fx_file);
    priv::read_integral(in, out.load_collapse_entity);
}
