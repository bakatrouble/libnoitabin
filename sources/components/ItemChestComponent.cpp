#include <noita/components/ItemChestComponent.h>

void noita::components::ItemChestComponent::parse(binary_io::any_istream &in, noita::components::ItemChestComponent &out) {
    priv::read_integral(in, out.item_count_min);
    priv::read_integral(in, out.item_count_max);
    priv::read_integral(in, out.level);
    priv::read_integral(in, out.enemy_drop);
    priv::read_integral(in, out.actions);
    priv::read_integral(in, out.action_uses_remaining);
    priv::read_integral(in, out.other_entities_to_spawn);
    priv::read_integral(in, out.mSeed);
}
