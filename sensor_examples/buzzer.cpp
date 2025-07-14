/*
  Buzzer
*/

const int buzzerPin = 9;

void setup() {
    pinMode(buzzerPin, OUTPUT);
}

void loop() {
    tone(buzzerPin, 1000); // Sound at 1000 Hz
    delay(500);
    noTone(buzzerPin);     // Stop sound
    delay(500);
}