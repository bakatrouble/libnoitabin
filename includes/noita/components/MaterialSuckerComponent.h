#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct MaterialSuckerComponent : types::Component {
    const std::string _component_name = "MaterialSuckerComponent";
    int32_t material_type;
    int32_t barrel_size;
    int32_t num_cells_sucked_per_frame;
    bool set_projectile_to_liquid;
    int32_t last_material_id;
    bool suck_gold;
    bool suck_health;
    bool suck_static_materials;
    std::string suck_tag;
    types::AABB randomized_position;
    int32_t mAmountUsed;

    static void parse(binary_io::any_istream &in, MaterialSuckerComponent &out);
};  // struct

} // namespace
