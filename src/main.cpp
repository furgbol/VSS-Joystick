// Copyright 2019 FURGBot

#include "serial_sender.h"
#include "manual_control.h"

int main() {
    furgbol::joystick::SerialSender serial_sender("/dev/ttyUSB0");

    ManualControl joystick(0, &serial_sender, 100.0);

    joystick.start();

    while(1);
}