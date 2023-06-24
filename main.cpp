/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "start_mruby.h"

//#define WAIT_TIME_MS 500
//DigitalOut led1(LED1);
//DigitalIn button(BUTTON1);

int main() {
  printf("This is the bare metal blinky example running on Mbed OS %d.%d.%d.\n",
         MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);

//  while (true) {
//    led1 = !led1;
//    if( button ){
//        thread_sleep_for(WAIT_TIME_MS);
//    } else {
//        thread_sleep_for(WAIT_TIME_MS / 10);
//    }
//  }

    start_mrubyc();

}
