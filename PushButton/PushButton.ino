int redPin = 11;
int buttonPin = 10;
int buttonRead;
int dt = 50;

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
  if (buttonRead == 1) {
    digitalWrite(redPin, LOW);
  }
  if (buttonRead == 0) {
    digitalWrite(redPin, HIGH);
  }
}
