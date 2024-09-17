#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct TorchComponent : types::Component {
    const std::string _component_name = "TorchComponent";
    int32_t probability_of_ignition_attempt;
    float suffocation_check_offset_y;
    int32_t frames_suffocated_to_extinguish;
    bool extinguishable;
    float fire_audio_weight;

    static void parse(binary_io::any_istream &in, TorchComponent &out);
};  // struct

} // namespace
