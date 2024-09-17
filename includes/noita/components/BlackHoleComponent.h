#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct BlackHoleComponent : types::Component {
    const std::string _component_name = "BlackHoleComponent";
    float radius;
    float particle_attractor_force;
    float damage_probability;
    float damage_amount;

    static void parse(binary_io::any_istream &in, BlackHoleComponent &out);
};  // struct

} // namespace
