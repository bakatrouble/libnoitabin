#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct CellEaterComponent : types::Component {
    const std::string _component_name = "CellEaterComponent";
    float radius;
    int32_t eat_probability;
    int32_t ignored_material;
    bool only_stain;
    bool eat_dynamic_physics_bodies;
    bool limited_materials;
    std::string ignored_material_tag;
    std::vector<int32_t> materials;

    static void parse(binary_io::any_istream &in, CellEaterComponent &out);
};  // struct

} // namespace
