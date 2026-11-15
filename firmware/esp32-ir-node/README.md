# AURA ESP32 IR Node

Firmware for the ESP32-S3 based IR node used by AURA.

## Hardware

- ESP32-S3-WROOM-1-N8R8
- VS1838B IR receiver
- 940nm IR emitter

## Current wiring

# MB-102 Breadboard Planner

Layout: left rails `- +`, left block J I H G F, center gap, right block E D C B A, right rails `- +`.
Same row and same side of the gap means same node. Row 0 added so the coordinates match your plan.

```
     |  -   |  +   |  J   |  I   |  H   |  G   |  F   ||  E   |  D   |  C   |  B   |  A   |  -   |  +   |
-------------------------------------------------------------------------------------------------------------
0    |      |      | BRN  | GND  |      |      |      ||      |      |      | GND  |      |      |      |   0
1    |      |      |      | GND  |      |      |      ||      |      |      | 5V   |      |      |      |   1
2    |      |      |      | IO19 |      |      |      ||      |      |      | IO14 |      |      |      |   2
3    |      |      |      | IO20 |      |      |      ||      |      |      | IO13 |      |      |      |   3
4    |      |      |      | IO21 |      |      |      ||      |      |      | IO12 |      |      |      |   4
5    |      |      |      | IO47 |      |      |      ||      |      |      | IO11 |      |      |      |   5
6    |      |      |      | IO48 |      |      |      ||      |      |      | IO10 |      |      |      |   6
7    |      |      |      | IO45 |      |      |      ||      |      |      | IO9  |      |      |      |   7
8    |      |      |      | IO0  |      |      |      ||      |      |      | IO46 |      |      |      |   8
9    |      |      |      | IO35 |      |      |      ||      |      |      | IO3  |      |      |      |   9
10   |      |      |      | IO36 |      |      |      ||      |      |      | IO8  |      |      |      |   10
11   |      |      |      | IO37 |      |      |      ||      |      |      | IO18 |      |      |      |   11
12   |      |      |      | IO38 |      |      |      ||      |      |      | IO17 |      |      |      |   12
13   |      |      |      | IO39 |      |      |      ||      |      |      | IO16 |      |      |      |   13
14   |      |      |      | IO40 |      |      |      ||      |      |      | IO15 |      |      |      |   14
15   |      |      |      | IO41 |      |      |      ||      |      |      | IO7  |      |      |      |   15
16   |      |      |      | IO42 |      |      |      ||      |      |      | IO6  | YEL  |      |      |   16
17   |      |      |      | IO2  |      |      |      ||      |      |      | IO5  |      |      |      |   17
18   |      |      |      | IO1  |      |      |      ||      |      |      | IO4  | ORG  |      |      |   18
19   |      |      |      | RX   |      |      |      ||      |      |      | RST  |      |      |      |   19
20   |      |      |      | TX   |      |      |      ||      |      |      | 3V3  |      |      |      |   20
21   |      |      | BLK  | GND  |      |      |      ||      |      |      | 3V3  | RED  |      |      |   21
22   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   22
23   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   23
24   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   24
25   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   25
26   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   26
27   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   27
28   |      |      |      |      |      |      |      ||      |      | R10K | RED  | VCC  |      |      |   28
29   |      |      |      |      |      |      |      ||      |      |      | BLK  | GND  |      |      |   29
30   |      |      |      |      |      |      |      ||      |      | R10K | ORG  | OUT  |      |      |   30
31   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   31
32   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   32
33   |      |      |      |      |      |      |      ||      | BRN  |      |      | LED- |      |      |   33
34   |      |      |      |      |      |      |      ||      |      | R10  |      | LED+ |      |      |   34
35   |      |      |      |      |      |      |      ||      | YEL  | R10  |      |      |      |      |   35
36   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   36
37   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   37
38   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   38
39   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   39
40   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   40
41   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   41
42   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   42
43   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   43
44   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   44
45   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   45
46   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   46
47   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   47
48   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   48
49   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   49
50   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   50
51   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   51
52   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   52
53   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   53
54   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   54
55   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   55
56   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   56
57   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   57
58   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   58
59   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   59
60   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   60
61   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   61
62   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   62
63   |      |      |      |      |      |      |      ||      |      |      |      |      |      |      |   63
```

## Legend

| Label              | Meaning                                                                 |
| ------------------ | ----------------------------------------------------------------------- |
| ESP                | ESP32 pin (rows 0-21, columns B and I)                                  |
| ESP4 / E3V3 / EGND | ESP32 GPIO4, 3V3 and GND pins (EGND positions inferred from your wires) |
| VCC / GND / OUT    | VS1838B pins (28A / 29A / 30A)                                          |
| R10K               | 10K pull-up resistor, 28C to 30C                                        |
| R10                | 10 ohm resistor, 33C to 34C                                             |
| LED- / LED+        | IR LED short leg (cathode) 33A, long leg (anode) 34A                    |

## Dupont wires

| Color | From | To  | Purpose                  |
| ----- | ---- | --- | ------------------------ |
| RED   | 28B  | 21A | 3V3 to receiver VCC      |
| BLK   | 29B  | 21J | Ground to receiver GND   |
| ORG   | 17A  | 30B | GPIO4 to receiver OUT    |
| BRN   | 33D  | 0J  | LED cathode to ground    |
| YEL   | 34D  | 16A | LED anode to GPIO at 16B |

### IR Receiver

## Development

Framework: Arduino  
Build system: PlatformIO
