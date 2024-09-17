#include <noita/components/UIIconComponent.h>

void noita::components::UIIconComponent::parse(binary_io::any_istream &in, noita::components::UIIconComponent &out) {
    priv::read_integral(in, out.icon_sprite_file);
    priv::read_integral(in, out.name);
    priv::read_integral(in, out.description);
    priv::read_integral(in, out.display_above_head);
    priv::read_integral(in, out.display_in_hud);
    priv::read_integral(in, out.is_perk);
}
