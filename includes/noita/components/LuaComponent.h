#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct LuaComponent : types::Component {
    const std::string _component_name = "LuaComponent";
    std::string script_source_file;
    enums::LUA_VM_TYPE vm_type;
    bool execute_on_added;
    bool execute_on_removed;
    int32_t execute_every_n_frame;
    int32_t execute_times;
    int32_t limit_how_many_times_per_frame;
    int32_t limit_to_every_n_frame;
    bool limit_all_callbacks;
    bool remove_after_executed;
    bool enable_coroutines;
    bool call_init_function;
    std::string script_enabled_changed;
    std::string script_damage_received;
    std::string script_damage_about_to_be_received;
    std::string script_item_picked_up;
    std::string script_shot;
    std::string script_collision_trigger_hit;
    std::string script_collision_trigger_timer_finished;
    std::string script_physics_body_modified;
    std::string script_pressure_plate_change;
    std::string script_inhaled_material;
    std::string script_death;
    std::string script_throw_item;
    std::string script_material_area_checker_failed;
    std::string script_material_area_checker_success;
    std::string script_electricity_receiver_switched;
    std::string script_electricity_receiver_electrified;
    std::string script_kick;
    std::string script_interacting;
    std::string script_audio_event_dead;
    std::string script_wand_fired;
    std::string script_teleported;
    std::string script_portal_teleport_used;
    std::string script_polymorphing_to;
    std::string script_biome_entered;
    int32_t mLastExecutionFrame;
    int32_t mTimesExecutedThisFrame;
    bool mModAppendsDone;

    static void parse(binary_io::any_istream &in, LuaComponent &out);
};  // struct

} // namespace
