#include <noita/components/ControllerGoombaAIComponent.h>

void noita::components::ControllerGoombaAIComponent::parse(binary_io::any_istream &in, noita::components::ControllerGoombaAIComponent &out) {
    priv::read_integral(in, out.auto_turn_around_enabled);
    priv::read_integral(in, out.wait_to_turn_around);
    priv::read_integral(in, out.wall_hit_wait);
    priv::read_integral(in, out.check_wall_detection);
    priv::read_integral(in, out.wall_detection_aabb_min_x);
    priv::read_integral(in, out.wall_detection_aabb_max_x);
    priv::read_integral(in, out.wall_detection_aabb_min_y);
    priv::read_integral(in, out.wall_detection_aabb_max_y);
    priv::read_integral(in, out.check_floor_detection);
    priv::read_integral(in, out.floor_detection_aabb_min_x);
    priv::read_integral(in, out.floor_detection_aabb_max_x);
    priv::read_integral(in, out.floor_detection_aabb_min_y);
    priv::read_integral(in, out.floor_detection_aabb_max_y);
}
