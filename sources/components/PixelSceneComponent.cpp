#include <noita/components/PixelSceneComponent.h>

void noita::components::PixelSceneComponent::parse(binary_io::any_istream &in, noita::components::PixelSceneComponent &out) {
    priv::read_integral(in, out.pixel_scene);
    priv::read_integral(in, out.pixel_scene_visual);
    priv::read_integral(in, out.pixel_scene_background);
    priv::read_integral(in, out.background_z_index);
    priv::read_integral(in, out.offset_x);
    priv::read_integral(in, out.offset_y);
    priv::read_integral(in, out.skip_biome_checks);
    priv::read_integral(in, out.skip_edge_textures);
}
