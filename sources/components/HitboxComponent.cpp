#include <noita/components/HitboxComponent.h>

void noita::components::HitboxComponent::parse(binary_io::any_istream &in, noita::components::HitboxComponent &out) {
    priv::read_integral(in, out.is_player);
    priv::read_integral(in, out.is_enemy);
    priv::read_integral(in, out.is_item);
    priv::read_integral(in, out.aabb_min_x);
    priv::read_integral(in, out.aabb_max_x);
    priv::read_integral(in, out.aabb_min_y);
    priv::read_integral(in, out.aabb_max_y);
    types::vec2<float>::parse(in, out.offset);
    priv::read_integral(in, out.damage_multiplier);
}
