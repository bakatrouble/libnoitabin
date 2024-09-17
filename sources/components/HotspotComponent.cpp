#include <noita/components/HotspotComponent.h>

void noita::components::HotspotComponent::parse(binary_io::any_istream &in, noita::components::HotspotComponent &out) {
    types::vec2<float>::parse(in, out.offset);
    priv::read_integral(in, out.transform_with_scale);
    priv::read_integral(in, out.sprite_hotspot_name);
}
