#define pinLED 12

void setup() 
{
pinMod(pinLED, OUTPUT);
Serial.begin(9600);
}

void loop() 
{
int v = analogRead(A0);
if (v < 00) digitalWrite(pinLED,HIGH);
else digitalWrite(pinLED,LOW);
Serial.println(v); 
}
