#include <noita/components/PathFindingComponent.h>

void noita::components::PathFindingComponent::parse(binary_io::any_istream &in, noita::components::PathFindingComponent &out) {
    priv::read_integral(in, out.search_depth_max_no_goal);
    priv::read_integral(in, out.iterations_max_no_goal);
    priv::read_integral(in, out.search_depth_max_with_goal);
    priv::read_integral(in, out.iterations_max_with_goal);
    priv::read_integral(in, out.cost_of_flying);
    priv::read_integral(in, out.distance_to_reach_node_x);
    priv::read_integral(in, out.distance_to_reach_node_y);
    priv::read_integral(in, out.frames_to_get_stuck);
    priv::read_integral(in, out.frames_between_searches);
    priv::read_integral(in, out.y_walking_compensation);
    priv::read_integral(in, out.can_fly);
    priv::read_integral(in, out.can_walk);
    priv::read_integral(in, out.can_jump);
    priv::read_integral(in, out.can_dive);
    priv::read_integral(in, out.can_swim_on_surface);
    priv::read_integral(in, out.never_consider_line_of_sight);
    priv::read_integral(in, out.space_required);
    priv::read_integral(in, out.max_jump_distance_from_camera);
    priv::read_integral(in, out.jump_speed);
    priv::read_integral(in, out.initial_jump_lob);
    priv::read_integral(in, out.initial_jump_max_distance_x);
    priv::read_integral(in, out.initial_jump_max_distance_y);
    priv::read_custom_vector(in, out.jump_trajectories);
    priv::read_integral(in, out.read_state);
}
