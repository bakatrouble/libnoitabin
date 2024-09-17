#include <noita/components/SetStartVelocityComponent.h>

void noita::components::SetStartVelocityComponent::parse(binary_io::any_istream &in, noita::components::SetStartVelocityComponent &out) {
    types::vec2<float>::parse(in, out.velocity);
    types::ValueRange<float>::parse(in, out.randomize_angle);
    types::ValueRange<float>::parse(in, out.randomize_speed);
}
