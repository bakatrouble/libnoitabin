#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct DrugEffectModifierComponent : types::Component {
    const std::string _component_name = "DrugEffectModifierComponent";
    types::ConfigDrugFx fx_add;
    types::ConfigDrugFx fx_multiply;

    static void parse(binary_io::any_istream &in, DrugEffectModifierComponent &out);
};  // struct

} // namespace
