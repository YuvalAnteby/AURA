#include "ir/IrReceiver.h"

IrReceiver::IrReceiver(uint16_t pin)
    : receiver_(pin) {
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

    Serial.print("Value: 0x");
    serialPrintUint64(results_.value, HEX);
    Serial.println();

    Serial.println("===============================");

    receiver_.resume();
}