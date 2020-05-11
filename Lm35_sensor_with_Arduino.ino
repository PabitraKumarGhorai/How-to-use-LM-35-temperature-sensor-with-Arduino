float temp;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  temp=analogRead(A0);
  temp=temp*0.48828125;
  Serial.print("Temperature:");
  Serial.print( temp);
  Serial.println();
  delay(1000);
}
