int redPin = 11;
int buttonPin = 10;
int buttonRead;
int dt = 50;
int oldValue = 1;
int newValue;
int LEDstate = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead = digitalRead(buttonPin);
  Serial.println(buttonRead);
  delay(dt);
  newValue = buttonRead;
  if (newValue == 0 && oldValue == 1) {
    if (LEDstate == 0) {
      digitalWrite(redPin, HIGH);
      LEDstate = 1;
    }
    else {
      digitalWrite(redPin, LOW);
      LEDstate = 0;
    }
  }
  oldValue = newValue;
}
