#include <noita/components/BossHealthBarComponent.h>

void noita::components::BossHealthBarComponent::parse(binary_io::any_istream &in, noita::components::BossHealthBarComponent &out) {
    priv::read_integral(in, out.gui);
    priv::read_integral(in, out.gui_special_final_boss);
    priv::read_integral(in, out.in_world);
    priv::read_integral(in, out.gui_max_distance_visible);
}
