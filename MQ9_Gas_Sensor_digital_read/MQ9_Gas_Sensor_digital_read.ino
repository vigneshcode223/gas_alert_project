int gas_1=8;
int gas_v=0;
int buzzer=6;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(gas_1,INPUT);
pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
gas_v=digitalRead(gas_1);
Serial.println(gas_v);
delay(1000);
if(gas_v == 0)
{
  digitalWrite(buzzer,HIGH);
  delay(1000);
}
else
{
  digitalWrite(buzzer,LOW);
}
}
