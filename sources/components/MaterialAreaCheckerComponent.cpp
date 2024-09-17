#include <noita/components/MaterialAreaCheckerComponent.h>

void noita::components::MaterialAreaCheckerComponent::parse(binary_io::any_istream &in, noita::components::MaterialAreaCheckerComponent &out) {
    priv::read_integral(in, out.update_every_x_frame);
    priv::read_integral(in, out.look_for_failure);
    types::AABB::parse(in, out.area_aabb);
    priv::read_integral(in, out.material);
    priv::read_integral(in, out.material2);
    priv::read_integral(in, out.count_min);
    priv::read_integral(in, out.always_check_fullness);
    priv::read_integral(in, out.kill_after_message);
}
