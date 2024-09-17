#include <noita/components/ConsumableTeleportComponent.h>

void noita::components::ConsumableTeleportComponent::parse(binary_io::any_istream &in, noita::components::ConsumableTeleportComponent &out) {
    priv::read_integral(in, out.create_other_end);
    priv::read_integral(in, out.is_at_home);
    priv::read_integral(in, out.collision_radius);
    types::vec2<float>::parse(in, out.target_location);
    priv::read_integral(in, out.target_id);
    priv::read_integral(in, out.id);
    priv::read_integral(in, out.mNextUsableFrame);
    priv::read_integral(in, out.mHasOtherEnd);
}
