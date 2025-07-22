#include <LiquidCrystal.h>
#define trigPin 3
#define echoPin 2

LiquidCrystal LCD(12,11,7,6,5,4);
float duracao;
float cm;


void setup()
{
	LCD.begin(16,2);
  	pinMode(trigPin, OUTPUT);
  	digitalWrite(trigPin, LOW);
  	pinMode(echoPin, INPUT);
}

void pulso()
{
  	digitalWrite(trigPin, HIGH);
  	delayMicroseconds(10);
  	digitalWrite(trigPin, LOW);
}

void loop()
{
  pulso();

  duracao = pulseIn(echoPin, HIGH);
  cm = ((duracao/2) * 0.0343);
  
  LCD.setCursor(3,1);
  LCD.print("Cm: ");
  LCD.print(cm);
  
  delay(1000);
  LCD.clear();
}
      
      
  	