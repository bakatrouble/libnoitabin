#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct IngestionComponent : types::Component {
    const std::string _component_name = "IngestionComponent";
    int64_t ingestion_size;
    int64_t ingestion_capacity;
    uint32_t ingestion_cooldown_delay_frames;
    uint32_t ingestion_reduce_every_n_frame;
    float overingestion_damage;
    float blood_healing_speed;
    std::string ingestion_satiation_material_tag;
    int32_t m_ingestion_cooldown_frames;

    static void parse(binary_io::any_istream &in, IngestionComponent &out);
};  // struct

} // namespace
