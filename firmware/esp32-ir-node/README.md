# AURA ESP32 IR Node

Firmware for the ESP32-S3 based IR node used by AURA.

## Hardware

- ESP32-S3-WROOM-1-N8R8
- VS1838B IR receiver
- 940nm IR emitter

## Current wiring

### IR Receiver

| ESP32-S3 | VS1838B |
|----------|---------|
| GPIO4    | OUT     |
| GND      | GND     |
| 3V3      | VCC     |

## Development

Framework: Arduino  
Build system: PlatformIO