#include <LiquidCrystal.h>

LiquidCrystal LCD(12,11,7,6,5,4);

int pino[] = {A0,A1,A2,A3};


void setup()
{
	LCD.begin(16,2);  
}

void loop()
{
  	
  for (int pin = 0; pin < 4;pin++){
    
	float SensorTempTensao = analogRead(pino[pin]); 
	float Tensao = SensorTempTensao*5/1024;

	int TemperaturaC = round((Tensao-0.5)*100); 
  	LCD.clear();
  	
    LCD.print("Temperatura ");
    LCD.print(pin+1);
    LCD.print(":");
  
  	LCD.setCursor(0,1); 
  	
	LCD.print(TemperaturaC);
  	LCD.print(" C");
  	
  	delay(4000); 
  }
}