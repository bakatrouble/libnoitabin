#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ElectricChargeComponent : types::Component {
    const std::string _component_name = "ElectricChargeComponent";
    int32_t charge_time_frames;
    float fx_velocity_max;
    int32_t electricity_emission_interval_frames;
    int32_t fx_emission_interval_min;
    int32_t fx_emission_interval_max;
    int32_t charge;

    static void parse(binary_io::any_istream &in, ElectricChargeComponent &out);
};  // struct

} // namespace
