#include <Arduino.h>

#include "config/Pins.h"
#include "ir/IrReceiver.h"

IrReceiver irReceiver(Pins::IR_RECEIVER);

void setup() {
    Serial.begin(115200);
    delay(1000);

    Serial.println();
    Serial.println("AURA firmware starting...");

    irReceiver.begin();

    Serial.println("IR receiver ready.");
}

void loop() {
    irReceiver.update();
}