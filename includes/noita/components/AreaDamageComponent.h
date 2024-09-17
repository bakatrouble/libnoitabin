#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct AreaDamageComponent : types::Component {
    const std::string _component_name = "AreaDamageComponent";
    types::vec2<float> aabb_min;
    types::vec2<float> aabb_max;
    float circle_radius;
    enums::DAMAGE_TYPES damage_type;
    float damage_per_frame;
    int32_t update_every_n_frame;
    uint32_t entity_responsible;
    std::string death_cause;
    std::string entities_with_tag;

    static void parse(binary_io::any_istream &in, AreaDamageComponent &out);
};  // struct

} // namespace
