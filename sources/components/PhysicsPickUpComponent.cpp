#include <noita/components/PhysicsPickUpComponent.h>

void noita::components::PhysicsPickUpComponent::parse(binary_io::any_istream &in, noita::components::PhysicsPickUpComponent &out) {
    types::CXForm::parse(in, out.transform);
    types::vec2<float>::parse(in, out.original_left_joint_pos);
    types::vec2<float>::parse(in, out.original_right_joint_pos);
    priv::read_integral(in, out.pick_up_strength);
}
