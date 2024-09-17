#include <noita/components/ItemStashComponent.h>

void noita::components::ItemStashComponent::parse(binary_io::any_istream &in, noita::components::ItemStashComponent &out) {
    priv::read_integral(in, out.throw_openable_cooldown_frames);
    priv::read_integral(in, out.init_children);
}
