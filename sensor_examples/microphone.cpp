/*
 *
 * Model: KY-038 or LM393
 *
 * Rui Santos 
 * Complete Project Details https://randomnerdtutorials.com
 */

int ledPin = 13;
int sensorPin = 7;
boolean val = 0;

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(sensorPin, INPUT);
    Serial.begin(9600);
}

void loop() {
    val = digitalRead(sensorPin);
    Serial.println(val);

    // When the sensor detects a signal above the threshold value, LED flashes
    if (val == HIGH) {
        digitalWrite(ledPin, HIGH);
    } else {
        digitalWrite(ledPin, LOW);
    }
}

