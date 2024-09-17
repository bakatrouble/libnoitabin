#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PixelSceneComponent : types::Component {
    const std::string _component_name = "PixelSceneComponent";
    std::string pixel_scene;
    std::string pixel_scene_visual;
    std::string pixel_scene_background;
    int32_t background_z_index;
    float offset_x;
    float offset_y;
    bool skip_biome_checks;
    bool skip_edge_textures;

    static void parse(binary_io::any_istream &in, PixelSceneComponent &out);
};  // struct

} // namespace
