#include <noita/components/SpriteOffsetAnimatorComponent.h>

void noita::components::SpriteOffsetAnimatorComponent::parse(binary_io::any_istream &in, noita::components::SpriteOffsetAnimatorComponent &out) {
    priv::read_integral(in, out.x_amount);
    priv::read_integral(in, out.x_speed);
    priv::read_integral(in, out.y_amount);
    priv::read_integral(in, out.y_speed);
    priv::read_integral(in, out.sprite_id);
    priv::read_integral(in, out.x_phase);
    priv::read_integral(in, out.x_phase_offset);
}
