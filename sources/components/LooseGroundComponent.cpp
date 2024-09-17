#include <noita/components/LooseGroundComponent.h>

void noita::components::LooseGroundComponent::parse(binary_io::any_istream &in, noita::components::LooseGroundComponent &out) {
    priv::read_integral(in, out.probability);
    priv::read_integral(in, out.max_durability);
    priv::read_integral(in, out.max_distance);
    priv::read_integral(in, out.max_angle);
    priv::read_integral(in, out.min_radius);
    priv::read_integral(in, out.max_radius);
    priv::read_integral(in, out.chunk_probability);
    priv::read_integral(in, out.chunk_max_angle);
    priv::read_integral(in, out.chunk_count);
    priv::read_integral(in, out.chunk_material);
    priv::read_integral(in, out.collapse_images);
}
