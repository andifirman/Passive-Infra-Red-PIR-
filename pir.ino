int led = 7;
int pir = 3;
int status = 0;
int data = 0;

void setup()
{
  //Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);
}

void loop()
{
  data = digitalRead(pir);
  if((data==HIGH)&&(status==LOW)){
    digitalWrite(led, HIGH);
    status = HIGH;
  }else{
    if((data == LOW)&&(status == HIGH)){
    digitalWrite(led, LOW);
    status = LOW;
    }
  }
}
