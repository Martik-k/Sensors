
#include <Ultrasonic.h>

const int EchoPin = 12;
const int TrigPin = 11;

Ultrasonic ultrasonic(TrigPin, EchoPin);

void setup() {
  // put your setup code here, to run once:
  // pinMode(EchoPin, INPUT);
  // pinMode(TrigPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  // put your main code here, to run repeatedly:
  // digitalWrite(TrigPin, LOW);
  // delayMicroseconds(2);
  // digitalWrite(TrigPin, HIGH);
  // delayMicroseconds(10);
  // digitalWrite(TrigPin, LOW);

  // duration = pulseIn(EchoPin, HIGH);

  // duration = pulseIn(EchoPin, HIGH);

  // Перевести час у відстань
  long distance = ultrasonic.read();  // у см

  Serial.print("Відстань: ");
  Serial.print(distance);
  Serial.println(" см");

  delay(500);

}
