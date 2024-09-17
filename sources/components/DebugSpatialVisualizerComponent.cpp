#include <noita/components/DebugSpatialVisualizerComponent.h>

void noita::components::DebugSpatialVisualizerComponent::parse(binary_io::any_istream &in, noita::components::DebugSpatialVisualizerComponent &out) {
    priv::read_integral(in, out.min_x);
    priv::read_integral(in, out.min_y);
    priv::read_integral(in, out.max_x);
    priv::read_integral(in, out.max_y);
    priv::read_integral(in, out.color);
}
