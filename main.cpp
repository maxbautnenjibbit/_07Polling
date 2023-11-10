/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

int main()
{
    PortOut leds(PortC, 0xFF);
    DigitalIn button(PA_1);

    button.mode(PullDown);

    while (true) {
        if (button) {
            if (leds >= 25) {
                leds = 0;
            } else {
                leds = leds + 5;
            }

            while (button) {

            }

        }
    }}