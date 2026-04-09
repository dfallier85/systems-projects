/*
  autogarden_phase1_controller.ino

  Clean starter controller for an AutoGarden-style embedded watering system.

  What it does:
  - reads a soil moisture sensor
  - converts the reading into a simple moisture percentage
  - compares the result to a watering threshold
  - turns a relay-controlled pump on for a short duration when soil is too dry
  - prints status over serial

  This starter sketch is intentionally simple and readable.
  It is meant to show the system structure before adding MQTT, multiple zones,
  lighting control, data logging, or scheduling.

  Update these values before use:
  - SENSOR_PIN
  - RELAY_PIN
  - DRY_RAW
  - WET_RAW
  - MOISTURE_THRESHOLD
  - PUMP_RUN_MS
*/

const int SENSOR_PIN = A0;
const int RELAY_PIN = 7;

// Adjust these after real calibration.
const int DRY_RAW = 850;
const int WET_RAW = 350;

// Below this moisture %, watering is allowed.
const int MOISTURE_THRESHOLD = 40;

// Relay logic. Change if your relay module is active-LOW.
const int RELAY_ON = HIGH;
const int RELAY_OFF = LOW;

// Timing
const unsigned long READ_INTERVAL_MS = 5000;
const unsigned long PUMP_RUN_MS = 3000;
const unsigned long POST_WATER_DELAY_MS = 15000;

unsigned long lastReadMs = 0;
unsigned long lastWaterMs = 0;
bool pumpState = false;


int clampValue(int value, int minValue, int maxValue) {
  if (value < minValue) return minValue;
  if (value > maxValue) return maxValue;
  return value;
}

int rawToPercent(int rawValue) {
  long mapped = map(rawValue, DRY_RAW, WET_RAW, 0, 100);
  return clampValue((int)mapped, 0, 100);
}

void setPump(bool on) {
  pumpState = on;
  digitalWrite(RELAY_PIN, on ? RELAY_ON : RELAY_OFF);
}

void waterPlant() {
  Serial.println("Moisture below threshold. Starting pump...");
  setPump(true);
  delay(PUMP_RUN_MS);
  setPump(false);
  Serial.println("Pump cycle complete.");
  lastWaterMs = millis();
}

void printStatus(int rawValue, int moisturePercent) {
  Serial.print("Raw: ");
  Serial.print(rawValue);
  Serial.print(" | Moisture: ");
  Serial.print(moisturePercent);
  Serial.print("% | Pump: ");
  Serial.print(pumpState ? "ON" : "OFF");
  Serial.print(" | Threshold: ");
  Serial.print(MOISTURE_THRESHOLD);
  Serial.println("%");
}

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  setPump(false);

  Serial.begin(115200);
  Serial.println("AutoGarden Phase 1 controller ready");
}

void loop() {
  unsigned long now = millis();

  if (now - lastReadMs >= READ_INTERVAL_MS) {
    lastReadMs = now;

    int rawValue = analogRead(SENSOR_PIN);
    int moisturePercent = rawToPercent(rawValue);

    printStatus(rawValue, moisturePercent);

    bool postWaterCooldownDone = (now - lastWaterMs >= POST_WATER_DELAY_MS);

    if (moisturePercent < MOISTURE_THRESHOLD && postWaterCooldownDone) {
      waterPlant();
    }
  }
}
