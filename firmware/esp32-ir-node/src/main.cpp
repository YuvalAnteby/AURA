#include <Arduino.h>
#include <IRrecv.h>
#include <IRutils.h>

#include "config/Pins.h"

constexpr uint16_t CAPTURE_BUFFER_SIZE = 1024;
constexpr uint8_t CAPTURE_TIMEOUT_MS = 50;

IRrecv irReceiver(
    Pins::IR_RECEIVER,
    CAPTURE_BUFFER_SIZE,
    CAPTURE_TIMEOUT_MS,
    true
);

decode_results results;

void setup() {
    Serial.begin(115200);
    delay(1000);

    Serial.println();
    Serial.println("AURA - IR receiver diagnostic");
    Serial.println("Waiting for IR signals...");

    irReceiver.enableIRIn();
}

void loop() {
    if (!irReceiver.decode(&results)) {
        return;
    }

    Serial.println();
    Serial.println("========== IR SIGNAL ==========");

    Serial.print("Protocol: ");
    Serial.println(typeToString(results.decode_type));

    Serial.print("Bits: ");
    Serial.println(results.bits);

    Serial.print("Value: 0x");
    serialPrintUint64(results.value, HEX);
    Serial.println();

    Serial.println("===============================");

    irReceiver.resume();
}