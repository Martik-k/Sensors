
// Задаємо піни виходів для інфрачервоних датчиків
const int IR_left = 9;
const int IR_right = 8;

// Задавання пінів для моторів
#define MOTOR_LEFT_PIN1  4    // IN1 - ліві мотори
#define MOTOR_LEFT_PIN2  5    // IN2 - ліві мотори  
#define MOTOR_RIGHT_PIN1 6    // IN3 - праві мотори
#define MOTOR_RIGHT_PIN2 7    // IN4 - праві мотори

void setup(){
  Serial.begin(9600);

}

void loop(){
  int left_result = digitalWrite(IR_left);
  int right_result = digitalRead(IR_right);

  if (left_result == LOW; right_result == LOW){
    moveForward();
    delay(200);
  }
  else if (left_result == LOW; right_result == HIGH){
    turnLeft();
    delay(200);
  }
  else if (left_result == HIGH; right_result == LOW){
    turnRight();
    delay(200);
  }
  else {
    stopMotors();
  }
}

void moveForward() {
  // Ліві мотори вперед
  digitalWrite(MOTOR_LEFT_PIN1, HIGH);
  digitalWrite(MOTOR_LEFT_PIN2, LOW);
  // Праві мотори вперед  
  digitalWrite(MOTOR_RIGHT_PIN1, HIGH);
  digitalWrite(MOTOR_RIGHT_PIN2, LOW);
}

void turnRight() {
  // Ліві мотори назад
  digitalWrite(MOTOR_LEFT_PIN1, LOW);
  digitalWrite(MOTOR_LEFT_PIN2, HIGH);
  // Праві мотори вперед
  digitalWrite(MOTOR_RIGHT_PIN1, HIGH);
  digitalWrite(MOTOR_RIGHT_PIN2, LOW);
}

void moveBackward() {
  // Ліві мотори назад
  digitalWrite(MOTOR_LEFT_PIN1, LOW);
  digitalWrite(MOTOR_LEFT_PIN2, HIGH);
  // Праві мотори назад  
  digitalWrite(MOTOR_RIGHT_PIN1, LOW);
  digitalWrite(MOTOR_RIGHT_PIN2, HIGH);
}


void turnLeft() {
  // Ліві колеса вперед, праві назад  
  digitalWrite(MOTOR_LEFT_PIN1, HIGH);
  digitalWrite(MOTOR_LEFT_PIN2, LOW);
  // Праві мотори назад
  digitalWrite(MOTOR_RIGHT_PIN1, LOW);
  digitalWrite(MOTOR_RIGHT_PIN2, HIGH);
}

void stopMotors() {
  digitalWrite(MOTOR_LEFT_PIN1, LOW);
  digitalWrite(MOTOR_LEFT_PIN2, LOW);
  digitalWrite(MOTOR_RIGHT_PIN1, LOW);
  digitalWrite(MOTOR_RIGHT_PIN2, LOW);
}

