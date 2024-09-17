#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct SpriteComponent : types::Component {
    const std::string _component_name = "SpriteComponent";
    std::string image_file;
    bool ui_is_parent;
    bool is_text_sprite;
    float offset_x;
    float offset_y;
    types::vec2<float> transform_offset;
    types::vec2<float> offset_animator_offset;
    float alpha;
    bool visible;
    bool emissive;
    bool additive;
    bool fog_of_war_hole;
    bool smooth_filtering;
    std::string rect_animation;
    std::string next_rect_animation;
    std::string text;
    float z_index;
    bool update_transform;
    bool update_transform_rotation;
    bool kill_entity_after_finished;
    bool has_special_scale;
    float special_scale_x;
    float special_scale_y;
    bool never_ragdollify_on_death;

    static void parse(binary_io::any_istream &in, SpriteComponent &out);
};  // struct

} // namespace
