// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/kernel/hle_ipc.h"
#include "core/hle/service/service.h"

namespace Service {
namespace Sockets {

class NSD final : public ServiceFramework<NSD> {
public:
    explicit NSD(const char* name);
    ~NSD() = default;
};

} // namespace Sockets
} // namespace Service
