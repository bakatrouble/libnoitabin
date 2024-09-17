#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct LoadEntitiesComponent : types::Component {
    const std::string _component_name = "LoadEntitiesComponent";
    std::string entity_file;
    types::ValueRange<int32_t> count;
    bool kill_entity;
    int32_t timeout_frames;
    int32_t mTimerTriggerFrame;

    static void parse(binary_io::any_istream &in, LoadEntitiesComponent &out);
};  // struct

} // namespace
