#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ExplodeOnDamageComponent : types::Component {
    const std::string _component_name = "ExplodeOnDamageComponent";
    float explode_on_death_percent;
    float explode_on_damage_percent;
    float physics_body_modified_death_probability;
    float physics_body_destruction_required;
    types::ConfigExplosion config_explosion;

    static void parse(binary_io::any_istream &in, ExplodeOnDamageComponent &out);
};  // struct

} // namespace
