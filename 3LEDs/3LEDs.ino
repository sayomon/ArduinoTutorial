int redLED = 2;
int blueLED = 3;
int greenLED = 4;
int redBlinkCount = 3;
int blueBlinkCount = 3;
int greenBlinkCount = 3;
int kurz = 200;
int lang = 500;
int wait = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < redBlinkCount; i++) {
    digitalWrite(redLED, HIGH);
    delay(kurz);
    digitalWrite(redLED, LOW);
    delay(kurz);
  }

  for (int j = 0; j < blueBlinkCount; j++) {
    digitalWrite(blueLED, HIGH);
    delay(lang);
    digitalWrite(blueLED, LOW);
    delay(lang);
  }

  for (int k = 0; k < greenBlinkCount; k++) {
    digitalWrite(greenLED, HIGH);
    delay(kurz);
    digitalWrite(greenLED, LOW);
    delay(kurz);
  }

  delay(wait);
}
