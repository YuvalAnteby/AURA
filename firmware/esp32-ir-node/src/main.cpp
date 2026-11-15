#include <Arduino.h>
#include <IRsend.h>

#include "config/Pins.h"

IRsend irSender(Pins::IR_TRANSMITTER);

void setup() {
    Serial.begin(115200);
    delay(1000);

    Serial.println();
    Serial.println("AURA - NEC replay test");

    irSender.begin();

    Serial.println("Sending Mute in 3 seconds...");
    delay(3000);

    irSender.sendNEC(0x8E700FF, 32);

    Serial.println("Mute command sent.");
}

void loop() {
}