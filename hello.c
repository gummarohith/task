
const int redLEDs[16] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, A0, A1, A2, A3};
const int greenLEDs[16] = {A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19};


const int delayTime = 500; 

void setup() {
  
  for (int i = 0; i < 16; i++) {
    pinMode(redLEDs[i], OUTPUT);
    pinMode(greenLEDs[i], OUTPUT);
  }
}

void loop() {
  
  for (int i = 0; i < 16; i++) {
    digitalWrite(redLEDs[i], HIGH);
    digitalWrite(greenLEDs[i], LOW);
  }
  delay(delayTime);

  
  for (int i = 0; i < 16; i++) {
    digitalWrite(redLEDs[i], LOW);
    digitalWrite(greenLEDs[i], HIGH);
    delay(delayTime);
  }

  
  for (int i = 0; i < 16; i++) {
    digitalWrite(redLEDs[i], HIGH);
    digitalWrite(greenLEDs[i], LOW);
    delay(delayTime);
  }
}
