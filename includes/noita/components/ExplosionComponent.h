#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ExplosionComponent : types::Component {
    const std::string _component_name = "ExplosionComponent";
    enums::EXPLOSION_TRIGGER_TYPE trigger;
    types::ConfigExplosion config_explosion;
    int32_t timeout_frames;
    int32_t timeout_frames_random;
    bool kill_entity;
    int32_t mTimerTriggerFrame;

    static void parse(binary_io::any_istream &in, ExplosionComponent &out);
};  // struct

} // namespace
