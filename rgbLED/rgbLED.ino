int redLED = 11;
int greenLED = 10;
int blueLED = 9;
String colour;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Which Colour?");
  while (Serial.available() == 0) {

  }
  colour = Serial.readString();
  colour.toLowerCase();
  if (colour == "red") {
    analogWrite(redLED, 255);
    analogWrite(greenLED, 0);
    analogWrite(blueLED, 0);
  }
  if (colour == "green") {
    analogWrite(redLED, 0);
    analogWrite(greenLED, 255);
    analogWrite(blueLED, 0);
  }
  if (colour == "blue") {
    analogWrite(redLED, 0);
    analogWrite(greenLED, 0);
    analogWrite(blueLED, 255);
  }
  if (colour == "yellow") {
    analogWrite(redLED, 255);
    analogWrite(greenLED, 255);
    analogWrite(blueLED, 0);
  }
  if (colour == "magenta") {
    analogWrite(redLED, 255);
    analogWrite(greenLED, 0);
    analogWrite(blueLED, 255);
  }
  if (colour == "cyan") {
    analogWrite(redLED, 0);
    analogWrite(greenLED, 255);
    analogWrite(blueLED, 255);
  }
}
