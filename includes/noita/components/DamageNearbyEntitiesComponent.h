#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct DamageNearbyEntitiesComponent : types::Component {
    const std::string _component_name = "DamageNearbyEntitiesComponent";
    float radius;
    float damage_min;
    float damage_max;
    float target_vec_max_len;
    float knockback_multiplier;
    int32_t time_between_damaging;
    enums::DAMAGE_TYPES damage_type;
    std::string damage_description;
    std::string target_tag;
    enums::RAGDOLL_FX ragdoll_fx;

    static void parse(binary_io::any_istream &in, DamageNearbyEntitiesComponent &out);
};  // struct

} // namespace
