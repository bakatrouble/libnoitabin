#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct GenomeDataComponent : types::Component {
    const std::string _component_name = "GenomeDataComponent";
    types::LensValue<int32_t> herd_id;
    bool is_predator;
    float food_chain_rank;
    bool berserk_dont_attack_friends;

    static void parse(binary_io::any_istream &in, GenomeDataComponent &out);
};  // struct

} // namespace
