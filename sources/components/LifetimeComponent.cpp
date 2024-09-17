#include <noita/components/LifetimeComponent.h>

void noita::components::LifetimeComponent::parse(binary_io::any_istream &in, noita::components::LifetimeComponent &out) {
    priv::read_integral(in, out.lifetime);
    types::ValueRange<float>::parse(in, out.randomize_lifetime);
    priv::read_integral(in, out.fade_sprites);
    priv::read_integral(in, out.kill_parent);
    priv::read_integral(in, out.kill_all_parents);
    priv::read_integral(in, out.serialize_duration);
    priv::read_integral(in, out.kill_frame_serialized);
    priv::read_integral(in, out.creation_frame_serialized);
}
