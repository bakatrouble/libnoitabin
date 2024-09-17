#include <noita/components/AudioComponent.h>

void noita::components::AudioComponent::parse(binary_io::any_istream &in, noita::components::AudioComponent &out) {
    priv::read_integral(in, out.file);
    priv::read_integral(in, out.event_root);
    priv::read_integral(in, out.audio_physics_material);
    priv::read_integral(in, out.set_latest_event_position);
    priv::read_integral(in, out.remove_latest_event_on_destroyed);
    priv::read_integral(in, out.send_message_on_event_dead);
    priv::read_integral(in, out.play_only_if_visible);
}
