#include <noita/components/GhostComponent.h>

void noita::components::GhostComponent::parse(binary_io::any_istream &in, noita::components::GhostComponent &out) {
    priv::read_integral(in, out.speed);
    types::vec2<float>::parse(in, out.velocity);
    priv::read_integral(in, out.new_hunt_target_check_every);
    priv::read_integral(in, out.hunt_box_radius);
    priv::read_integral(in, out.aggressiveness);
    priv::read_integral(in, out.max_distance_from_home);
    priv::read_integral(in, out.die_if_no_home);
    priv::read_integral(in, out.target_tag);
}
