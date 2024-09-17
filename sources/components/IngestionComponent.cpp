#include <noita/components/IngestionComponent.h>

void noita::components::IngestionComponent::parse(binary_io::any_istream &in, noita::components::IngestionComponent &out) {
    priv::read_integral(in, out.ingestion_size);
    priv::read_integral(in, out.ingestion_capacity);
    priv::read_integral(in, out.ingestion_cooldown_delay_frames);
    priv::read_integral(in, out.ingestion_reduce_every_n_frame);
    priv::read_integral(in, out.overingestion_damage);
    priv::read_integral(in, out.blood_healing_speed);
    priv::read_integral(in, out.ingestion_satiation_material_tag);
    priv::read_integral(in, out.m_ingestion_cooldown_frames);
}
