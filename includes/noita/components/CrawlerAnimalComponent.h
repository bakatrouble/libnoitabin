#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct CrawlerAnimalComponent : types::Component {
    const std::string _component_name = "CrawlerAnimalComponent";
    float ray_length;
    int32_t ray_count;
    float gravity;
    float terminal_velocity;
    float speed;
    int32_t give_up_area_radius;
    int32_t give_up_time;
    float attack_from_ceiling_check_ray_length;
    int32_t attack_from_ceiling_check_every_n_frames;
    float collision_damage;
    float collision_damage_radius;
    int32_t collision_damage_frames_between;
    bool animate;

    static void parse(binary_io::any_istream &in, CrawlerAnimalComponent &out);
};  // struct

} // namespace
