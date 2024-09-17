#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct LevitationComponent : types::Component {
    const std::string _component_name = "LevitationComponent";
    float radius;
    float entity_force;
    float box2d_force;
    int32_t effect_lifetime_frames;

    static void parse(binary_io::any_istream &in, LevitationComponent &out);
};  // struct

} // namespace
