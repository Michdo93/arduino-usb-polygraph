// Pin definitions
const int gsrSensorPin = A0;
const int pulseSensorPin = A1;

// Sampling interval management
unsigned long previousMillis = 0;
const long sampleIntervalMs = 20; // 50 Hz sampling rate

void setup() {
  Serial.begin(9600);
  while (!Serial); // Wait for serial port to connect
  
  Serial.println(F("System Initialized: USB Polygraph Online"));
  Serial.println(F("Format: GSR_Value, Pulse_Value"));
}

void loop() {
  unsigned long currentMillis = millis();

  // Non-blocking sampling loop
  if (currentMillis - previousMillis >= sampleIntervalMs) {
    previousMillis = currentMillis;

    int gsrRawValue = analogRead(gsrSensorPin);
    int pulseRawValue = analogRead(pulseSensorPin);

    // Stream comma-separated values for serial plotting or external processing
    Serial.print(gsrRawValue);
    Serial.print(F(","));
    Serial.println(pulseRawValue);
  }
}
