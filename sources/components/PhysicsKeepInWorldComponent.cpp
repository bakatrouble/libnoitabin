#include <noita/components/PhysicsKeepInWorldComponent.h>

void noita::components::PhysicsKeepInWorldComponent::parse(binary_io::any_istream &in, noita::components::PhysicsKeepInWorldComponent &out) {
    priv::read_integral(in, out.check_whole_aabb);
    priv::read_integral(in, out.predict_aabb);
    priv::read_integral(in, out.keep_at_last_valid_pos);
}
