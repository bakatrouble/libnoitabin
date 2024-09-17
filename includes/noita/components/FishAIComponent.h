#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct FishAIComponent : types::Component {
    const std::string _component_name = "FishAIComponent";
    int32_t direction;
    float speed;
    types::vec2<float> aabb_min;
    types::vec2<float> aabb_max;

    static void parse(binary_io::any_istream &in, FishAIComponent &out);
};  // struct

} // namespace
