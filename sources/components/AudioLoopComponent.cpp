#include <noita/components/AudioLoopComponent.h>

void noita::components::AudioLoopComponent::parse(binary_io::any_istream &in, noita::components::AudioLoopComponent &out) {
    priv::read_integral(in, out.file);
    priv::read_integral(in, out.event_name);
    priv::read_integral(in, out.auto_play);
    priv::read_integral(in, out.auto_play_if_enabled);
    priv::read_integral(in, out.play_on_component_enable);
    priv::read_integral(in, out.calculate_material_lowpass);
    priv::read_integral(in, out.set_speed_parameter);
    priv::read_integral(in, out.set_speed_parameter_only_based_on_x_movement);
    priv::read_integral(in, out.set_speed_parameter_only_based_on_y_movement);
    priv::read_integral(in, out.volume_autofade_speed);
}
