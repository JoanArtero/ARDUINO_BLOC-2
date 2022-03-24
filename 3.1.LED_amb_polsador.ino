int LED = 10;
int boto =6;

void setup() 
{
pinMode(LED,OUTPUT);
pinMode(boto,INPUT);
}

void loop()
{
  int valor = digitalRead(boto) ;
  digitalWrite(LED,valor);
}
