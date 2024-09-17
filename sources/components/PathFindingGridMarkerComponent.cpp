#include <noita/components/PathFindingGridMarkerComponent.h>

void noita::components::PathFindingGridMarkerComponent::parse(binary_io::any_istream &in, noita::components::PathFindingGridMarkerComponent &out) {
    priv::read_integral(in, out.marker_work_flag);
    priv::read_integral(in, out.marker_offset_x);
    priv::read_integral(in, out.marker_offset_y);
    priv::read_integral(in, out.player_marker_radius);
}
