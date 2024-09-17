#include <noita/components/InventoryComponent.h>

void noita::components::InventoryComponent::parse(binary_io::any_istream &in, noita::components::InventoryComponent &out) {
    priv::read_integral(in, out.ui_container_type);
    types::vec2<int32_t>::parse(in, out.ui_container_size);
    types::vec2<int32_t>::parse(in, out.ui_element_size);
    types::vec2<int32_t>::parse(in, out.ui_position_on_screen);
    priv::read_integral(in, out.ui_element_sprite);
    priv::read_integral(in, out.actions);
}
