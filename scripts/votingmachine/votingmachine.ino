const int buttonpin1=PUSH1;
const int buttonpin2=PUSH2;
int ledPin1=RED_LED;
int ledPin2=GREEN_LED;
int counter1=0;
int counter2=0;
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
  counter1++;
  delay(250);
}
if(reading2==LOW)
{
  counter2++;
  delay(250);
}
if(counter1+counter2==5)
{
  if(counter1>counter2)
  digitalWrite(ledPin1,HIGH);
  else
  digitalWrite(ledPin2,HIGH);
}
}

