#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct WorldStateComponent : types::Component {
    const std::string _component_name = "WorldStateComponent";
    bool is_initialized;
    float time;
    float time_total;
    float time_dt;
    int32_t day_count;
    float rain;
    float rain_target;
    float fog;
    float fog_target;
    bool intro_weather;
    float wind;
    float wind_speed;
    float wind_speed_sin_t;
    float wind_speed_sin;
    float clouds_01_target;
    float clouds_02_target;
    float gradient_sky_alpha_target;
    float sky_sunset_alpha_target;
    int32_t lightning_count;
    types::vec2<float> player_spawn_location;
    std::unordered_map<std::string, std::string> lua_globals;
    std::vector<types::ConfigPendingPortal> pending_portals;
    uint32_t next_portal_id;
    std::vector<int32_t> apparitions_per_level;
    std::vector<types::ConfigNpcParty> npc_parties;
    std::string session_stat_file;
    std::vector<int32_t> orbs_found_thisrun;
    std::vector<std::string> flags;
    std::vector<std::string> changed_materials;
    int32_t player_polymorph_count;
    int32_t player_polymorph_random_count;
    int32_t player_did_infinite_spell_count;
    int32_t player_did_damage_over_1milj;
    int32_t player_living_with_minus_hp;
    float global_genome_relations_modifier;
    bool mods_have_been_active_during_this_run;
    bool twitch_has_been_active_during_this_run;
    uint32_t next_cut_through_world_id;
    std::vector<types::ConfigCutThroughWorld> cuts_through_world;
    types::LensValue<int32_t> gore_multiplier;
    types::LensValue<int32_t> trick_kill_gold_multiplier;
    types::LensValue<float> damage_flash_multiplier;
    types::LensValue<bool> open_fog_of_war_everywhere;
    types::LensValue<bool> consume_actions;
    bool perk_infinite_spells;
    bool perk_trick_kills_blood_money;
    int32_t perk_hp_drop_chance;
    bool perk_gold_is_forever;
    bool perk_rats_player_friendly;
    bool EVERYTHING_TO_GOLD;
    std::string material_everything_to_gold;
    std::string material_everything_to_gold_static;
    bool INFINITE_GOLD_HAPPENING;
    bool ENDING_HAPPINESS_HAPPENING;
    int32_t ENDING_HAPPINESS_FRAMES;
    bool ENDING_HAPPINESS;
    float mFlashAlpha;
    int32_t DEBUG_LOADED_FROM_AUTOSAVE;
    int32_t DEBUG_LOADED_FROM_OLD_VERSION;

    static void parse(binary_io::any_istream &in, WorldStateComponent &out);
};  // struct

} // namespace
