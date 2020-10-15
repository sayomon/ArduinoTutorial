int Volt = A1;
int LED = 8;
int readVal;
float V2;
int wait = 50;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Volt, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(Volt);
  V2 = (5./1023.)*readVal;
  if(V2 > 4 || V2 == 0){
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
  Serial.println(V2);
  delay(wait);
}
