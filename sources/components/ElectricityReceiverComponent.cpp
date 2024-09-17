#include <noita/components/ElectricityReceiverComponent.h>

void noita::components::ElectricityReceiverComponent::parse(binary_io::any_istream &in, noita::components::ElectricityReceiverComponent &out) {
    priv::read_integral(in, out.offset_x);
    priv::read_integral(in, out.offset_y);
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.active_time_frames);
    priv::read_integral(in, out.switch_on_msg_interval_frames);
    priv::read_integral(in, out.electrified_msg_interval_frames);
}
