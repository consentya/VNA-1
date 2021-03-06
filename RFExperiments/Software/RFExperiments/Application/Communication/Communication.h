#pragma once

#include <stdint.h>

#ifdef __cplusplus

#include "Protocol.hpp"

namespace Communication {

void Input(uint8_t *buf, uint16_t len);
bool Send(Protocol::PacketInfo packet);

}

extern "C" {
#endif
void communication_usb_input(uint8_t *buf, uint16_t len);
#ifdef __cplusplus
}
#endif
