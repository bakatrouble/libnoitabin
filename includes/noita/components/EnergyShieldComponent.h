#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct EnergyShieldComponent : types::Component {
    const std::string _component_name = "EnergyShieldComponent";
    float radius;
    float damage_multiplier;
    float max_energy;
    float energy_required_to_shield;
    float recharge_speed;
    float sector_degrees;
    float energy;

    static void parse(binary_io::any_istream &in, EnergyShieldComponent &out);
};  // struct

} // namespace
