#include "ir/IrReceiver.h"

IrReceiver::IrReceiver(uint16_t pin)
    : receiver_(pin, 1024, 50, true) {
}

void IrReceiver::begin() {
    receiver_.enableIRIn();
}

void IrReceiver::update() {
    if (!receiver_.decode(&results_)) {
        return;
    }

    Serial.println();
    Serial.println("========== IR SIGNAL ==========");

    Serial.print("Protocol: ");
    Serial.println(typeToString(results_.decode_type));

    Serial.print("Bits: ");
    Serial.println(results_.bits);

    Serial.print("Address: 0x");
    Serial.println(results_.address, HEX);

    Serial.print("Command: 0x");
    Serial.println(results_.command, HEX);
    
    Serial.print("Value: 0x");
    serialPrintUint64(results_.value, HEX);
    Serial.println();

    Serial.print("Repeat: ");
    Serial.println(results_.repeat ? "yes" : "no");

    Serial.println("===============================");

    receiver_.resume();
}