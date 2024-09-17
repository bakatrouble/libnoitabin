#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct WalletComponent : types::Component {
    const std::string _component_name = "WalletComponent";
    int64_t money;
    int64_t money_spent;
    int64_t mMoneyPrevFrame;
    bool mHasReachedInf;

    static void parse(binary_io::any_istream &in, WalletComponent &out);
};  // struct

} // namespace
