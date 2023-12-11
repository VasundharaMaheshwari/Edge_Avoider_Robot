void setup() {
  // put your setup code here, to run once:
pinMode(8,INPUT);
pinMode(9,INPUT);
pinMode(10,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(8))
{
  digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
}
else
{
digitalWrite(10,LOW);
digitalWrite(12,LOW);
}
if(digitalRead(9))
{
  digitalWrite(13,HIGH);
  digitalWrite(11,LOW);
}
else
{
  digitalWrite(11,LOW);
  digitalWrite(13,LOW);
}
}