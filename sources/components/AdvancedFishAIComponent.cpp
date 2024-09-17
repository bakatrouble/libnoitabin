#include <noita/components/AdvancedFishAIComponent.h>

void noita::components::AdvancedFishAIComponent::parse(binary_io::any_istream &in, noita::components::AdvancedFishAIComponent &out) {
    priv::read_integral(in, out.move_check_range_min);
    priv::read_integral(in, out.move_check_range_max);
}
