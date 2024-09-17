#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct StatusEffectDataComponent : types::Component {
    const std::string _component_name = "StatusEffectDataComponent";
    std::vector<float> stain_effects;
    std::vector<int32_t> stain_effect_cooldowns;
    std::vector<float> effects_previous;
    std::vector<float> ingestion_effects;
    std::vector<int32_t> ingestion_effect_causes;
    std::vector<int32_t> ingestion_effect_causes_many;

    static void parse(binary_io::any_istream &in, StatusEffectDataComponent &out);
};  // struct

} // namespace
