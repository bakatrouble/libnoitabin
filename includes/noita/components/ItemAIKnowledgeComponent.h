#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ItemAIKnowledgeComponent : types::Component {
    const std::string _component_name = "ItemAIKnowledgeComponent";
    bool is_ranged_weapon;
    bool is_throwable_weapon;
    bool is_melee_weapon;
    bool is_self_healing;
    bool is_other_healing;
    bool is_self_buffing;
    bool is_other_buffing;
    bool is_weapon;
    bool is_known;
    bool is_safe;
    bool is_consumed;
    bool never_use;
    float ranged_min_distance;

    static void parse(binary_io::any_istream &in, ItemAIKnowledgeComponent &out);
};  // struct

} // namespace
