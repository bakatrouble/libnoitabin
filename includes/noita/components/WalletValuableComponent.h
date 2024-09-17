#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct WalletValuableComponent : types::Component {
    const std::string _component_name = "WalletValuableComponent";
    int32_t money_value;

    static void parse(binary_io::any_istream &in, WalletValuableComponent &out);
};  // struct

} // namespace
