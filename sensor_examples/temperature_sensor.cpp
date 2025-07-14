/*

    Model: LM35

    * Rui Santos
    * Complete Project Details https://RandomNerdTutorials.com
*/

const int sensorPin = A0;
float sensorValue;
float voltageOut;
float temperatureC;
float temperatureF;

void setup() {
    pinMode(sensorPin, INPUT);
    Serial.begin(9600);
}

void loop() {
    sensorValue = analogRead(sensorPin);
    
    // Перетворення значення ADC в мілівольти (5V / 1024 кроків)
    voltageOut = (sensorValue * 5000) / 1024;  // у мілівольтах
    
    // LM35 видає 10 мВ на градус Цельсія
    temperatureC = voltageOut / 10.0;
    
    // Конвертація у Фаренгейти
    temperatureF = (temperatureC * 1.8) + 32;

    Serial.print("Temperature (ºC): ");
    Serial.print(temperatureC);
    Serial.print("  Temperature (ºF): ");
    Serial.print(temperatureF);
    Serial.print("  Voltage (mV): ");
    Serial.println(voltageOut);

    delay(1000);
}
