#pragma once

#include <./src/AP_HAL/AP_HAL.h>

#if CONFIG_HAL_BOARD == HAL_BOARD_ESP32

#include "./src/AP_HAL_ESP32.h"
#include "AP_HAL_ESP32_Namespace.h"
#include <systemlib/visibility.h>
#include <systemlib/perf_counter.h>

class HAL_ESP32 : public AP_HAL::HAL {
public:
    HAL_ESP32();
    void run(int argc, char* const argv[], Callbacks* callbacks) const override;
};

void hal_ESP32_set_priority(uint8_t priority);

#endif // CONFIG_HAL_BOARD == HAL_BOARD_PX4
