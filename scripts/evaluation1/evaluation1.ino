
const int buttonPin1=PUSH1;
const int ledPin1=RED_LED;
 int x=0;
 int counter=0;
void setup()
{
  pinMode(ledPin1,OUTPUT);
  pinMode(buttonPin1,INPUT_PULLUP);
  
  // put your setup code here, to run once:
  
}
void loop()
{
    // put your main code here, to run repeatedly:
  int switchstate= digitalRead(buttonPin1);
  if(switchstate==LOW)
  {
  counter++;
  delay(250);
  
  }
  if(counter==4)
  {

    for(int x=0;x<=4;x++)
    {
      digitalWrite(ledPin1,HIGH);
      delay(1000);
      digitalWrite(ledPin1,LOW);
      delay(1000);
      
    }
    counter=0;
  } 
}
