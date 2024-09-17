#include <noita/components/InventoryGuiComponent.h>

void noita::components::InventoryGuiComponent::parse(binary_io::any_istream &in, noita::components::InventoryGuiComponent &out) {
    priv::read_integral(in, out.has_opened_inventory_edit);
    priv::read_integral(in, out.wallet_money_target);
    priv::read_integral(in, out.mDisplayFireRateWaitBar);
}
