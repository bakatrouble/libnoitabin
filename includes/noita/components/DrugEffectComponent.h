#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct DrugEffectComponent : types::Component {
    const std::string _component_name = "DrugEffectComponent";
    types::ConfigDrugFx drug_fx_target;
    types::ConfigDrugFx m_drug_fx_current;

    static void parse(binary_io::any_istream &in, DrugEffectComponent &out);
};  // struct

} // namespace
