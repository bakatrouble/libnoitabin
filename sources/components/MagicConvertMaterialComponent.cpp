#include <noita/components/MagicConvertMaterialComponent.h>

void noita::components::MagicConvertMaterialComponent::parse(binary_io::any_istream &in, noita::components::MagicConvertMaterialComponent &out) {
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.min_radius);
    priv::read_integral(in, out.is_circle);
    priv::read_integral(in, out.steps_per_frame);
    priv::read_integral(in, out.from_material);
    priv::read_integral(in, out.from_material_tag);
    priv::read_integral(in, out.from_any_material);
    priv::read_integral(in, out.to_material);
    priv::read_integral(in, out.clean_stains);
    priv::read_integral(in, out.extinguish_fire);
    priv::read_integral(in, out.fan_the_flames);
    priv::read_integral(in, out.temperature_reaction_temp);
    priv::read_integral(in, out.ignite_materials);
    priv::read_integral(in, out.loop);
    priv::read_integral(in, out.kill_when_finished);
    priv::read_integral(in, out.convert_entities);
    priv::read_integral(in, out.stain_frozen);
    priv::read_integral(in, out.reaction_audio_amount);
    priv::read_integral(in, out.convert_same_material);
    priv::read_integral(in, out.from_material_array);
    priv::read_integral(in, out.to_material_array);
    priv::read_integral(in, out.mRadius);
}
