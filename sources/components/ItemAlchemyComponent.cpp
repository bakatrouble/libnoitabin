#include <noita/components/ItemAlchemyComponent.h>

void noita::components::ItemAlchemyComponent::parse(binary_io::any_istream &in, noita::components::ItemAlchemyComponent &out) {
    priv::read_integral(in, out.material_make_always_cast);
    priv::read_integral(in, out.material_remove_shuffle);
    priv::read_integral(in, out.material_animate_wand);
    priv::read_integral(in, out.material_animate_wand_alt);
    priv::read_integral(in, out.material_increase_uses_remaining);
    priv::read_integral(in, out.material_sacrifice);
}
