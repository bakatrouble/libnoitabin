#include <noita/components/MaterialSuckerComponent.h>

void noita::components::MaterialSuckerComponent::parse(binary_io::any_istream &in, noita::components::MaterialSuckerComponent &out) {
    priv::read_integral(in, out.material_type);
    priv::read_integral(in, out.barrel_size);
    priv::read_integral(in, out.num_cells_sucked_per_frame);
    priv::read_integral(in, out.set_projectile_to_liquid);
    priv::read_integral(in, out.last_material_id);
    priv::read_integral(in, out.suck_gold);
    priv::read_integral(in, out.suck_health);
    priv::read_integral(in, out.suck_static_materials);
    priv::read_integral(in, out.suck_tag);
    types::AABB::parse(in, out.randomized_position);
    priv::read_integral(in, out.mAmountUsed);
}
