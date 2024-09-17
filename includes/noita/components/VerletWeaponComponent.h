#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct VerletWeaponComponent : types::Component {
    const std::string _component_name = "VerletWeaponComponent";
    float damage_radius;
    float physics_force_radius;
    float damage_min_step;
    float damage_max;
    float damage_coeff;
    float impulse_coeff;
    int32_t fade_duration_frames;
    float physics_impulse_coeff;

    static void parse(binary_io::any_istream &in, VerletWeaponComponent &out);
};  // struct

} // namespace
