#include <noita/components/ItemPickUpperComponent.h>

void noita::components::ItemPickUpperComponent::parse(binary_io::any_istream &in, noita::components::ItemPickUpperComponent &out) {
    priv::read_integral(in, out.is_in_npc);
    priv::read_integral(in, out.pick_up_any_item_buggy);
    priv::read_integral(in, out.is_immune_to_kicks);
    priv::read_integral(in, out.only_pick_this_entity);
    priv::read_integral(in, out.drop_items_on_death);
    types::vec2<float>::parse(in, out.mLatestItemOverlapInfoBoxPosition);
}
