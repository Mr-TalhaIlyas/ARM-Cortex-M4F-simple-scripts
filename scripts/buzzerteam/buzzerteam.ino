const int buttonpin1=PUSH1;
const int buttonpin2=PUSH2;
int ledPin1=RED_LED;
int ledPin2=GREEN_LED;
int ledState=HIGH;
void setup()
{
  // put your setup code here, to run once:
  pinMode(buttonpin1,INPUT_PULLUP);
  pinMode(buttonpin2,INPUT_PULLUP);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  int reading1 = digitalRead(buttonpin1);
  int reading2 = digitalRead(buttonpin2);
  if(reading1==LOW)
  {
  digitalWrite(RED_LED,HIGH);
  }
   if(reading2==LOW)
   {
  digitalWrite(GREEN_LED,HIGH);
   }
}
