#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct HitboxComponent : types::Component {
    const std::string _component_name = "HitboxComponent";
    bool is_player;
    bool is_enemy;
    bool is_item;
    float aabb_min_x;
    float aabb_max_x;
    float aabb_min_y;
    float aabb_max_y;
    types::vec2<float> offset;
    float damage_multiplier;

    static void parse(binary_io::any_istream &in, HitboxComponent &out);
};  // struct

} // namespace
