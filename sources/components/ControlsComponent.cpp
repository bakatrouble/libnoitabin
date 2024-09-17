#include <noita/components/ControlsComponent.h>

void noita::components::ControlsComponent::parse(binary_io::any_istream &in, noita::components::ControlsComponent &out) {
    priv::read_integral(in, out.polymorph_hax);
    priv::read_integral(in, out.polymorph_next_attack_frame);
    priv::read_integral(in, out.enabled);
    priv::read_integral(in, out.gamepad_indirect_aiming_enabled);
    priv::read_integral(in, out.gamepad_fire_on_thumbstick_extend);
    priv::read_integral(in, out.gamepad_fire_on_thumbstick_extend_threshold);
}
