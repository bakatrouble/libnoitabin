#include <noita/components/LightComponent.h>

void noita::components::LightComponent::parse(binary_io::any_istream &in, noita::components::LightComponent &out) {
    priv::read_integral(in, out.update_properties);
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.r);
    priv::read_integral(in, out.g);
    priv::read_integral(in, out.b);
    priv::read_integral(in, out.offset_x);
    priv::read_integral(in, out.offset_y);
    priv::read_integral(in, out.fade_out_time);
    priv::read_integral(in, out.blinking_freq);
}
