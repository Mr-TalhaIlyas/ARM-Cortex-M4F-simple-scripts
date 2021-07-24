const int buttonpin1=PUSH1;
const int buttonpin2=PUSH2;
int ledPin1=RED_LED;
int ledPin2=BLUE_LED;
int ledPin3=GREEN_LED;
int ledState=HIGH;
long previousmillis=0;
long currentmillis;
long interval=3000;
void setup()
{
  // put your setup code here, to run once:
  pinMode(buttonpin1,INPUT_PULLUP);
  pinMode(buttonpin2,INPUT_PULLUP);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop()
{
  int reading2=digitalRead(buttonpin2);
  int reading1=digitalRead(buttonpin1);
  if(reading1==LOW)
  {
    while(reading2==HIGH)
  {
  digitalWrite(ledPin1,HIGH);
 delay(1000);  
      digitalWrite(ledPin1,LOW);
      digitalWrite(ledPin2,HIGH);
      delay(1000);
      digitalWrite(ledPin2,LOW);
      digitalWrite(ledPin3,HIGH);
      delay(1000);
      digitalWrite(ledPin3,LOW);
      reading2=digitalRead(buttonpin2);
  }
  }
  if(reading2==LOW)
  {
  while(reading1==HIGH)
  {
    digitalWrite(ledPin1,HIGH);
 delay(5000);  
      digitalWrite(ledPin1,LOW);
      digitalWrite(ledPin2,HIGH);
      delay(5000);
      digitalWrite(ledPin2,LOW);
      digitalWrite(ledPin3,HIGH);
      delay(5000);
      digitalWrite(ledPin3,LOW);
      reading1=digitalRead(buttonpin1);
  }
  }
    }
