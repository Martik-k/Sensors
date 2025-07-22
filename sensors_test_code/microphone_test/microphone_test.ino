
int sensorPin = 7;
boolean val = 0;

void setup() {
    pinMode(sensorPin, INPUT);
    Serial.begin(9600);
}

void loop() {
    val = digitalRead(sensorPin);
    Serial.println(val);

    if (val == HIGH) {
        Serial.println("Високий голос!");
    } else {
        Serial.println("Тихо");
    }

    delay(500);
}
