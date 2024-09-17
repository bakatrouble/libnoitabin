#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct AltarComponent : types::Component {
    const std::string _component_name = "AltarComponent";
    std::string recognized_entity_tags;
    int32_t good_fx_material;
    int32_t neutral_fx_material;
    int32_t evil_fx_material;
    int32_t uses_remaining;

    static void parse(binary_io::any_istream &in, AltarComponent &out);
};  // struct

} // namespace
