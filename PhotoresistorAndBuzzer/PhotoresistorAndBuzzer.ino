int pin = A1;
int buzzer = 11;
float photo;
float photoMax = 800;
float photoMin = 10;
float buzzMax = 800;
float buzzMin = 200;
float buzzTime;
float m;
float b;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  photo = analogRead(A1);
  //Serial.println(photo);
  /*Serial.print(" ");
  m = ((buzzMax - buzzMin) / (photoMax - photoMin));
  b = buzzMin - ((buzzMax - buzzMin) / (photoMax - photoMin)) * photoMin;
  buzzTime = photo * m + b;
  Serial.print(m);
  Serial.print(" ");
  Serial.print(b);
  Serial.println(buzzTime);*/
  buzzTime = photo * 0.76 + 192.41;
  digitalWrite(buzzer, HIGH);
  delayMicroseconds(buzzTime);
  digitalWrite(buzzer, LOW);
  delayMicroseconds(buzzTime);
}
