#include <noita/components/AreaDamageComponent.h>

void noita::components::AreaDamageComponent::parse(binary_io::any_istream &in, noita::components::AreaDamageComponent &out) {
    types::vec2<float>::parse(in, out.aabb_min);
    types::vec2<float>::parse(in, out.aabb_max);
    priv::read_integral(in, out.circle_radius);
    priv::read_integral(in, out.damage_type);
    priv::read_integral(in, out.damage_per_frame);
    priv::read_integral(in, out.update_every_n_frame);
    priv::read_integral(in, out.entity_responsible);
    priv::read_integral(in, out.death_cause);
    priv::read_integral(in, out.entities_with_tag);
}
