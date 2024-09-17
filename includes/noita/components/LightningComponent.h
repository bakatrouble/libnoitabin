#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct LightningComponent : types::Component {
    const std::string _component_name = "LightningComponent";
    types::ConfigExplosion config_explosion;
    std::string sprite_lightning_file;
    bool is_projectile;
    int32_t explosion_type;
    int32_t arc_lifetime;

    static void parse(binary_io::any_istream &in, LightningComponent &out);
};  // struct

} // namespace
