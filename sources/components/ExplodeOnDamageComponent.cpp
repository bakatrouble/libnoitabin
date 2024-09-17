#include <noita/components/ExplodeOnDamageComponent.h>

void noita::components::ExplodeOnDamageComponent::parse(binary_io::any_istream &in, noita::components::ExplodeOnDamageComponent &out) {
    priv::read_integral(in, out.explode_on_death_percent);
    priv::read_integral(in, out.explode_on_damage_percent);
    priv::read_integral(in, out.physics_body_modified_death_probability);
    priv::read_integral(in, out.physics_body_destruction_required);
    types::ConfigExplosion::parse(in, out.config_explosion);
}
