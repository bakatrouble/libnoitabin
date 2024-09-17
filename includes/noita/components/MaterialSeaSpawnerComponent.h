#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct MaterialSeaSpawnerComponent : types::Component {
    const std::string _component_name = "MaterialSeaSpawnerComponent";
    int32_t material;
    types::vec2<int32_t> size;
    types::vec2<int32_t> offset;
    int32_t speed;
    float sine_wavelength;
    float sine_amplitude;
    double noise_scale;
    double noise_threshold;
    int32_t m_position;
    int32_t frames_run;

    static void parse(binary_io::any_istream &in, MaterialSeaSpawnerComponent &out);
};  // struct

} // namespace
