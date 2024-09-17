#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct GameEffectComponent : types::Component {
    const std::string _component_name = "GameEffectComponent";
    enums::GAME_EFFECT effect;
    std::string custom_effect_id;
    int32_t frames;
    int32_t exclusivity_group;
    bool report_block_msg;
    bool disable_movement;
    enums::RAGDOLL_FX ragdoll_effect;
    int32_t ragdoll_material;
    std::string ragdoll_effect_custom_entity_file;
    bool ragdoll_fx_custom_entity_apply_only_to_largest_body;
    std::string polymorph_target;
    std::string mSerializedData;
    uint32_t mCaster;
    int32_t mCasterHerdId;
    int32_t teleportation_probability;
    int32_t teleportation_delay_min_frames;
    float teleportation_radius_min;
    float teleportation_radius_max;
    int32_t teleportations_num;
    double no_heal_max_hp_cap;
    uint32_t causing_status_effect;
    bool caused_by_ingestion_status_effect;
    bool caused_by_stains;
    bool mCharmDisabledCameraBound;
    bool mCharmEnabledTeleporting;
    bool mInvisible;
    int32_t mCounter;
    int32_t mCooldown;
    bool mIsExtension;
    bool mIsSpent;

    static void parse(binary_io::any_istream &in, GameEffectComponent &out);
};  // struct

} // namespace
