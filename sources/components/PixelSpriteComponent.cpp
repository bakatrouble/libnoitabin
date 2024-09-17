#include <noita/components/PixelSpriteComponent.h>

void noita::components::PixelSpriteComponent::parse(binary_io::any_istream &in, noita::components::PixelSpriteComponent &out) {
    priv::read_integral(in, out.image_file);
    priv::read_integral(in, out.anchor_x);
    priv::read_integral(in, out.anchor_y);
    priv::read_integral(in, out.material);
    priv::read_integral(in, out.diggable);
    priv::read_integral(in, out.clean_overlapping_pixels);
    priv::read_integral(in, out.kill_when_sprite_dies);
    priv::read_integral(in, out.create_box2d_bodies);
    types::PixelSprite::parse(in, out.mPixelSprite);
}
