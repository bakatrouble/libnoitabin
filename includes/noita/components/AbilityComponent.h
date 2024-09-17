#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct AbilityComponent : types::Component {
    const std::string _component_name = "AbilityComponent";
    int32_t cooldown_frames;
    std::string entity_file;
    std::string sprite_file;
    int32_t entity_count;
    bool never_reload;
    int32_t reload_time_frames;
    float mana;
    float mana_max;
    float mana_charge_speed;
    bool rotate_in_hand;
    float rotate_in_hand_amount;
    float rotate_hand_amount;
    bool fast_projectile;
    float swim_propel_amount;
    int32_t max_charged_actions;
    int32_t charge_wait_frames;
    float item_recoil_recovery_speed;
    float item_recoil_max;
    float item_recoil_offset_coeff;
    float item_recoil_rotation_coeff;
    std::string base_item_file;
    bool use_entity_file_as_projectile_info_proxy;
    bool click_to_use;
    int32_t stat_times_player_has_shot;
    int32_t stat_times_player_has_edited;
    bool shooting_reduces_amount_in_inventory;
    bool throw_as_item;
    bool simulate_throw_as_item;
    int32_t max_amount_in_inventory;
    int32_t amount_in_inventory;
    bool drop_as_item_on_death;
    std::string ui_name;
    bool use_gun_script;
    bool is_petris_gun;
    types::ConfigGun gun_config;
    types::ConfigGunActionInfo gunaction_config;
    int32_t gun_level;
    std::string add_these_child_actions;
    int32_t current_slot_durability;
    std::string slot_consumption_function;
    int32_t mNextFrameUsable;
    int32_t mCastDelayStartFrame;
    int32_t mReloadFramesLeft;
    int32_t mReloadNextFrameUsable;
    int32_t mChargeCount;
    bool mIsInitialized;

    static void parse(binary_io::any_istream &in, AbilityComponent &out);
};  // struct

} // namespace
