#pragma once

#include <IRrecv.h>
#include <IRutils.h>

class IrReceiver {
public:
    explicit IrReceiver(uint16_t pin);

    void begin();
    void update();

private:
    IRrecv receiver_;
    decode_results results_;
};