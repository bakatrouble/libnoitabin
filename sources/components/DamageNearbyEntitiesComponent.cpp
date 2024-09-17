#include <noita/components/DamageNearbyEntitiesComponent.h>

void noita::components::DamageNearbyEntitiesComponent::parse(binary_io::any_istream &in, noita::components::DamageNearbyEntitiesComponent &out) {
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.damage_min);
    priv::read_integral(in, out.damage_max);
    priv::read_integral(in, out.target_vec_max_len);
    priv::read_integral(in, out.knockback_multiplier);
    priv::read_integral(in, out.time_between_damaging);
    priv::read_integral(in, out.damage_type);
    priv::read_integral(in, out.damage_description);
    priv::read_integral(in, out.target_tag);
    priv::read_integral(in, out.ragdoll_fx);
}
