int pin = A1;
int redLED = 2;
int greenLED = 6;
int yellowLED = 10;
int photo;
int wait = 100;
int oben = 650;
int unten = 70;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  photo = analogRead(A1);
  Serial.println(photo);
  if (photo >= oben) {
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
  }
  if (photo <= unten) {
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
  }
  if (photo < oben && photo > unten) {
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
  }
  delay(wait);
}
