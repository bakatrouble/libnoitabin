#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct CutThroughWorldDoneHereComponent : types::Component {
    const std::string _component_name = "CutThroughWorldDoneHereComponent";
    uint32_t id_of_done_cut;

    static void parse(binary_io::any_istream &in, CutThroughWorldDoneHereComponent &out);
};  // struct

} // namespace
