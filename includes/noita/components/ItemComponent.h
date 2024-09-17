#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ItemComponent : types::Component {
    const std::string _component_name = "ItemComponent";
    std::string item_name;
    bool is_stackable;
    bool is_consumable;
    bool stats_count_as_item_pick_up;
    bool auto_pickup;
    bool permanently_attached;
    int32_t uses_remaining;
    bool is_identified;
    bool is_frozen;
    bool collect_nondefault_actions;
    bool remove_on_death;
    bool remove_on_death_if_empty;
    bool remove_default_child_actions_on_death;
    bool play_hover_animation;
    bool play_spinning_animation;
    bool is_equipable_forced;
    bool play_pick_sound;
    bool drinkable;
    types::vec2<float> spawn_pos;
    int32_t max_child_items;
    std::string ui_sprite;
    std::string ui_description;
    enums::INVENTORY_KIND preferred_inventory;
    bool enable_orb_hacks;
    bool is_all_spells_book;
    bool always_use_item_name_in_ui;
    std::string custom_pickup_string;
    bool ui_display_description_on_pick_up_hint;
    types::vec2<int32_t> inventory_slot;
    int32_t next_frame_pickable;
    int32_t npc_next_frame_pickable;
    bool is_pickable;
    bool is_hittable_always;
    float item_pickup_radius;
    float camera_max_distance;
    float camera_smooth_speed_multiplier;
    bool has_been_picked_by_player;
    int32_t mFramePickedUp;

    static void parse(binary_io::any_istream &in, ItemComponent &out);
};  // struct

} // namespace
