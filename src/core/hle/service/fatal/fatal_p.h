// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/fatal/fatal.h"

namespace Service {
namespace Fatal {

class Fatal_P final : public Module::Interface {
public:
    explicit Fatal_P(std::shared_ptr<Module> module);
};

} // namespace Fatal
} // namespace Service
