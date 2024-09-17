#include <noita/components/CharacterPlatformingComponent.h>

void noita::components::CharacterPlatformingComponent::parse(binary_io::any_istream &in, noita::components::CharacterPlatformingComponent &out) {
    types::LensValue<float>::parse(in, out.velocity_min_x);
    types::LensValue<float>::parse(in, out.velocity_max_x);
    types::LensValue<float>::parse(in, out.velocity_min_y);
    types::LensValue<float>::parse(in, out.velocity_max_y);
    types::LensValue<float>::parse(in, out.run_velocity);
    types::LensValue<float>::parse(in, out.fly_velocity_x);
    priv::read_integral(in, out.jump_velocity_x);
    priv::read_integral(in, out.jump_velocity_y);
    priv::read_integral(in, out.jump_keydown_buffer);
    types::LensValue<float>::parse(in, out.fly_speed_max_up);
    types::LensValue<float>::parse(in, out.fly_speed_max_down);
    priv::read_integral(in, out.fly_speed_mult);
    priv::read_integral(in, out.fly_speed_change_spd);
    priv::read_integral(in, out.fly_model_player);
    priv::read_integral(in, out.fly_smooth_y);
    priv::read_integral(in, out.accel_x);
    priv::read_integral(in, out.accel_x_air);
    priv::read_integral(in, out.pixel_gravity);
    priv::read_integral(in, out.swim_idle_buoyancy_coeff);
    priv::read_integral(in, out.swim_down_buoyancy_coeff);
    priv::read_integral(in, out.swim_up_buoyancy_coeff);
    priv::read_integral(in, out.swim_drag);
    priv::read_integral(in, out.swim_extra_horizontal_drag);
    priv::read_integral(in, out.mouse_look);
    priv::read_integral(in, out.mouse_look_buffer);
    priv::read_integral(in, out.keyboard_look);
    priv::read_integral(in, out.turning_buffer);
    priv::read_integral(in, out.animation_to_play);
    priv::read_integral(in, out.animation_to_play_next);
    priv::read_integral(in, out.run_animation_velocity_switching_threshold);
    priv::read_integral(in, out.run_animation_velocity_switching_enabled);
    priv::read_integral(in, out.turn_animation_frames_between);
    priv::read_integral(in, out.precision_jumping_max_duration_frames);
    priv::read_integral(in, out.audio_liquid_splash_intensity);
}
