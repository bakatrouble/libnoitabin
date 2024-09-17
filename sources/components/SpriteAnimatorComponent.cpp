#include <noita/components/SpriteAnimatorComponent.h>

void noita::components::SpriteAnimatorComponent::parse(binary_io::any_istream &in, noita::components::SpriteAnimatorComponent &out) {
    priv::read_integral(in, out.target_sprite_comp_name);
    priv::read_integral(in, out.rotate_to_surface_normal);
}
