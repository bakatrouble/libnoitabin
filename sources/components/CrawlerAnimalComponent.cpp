#include <noita/components/CrawlerAnimalComponent.h>

void noita::components::CrawlerAnimalComponent::parse(binary_io::any_istream &in, noita::components::CrawlerAnimalComponent &out) {
    priv::read_integral(in, out.ray_length);
    priv::read_integral(in, out.ray_count);
    priv::read_integral(in, out.gravity);
    priv::read_integral(in, out.terminal_velocity);
    priv::read_integral(in, out.speed);
    priv::read_integral(in, out.give_up_area_radius);
    priv::read_integral(in, out.give_up_time);
    priv::read_integral(in, out.attack_from_ceiling_check_ray_length);
    priv::read_integral(in, out.attack_from_ceiling_check_every_n_frames);
    priv::read_integral(in, out.collision_damage);
    priv::read_integral(in, out.collision_damage_radius);
    priv::read_integral(in, out.collision_damage_frames_between);
    priv::read_integral(in, out.animate);
}
