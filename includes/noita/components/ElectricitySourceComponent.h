#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ElectricitySourceComponent : types::Component {
    const std::string _component_name = "ElectricitySourceComponent";
    int32_t radius;
    int32_t emission_interval_frames;

    static void parse(binary_io::any_istream &in, ElectricitySourceComponent &out);
};  // struct

} // namespace
