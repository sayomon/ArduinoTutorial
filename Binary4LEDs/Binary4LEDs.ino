int bin8 = 2;
int bin4 = 3;
int bin2 = 4;
int bin1 = 5;
int maxNumber = 16;
int wait = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(bin8, OUTPUT);
  pinMode(bin4, OUTPUT);
  pinMode(bin2, OUTPUT);
  pinMode(bin1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int number = 0; number < maxNumber; number++){
    switch(number){
      case 0:
        digitalWrite(bin8, LOW);
        digitalWrite(bin4, LOW);
        digitalWrite(bin2, LOW);
        digitalWrite(bin1, LOW);
        break;
      case 1:
        digitalWrite(bin8, LOW);
        digitalWrite(bin4, LOW);
        digitalWrite(bin2, LOW);
        digitalWrite(bin1, HIGH);
        break;
      case 2:
        digitalWrite(bin8, LOW);
        digitalWrite(bin4, LOW);
        digitalWrite(bin2, HIGH);
        digitalWrite(bin1, LOW);
        break;
      case 3:
        digitalWrite(bin8, LOW);
        digitalWrite(bin4, LOW);
        digitalWrite(bin2, HIGH);
        digitalWrite(bin1, HIGH);
        break;
      case 4:
        digitalWrite(bin8, LOW);
        digitalWrite(bin4, HIGH);
        digitalWrite(bin2, LOW);
        digitalWrite(bin1, LOW);
        break;
      case 5:
        digitalWrite(bin8, LOW);
        digitalWrite(bin4, HIGH);
        digitalWrite(bin2, LOW);
        digitalWrite(bin1, HIGH);
        break;
      case 6:
        digitalWrite(bin8, LOW);
        digitalWrite(bin4, HIGH);
        digitalWrite(bin2, HIGH);
        digitalWrite(bin1, LOW);
        break;
      case 7:
        digitalWrite(bin8, LOW);
        digitalWrite(bin4, HIGH);
        digitalWrite(bin2, HIGH);
        digitalWrite(bin1, HIGH);
        break;
      case 8:
        digitalWrite(bin8, HIGH);
        digitalWrite(bin4, LOW);
        digitalWrite(bin2, LOW);
        digitalWrite(bin1, LOW);
        break;
      case 9:
        digitalWrite(bin8, HIGH);
        digitalWrite(bin4, LOW);
        digitalWrite(bin2, LOW);
        digitalWrite(bin1, HIGH);
        break;
      case 10:
        digitalWrite(bin8, HIGH);
        digitalWrite(bin4, LOW);
        digitalWrite(bin2, HIGH);
        digitalWrite(bin1, LOW);
        break;
      case 11:
        digitalWrite(bin8, HIGH);
        digitalWrite(bin4, LOW);
        digitalWrite(bin2, HIGH);
        digitalWrite(bin1, HIGH);
        break;
      case 12:
        digitalWrite(bin8, HIGH);
        digitalWrite(bin4, HIGH);
        digitalWrite(bin2, LOW);
        digitalWrite(bin1, LOW);
        break;
      case 13:
        digitalWrite(bin8, HIGH);
        digitalWrite(bin4, HIGH);
        digitalWrite(bin2, LOW);
        digitalWrite(bin1, HIGH);
        break;
      case 14:
        digitalWrite(bin8, HIGH);
        digitalWrite(bin4, HIGH);
        digitalWrite(bin2, HIGH);
        digitalWrite(bin1, LOW);
        break;
      case 15:
        digitalWrite(bin8, HIGH);
        digitalWrite(bin4, HIGH);
        digitalWrite(bin2, HIGH);
        digitalWrite(bin1, HIGH);
        break;
      default:
        digitalWrite(bin8, LOW);
        digitalWrite(bin4, LOW);
        digitalWrite(bin2, LOW);
        digitalWrite(bin1, LOW);
        break;
    }
    delay(wait);
    
  }
}
