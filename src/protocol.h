/*
 * Oscilloscope RP2040
 * Copyright (C) 2024 Daniel Gorbea <danielgorbea@hotmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PROTOCOL
#define PROTOCOL

#ifdef __cplusplus
extern "C"
{
#endif

#include "common.h"
#include "string.h"
#include "bsp/board.h"
#include "tusb_config.h"
#include "oscilloscope.h"

    void protocol_task(volatile oscilloscope_config_t *config);
    bool protocol_read_command_handler(uint8_t rhport, uint8_t stage, tusb_control_request_t const *request, volatile oscilloscope_config_t *config);
    void protocol_sample_handler(void);
    void protocol_set_buffer(uint8_t *buffer);
    command_t protocol_read_command(void);
    void protocol_stop(void);
    void protocol_complete_handler(void);

#ifdef __cplusplus
}
#endif

#endif
