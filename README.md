# Arduino USB Polygraph (Lie Detector)

A biometric measurement tool using an Arduino Nano to record skin conductivity and pulse variations, streaming real-time sensor data over USB for analysis.

## Components List
- 1x Arduino Nano (or Uno)
- 1x Galvanic Skin Response (GSR) sensor setup (2x conductive electrodes, 1x 10k ohm resistor)
- 1x Optical Pulse Sensor module
- 1x USB connection cable for PC communication
- Breadboard and jumper wires
- Finger bands / velcro straps for sensor mounting

## Wiring & Pinout
| Component | Arduino Pin | Description |
| :--- | :--- | :--- |
| GSR Sensor Output | Analog Pin A0 | Reads voltage changes from skin resistance voltage divider |
| Pulse Sensor Signal ("S") | Analog Pin A1 | Reads optical pulse waveform data |
| Sensor VCC (+) | 5V | Power supply for sensors |
| Sensor GND (-) | GND | Ground connection |

## Configuration & Installation
1. Set up the voltage divider circuit on the breadboard: connect 5V through the skin electrodes and a 10k ohm resistor to analog pin A0 and GND.
2. Connect the optical pulse sensor to analog pin A1.
3. Open the Arduino IDE and ensure the serial communication baud rate is set to `9600`.

## Flashing & Startup
1. Open `src/PolygraphSensorHub.ino` in the Arduino IDE.
2. Select **Arduino Nano** and upload the firmware.
3. Open the **Arduino Serial Plotter** (Tools > Serial Plotter) to visualize the GSR and Pulse waveforms in real time.
4. Attach sensors to the test subject's fingers and establish a baseline before questioning.
