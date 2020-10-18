int redPin = 11;
int buttonHighPin = 10;
int buttonLowPin = 9;
int buttonHighRead;
int buttonLowRead;
int dt = 50;
int LEDstate = 0;
int oldPushHigh = 1;
int oldPushLow = 1;
int newPushHigh;
int newPushLow;
float LEDnum = 0;
float numSettings;
float maxNumLED = 255;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(buttonHighPin, INPUT);
  pinMode(buttonLowPin, INPUT);
  Serial.println("");
  Serial.println("How many states should the LED have?");
  while(Serial.available()==0){
    
  }
  numSettings = Serial.parseInt();
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonHighRead = digitalRead(buttonHighPin);
  buttonLowRead = digitalRead(buttonLowPin);
  Serial.print(buttonHighRead);
  Serial.print(" ");
  Serial.print(buttonLowRead);
  Serial.print(" ");
  Serial.println(LEDnum);

  newPushHigh = buttonHighRead;
  newPushLow = buttonLowRead;

  if (newPushHigh == 0 && oldPushHigh == 1) {
    if (LEDnum < maxNumLED-1) {
      LEDnum = LEDnum + (maxNumLED / (numSettings - 1.));
      analogWrite(redPin, LEDnum);
    }
  }
  oldPushHigh = newPushHigh;

  if (newPushLow == 0 && oldPushLow == 1) {
    if (LEDnum > 0) {
      LEDnum = LEDnum - (maxNumLED / (numSettings - 1.));
      analogWrite(redPin, LEDnum);
    }
  }
  oldPushLow = newPushLow;
}
