void setup() {
Serial.begin(9600);
}

void loop() {
for (int Count = 0; Count < 15; Count++)
{
  if(Count < 10)
  {
  Serial.print(Count);
  Serial.print(",");
  Serial.println("Count is less than 10");
  
  }
  else
  {
  Serial.print(Count);
  Serial.print(",");
  Serial.println("Count is not less than 10");
  }
}
delay(1000);
}
