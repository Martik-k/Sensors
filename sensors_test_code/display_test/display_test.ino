#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Розміри дисплея
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Створюємо об'єкт дисплея
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  // Ініціалізація серійного порту
  Serial.begin(9600);

  // Ініціалізація дисплея
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {  // 0x3C — стандартна I2C-адреса
    Serial.println(F("OLED is not found!"));
    for (;;);  // Зупинити
  }

  delay(1000);  // Затримка на запуск

  display.clearDisplay();           // Очистити екран
  display.setTextSize(1);           // Розмір тексту (1 = маленький)
  display.setTextColor(SSD1306_WHITE); // Колір — білий
  display.setCursor(0, 0);          // Початкова позиція
  display.println("Hello, World!");
  display.display();                // Вивести на екран
}

void loop() {
  // Нічого не оновлюємо — повідомлення вже виведено
}

