#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct CharacterPlatformingComponent : types::Component {
    const std::string _component_name = "CharacterPlatformingComponent";
    types::LensValue<float> velocity_min_x;
    types::LensValue<float> velocity_max_x;
    types::LensValue<float> velocity_min_y;
    types::LensValue<float> velocity_max_y;
    types::LensValue<float> run_velocity;
    types::LensValue<float> fly_velocity_x;
    float jump_velocity_x;
    float jump_velocity_y;
    int32_t jump_keydown_buffer;
    types::LensValue<float> fly_speed_max_up;
    types::LensValue<float> fly_speed_max_down;
    float fly_speed_mult;
    float fly_speed_change_spd;
    bool fly_model_player;
    bool fly_smooth_y;
    float accel_x;
    float accel_x_air;
    float pixel_gravity;
    float swim_idle_buoyancy_coeff;
    float swim_down_buoyancy_coeff;
    float swim_up_buoyancy_coeff;
    float swim_drag;
    float swim_extra_horizontal_drag;
    bool mouse_look;
    float mouse_look_buffer;
    bool keyboard_look;
    float turning_buffer;
    std::string animation_to_play;
    std::string animation_to_play_next;
    float run_animation_velocity_switching_threshold;
    bool run_animation_velocity_switching_enabled;
    int32_t turn_animation_frames_between;
    int32_t precision_jumping_max_duration_frames;
    float audio_liquid_splash_intensity;

    static void parse(binary_io::any_istream &in, CharacterPlatformingComponent &out);
};  // struct

} // namespace
