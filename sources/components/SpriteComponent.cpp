#include <noita/components/SpriteComponent.h>

void noita::components::SpriteComponent::parse(binary_io::any_istream &in, noita::components::SpriteComponent &out) {
    priv::read_integral(in, out.image_file);
    priv::read_integral(in, out.ui_is_parent);
    priv::read_integral(in, out.is_text_sprite);
    priv::read_integral(in, out.offset_x);
    priv::read_integral(in, out.offset_y);
    types::vec2<float>::parse(in, out.transform_offset);
    types::vec2<float>::parse(in, out.offset_animator_offset);
    priv::read_integral(in, out.alpha);
    priv::read_integral(in, out.visible);
    priv::read_integral(in, out.emissive);
    priv::read_integral(in, out.additive);
    priv::read_integral(in, out.fog_of_war_hole);
    priv::read_integral(in, out.smooth_filtering);
    priv::read_integral(in, out.rect_animation);
    priv::read_integral(in, out.next_rect_animation);
    priv::read_integral(in, out.text);
    priv::read_integral(in, out.z_index);
    priv::read_integral(in, out.update_transform);
    priv::read_integral(in, out.update_transform_rotation);
    priv::read_integral(in, out.kill_entity_after_finished);
    priv::read_integral(in, out.has_special_scale);
    priv::read_integral(in, out.special_scale_x);
    priv::read_integral(in, out.special_scale_y);
    priv::read_integral(in, out.never_ragdollify_on_death);
}
