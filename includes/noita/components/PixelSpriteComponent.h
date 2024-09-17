#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PixelSpriteComponent : types::Component {
    const std::string _component_name = "PixelSpriteComponent";
    std::string image_file;
    int32_t anchor_x;
    int32_t anchor_y;
    std::string material;
    bool diggable;
    bool clean_overlapping_pixels;
    bool kill_when_sprite_dies;
    bool create_box2d_bodies;
    types::PixelSprite mPixelSprite;

    static void parse(binary_io::any_istream &in, PixelSpriteComponent &out);
};  // struct

} // namespace
