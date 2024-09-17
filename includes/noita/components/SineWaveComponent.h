#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct SineWaveComponent : types::Component {
    const std::string _component_name = "SineWaveComponent";
    float sinewave_freq;
    float sinewave_m;
    int32_t lifetime;

    static void parse(binary_io::any_istream &in, SineWaveComponent &out);
};  // struct

} // namespace
