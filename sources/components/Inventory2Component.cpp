#include <noita/components/Inventory2Component.h>

void noita::components::Inventory2Component::parse(binary_io::any_istream &in, noita::components::Inventory2Component &out) {
    priv::read_integral(in, out.quick_inventory_slots);
    priv::read_integral(in, out.full_inventory_slots_x);
    priv::read_integral(in, out.full_inventory_slots_y);
    priv::read_integral(in, out.mSavedActiveItemIndex);
}
