#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct MagicConvertMaterialComponent : types::Component {
    const std::string _component_name = "MagicConvertMaterialComponent";
    int32_t radius;
    int32_t min_radius;
    bool is_circle;
    int32_t steps_per_frame;
    int32_t from_material;
    std::string from_material_tag;
    bool from_any_material;
    int32_t to_material;
    bool clean_stains;
    bool extinguish_fire;
    int32_t fan_the_flames;
    int32_t temperature_reaction_temp;
    int32_t ignite_materials;
    bool loop;
    bool kill_when_finished;
    bool convert_entities;
    bool stain_frozen;
    float reaction_audio_amount;
    bool convert_same_material;
    std::string from_material_array;
    std::string to_material_array;
    int32_t mRadius;

    static void parse(binary_io::any_istream &in, MagicConvertMaterialComponent &out);
};  // struct

} // namespace
