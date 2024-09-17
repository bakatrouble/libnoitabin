#include <noita/components/LightningComponent.h>

void noita::components::LightningComponent::parse(binary_io::any_istream &in, noita::components::LightningComponent &out) {
    types::ConfigExplosion::parse(in, out.config_explosion);
    priv::read_integral(in, out.sprite_lightning_file);
    priv::read_integral(in, out.is_projectile);
    priv::read_integral(in, out.explosion_type);
    priv::read_integral(in, out.arc_lifetime);
}
