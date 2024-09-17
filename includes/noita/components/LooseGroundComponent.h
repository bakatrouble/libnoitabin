#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct LooseGroundComponent : types::Component {
    const std::string _component_name = "LooseGroundComponent";
    float probability;
    int32_t max_durability;
    float max_distance;
    float max_angle;
    int32_t min_radius;
    int32_t max_radius;
    float chunk_probability;
    float chunk_max_angle;
    int32_t chunk_count;
    int32_t chunk_material;
    std::string collapse_images;

    static void parse(binary_io::any_istream &in, LooseGroundComponent &out);
};  // struct

} // namespace
