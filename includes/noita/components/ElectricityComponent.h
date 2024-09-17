#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ElectricityComponent : types::Component {
    const std::string _component_name = "ElectricityComponent";
    int32_t energy;
    float probability_to_heat;
    int32_t speed;
    int32_t splittings_min;
    int32_t splittings_max;
    int32_t splitting_energy_min;
    int32_t splitting_energy_max;
    bool hack_is_material_crack;
    bool hack_crack_ice;
    bool hack_is_set_fire;

    static void parse(binary_io::any_istream &in, ElectricityComponent &out);
};  // struct

} // namespace
