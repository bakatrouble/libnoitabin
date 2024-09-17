#include <noita/components/GameStatsComponent.h>

void noita::components::GameStatsComponent::parse(binary_io::any_istream &in, noita::components::GameStatsComponent &out) {
    priv::read_integral(in, out.name);
    priv::read_integral(in, out.stats_filename);
    priv::read_integral(in, out.is_player);
    priv::read_integral(in, out.extra_death_msg);
    priv::read_integral(in, out.dont_do_logplayerkill);
    priv::read_integral(in, out.player_polymorph_count);
}
