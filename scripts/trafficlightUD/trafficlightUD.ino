const int buttonpin1=PUSH1;
const int buttonpin2=PUSH2;
int ledPin1=RED_LED;
int ledPin2=BLUE_LED;
int ledPin3=GREEN_LED;
int ledState=HIGH;
long previousMillis=0;
long currentMillis;
long interval=1000;
long interval1=3000;
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
  unsigned long currentMillis = millis();
  int reading2=digitalRead(buttonpin2);
  int reading1=digitalRead(buttonpin1);
  if(reading1==LOW)
  {
    while(reading2==HIGH)
  {
    if(currentMillis - previousMillis > interval)
    {
       previousMillis = currentMillis;
  digitalWrite(ledPin1,HIGH);
    }
    if(currentMillis - previousMillis > interval)
    {
      previousMillis = currentMillis;
      digitalWrite(ledPin1,LOW);
      digitalWrite(ledPin2,HIGH);
    }
     if(currentMillis - previousMillis > interval)
     {
      previousMillis = currentMillis; 
      digitalWrite(ledPin2,LOW);
      digitalWrite(ledPin3,HIGH);
     }
     if(currentMillis - previousMillis > interval)
     {
      previousMillis = currentMillis; 
      digitalWrite(ledPin3,LOW);
     }
      reading2=digitalRead(buttonpin2);
  }
  }
  if(reading2==LOW)
  {
  while(reading1==HIGH)
  {
     if(currentMillis - previousMillis > interval1)
    {
       previousMillis = currentMillis;
    digitalWrite(ledPin1,HIGH);
    }
     if(currentMillis - previousMillis > interval1)
    {
       previousMillis = currentMillis;
      digitalWrite(ledPin1,LOW);
      digitalWrite(ledPin2,HIGH);
    }
     if(currentMillis - previousMillis > interval1)
    {
       previousMillis = currentMillis;
      digitalWrite(ledPin2,LOW);
      digitalWrite(ledPin3,HIGH);
    }
     if(currentMillis - previousMillis > interval1)
    {
       previousMillis = currentMillis;
      digitalWrite(ledPin3,LOW);
    }
      reading1=digitalRead(buttonpin1);
  }
  }
    }
