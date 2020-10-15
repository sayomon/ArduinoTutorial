int redLED = 3;
int wait = 100;
int maxNumber = 256;
int i;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (i = 0; i < maxNumber; i++){
    analogWrite(redLED, i);
    delay(wait);
  }
}
