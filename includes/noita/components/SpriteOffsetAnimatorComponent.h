#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct SpriteOffsetAnimatorComponent : types::Component {
    const std::string _component_name = "SpriteOffsetAnimatorComponent";
    float x_amount;
    float x_speed;
    float y_amount;
    float y_speed;
    int32_t sprite_id;
    float x_phase;
    float x_phase_offset;

    static void parse(binary_io::any_istream &in, SpriteOffsetAnimatorComponent &out);
};  // struct

} // namespace
