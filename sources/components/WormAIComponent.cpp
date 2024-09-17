#include <noita/components/WormAIComponent.h>

void noita::components::WormAIComponent::parse(binary_io::any_istream &in, noita::components::WormAIComponent &out) {
    priv::read_integral(in, out.speed);
    priv::read_integral(in, out.speed_hunt);
    priv::read_integral(in, out.direction_adjust_speed);
    priv::read_integral(in, out.direction_adjust_speed_hunt);
    priv::read_integral(in, out.random_target_box_radius);
    priv::read_integral(in, out.new_hunt_target_check_every);
    priv::read_integral(in, out.new_random_target_check_every);
    priv::read_integral(in, out.hunt_box_radius);
    priv::read_integral(in, out.cocoon_food_required);
    priv::read_integral(in, out.cocoon_entity);
    priv::read_integral(in, out.give_up_area_radius);
    priv::read_integral(in, out.give_up_time_frames);
    priv::read_integral(in, out.debug_follow_mouse);
}
