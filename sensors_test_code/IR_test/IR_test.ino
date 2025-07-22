// #include <IRremote.h>

const int IR_out = 8;

// IRrecv irrecv(IR_out);
// decode_results results;


void setup() {
  // put your setup code here, to run once:
  // irrecv.enableIRIn();
  Serial.begin(9600);

}

void loop() {
  // if (irrecv.decode(&results)) {
  //   Serial.print("Отримано код: ");
  //   Serial.println(results.value, HEX);  // HEX — шістнадцятковий формат
  //   irrecv.resume();  // Готуватися до наступного сигналу
  // }
  int sensor_result = digitalRead(IR_out);
  if (sensor_result == LOW) {
    Serial.println("Зараз видно білу лінію");
  }
  else {
    Serial.println("Зараз видно чорну лінію");
  }
  delay(100);
}
