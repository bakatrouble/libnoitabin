#include <noita/components/FishAIComponent.h>

void noita::components::FishAIComponent::parse(binary_io::any_istream &in, noita::components::FishAIComponent &out) {
    priv::read_integral(in, out.direction);
    priv::read_integral(in, out.speed);
    types::vec2<float>::parse(in, out.aabb_min);
    types::vec2<float>::parse(in, out.aabb_max);
}
