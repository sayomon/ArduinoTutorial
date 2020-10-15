int bin8 = 3;
int bin4 = 5;
int bin2 = 6;
int bin1 = 9;
int maxNumber = 16;
int wait = 500;
int high = 100;
int low = 3;

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
        analogWrite(bin8, low);
        analogWrite(bin4, low);
        analogWrite(bin2, low);
        analogWrite(bin1, low);
        break;
      case 1:
        analogWrite(bin8, low);
        analogWrite(bin4, low);
        analogWrite(bin2, low);
        analogWrite(bin1, high);
        break;
      case 2:
        analogWrite(bin8, low);
        analogWrite(bin4, low);
        analogWrite(bin2, high);
        analogWrite(bin1, low);
        break;
      case 3:
        analogWrite(bin8, low);
        analogWrite(bin4, low);
        analogWrite(bin2, high);
        analogWrite(bin1, high);
        break;
      case 4:
        analogWrite(bin8, low);
        analogWrite(bin4, high);
        analogWrite(bin2, low);
        analogWrite(bin1, low);
        break;
      case 5:
        analogWrite(bin8, low);
        analogWrite(bin4, high);
        analogWrite(bin2, low);
        analogWrite(bin1, high);
        break;
      case 6:
        analogWrite(bin8, low);
        analogWrite(bin4, high);
        analogWrite(bin2, high);
        analogWrite(bin1, low);
        break;
      case 7:
        analogWrite(bin8, low);
        analogWrite(bin4, high);
        analogWrite(bin2, high);
        analogWrite(bin1, high);
        break;
      case 8:
        analogWrite(bin8, high);
        analogWrite(bin4, low);
        analogWrite(bin2, low);
        analogWrite(bin1, low);
        break;
      case 9:
        analogWrite(bin8, high);
        analogWrite(bin4, low);
        analogWrite(bin2, low);
        analogWrite(bin1, high);
        break;
      case 10:
        analogWrite(bin8, high);
        analogWrite(bin4, low);
        analogWrite(bin2, high);
        analogWrite(bin1, low);
        break;
      case 11:
        analogWrite(bin8, high);
        analogWrite(bin4, low);
        analogWrite(bin2, high);
        analogWrite(bin1, high);
        break;
      case 12:
        analogWrite(bin8, high);
        analogWrite(bin4, high);
        analogWrite(bin2, low);
        analogWrite(bin1, low);
        break;
      case 13:
        analogWrite(bin8, high);
        analogWrite(bin4, high);
        analogWrite(bin2, low);
        analogWrite(bin1, high);
        break;
      case 14:
        analogWrite(bin8, high);
        analogWrite(bin4, high);
        analogWrite(bin2, high);
        analogWrite(bin1, low);
        break;
      case 15:
        analogWrite(bin8, high);
        analogWrite(bin4, high);
        analogWrite(bin2, high);
        analogWrite(bin1, high);
        break;
      default:
        analogWrite(bin8, low);
        analogWrite(bin4, low);
        analogWrite(bin2, low);
        analogWrite(bin1, low);
        break;
    }
    delay(wait);
    
  }
}
