#pragma once

#include <any>
#include <format>
#include <variant>
#include <set>

namespace noita::types {
    struct Component {
        uint8_t _version;
        bool _enabled;
        std::set<std::string> tags;
    };
}