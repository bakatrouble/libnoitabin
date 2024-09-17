#include <noita/components/CollisionTriggerComponent.h>

void noita::components::CollisionTriggerComponent::parse(binary_io::any_istream &in, noita::components::CollisionTriggerComponent &out) {
    priv::read_integral(in, out.width);
    priv::read_integral(in, out.height);
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.required_tag);
    priv::read_integral(in, out.remove_component_when_triggered);
    priv::read_integral(in, out.destroy_this_entity_when_triggered);
    priv::read_integral(in, out.timer_for_destruction);
    priv::read_integral(in, out.self_trigger);
    priv::read_integral(in, out.skip_self_frames);
}
