const int PIN_POT = A0;
const int PIN_LED_1 = 2;
const int PIN_LED_2 = 4;

void setup() {
  Serial.begin(9600);
  pinMode(PIN_POT, INPUT);
  pinMode(PIN_LED_1, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
}

void loop() {
  int min_heartRate = 512;
  int max_heartRate = 768;
  int heartRate = analogRead(PIN_POT);
  
  if (heartRate <= min_heartRate) {
    digitalWrite(PIN_LED_1, 0);
    digitalWrite(PIN_LED_2, 1);
  } else if (heartRate > max_heartRate) {
    digitalWrite(PIN_LED_1, 1);
    digitalWrite(PIN_LED_2, 0);
  }
  
  Serial.println(heartRate);
  delay(10);
}
