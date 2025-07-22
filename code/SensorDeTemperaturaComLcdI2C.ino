#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C LCD(0x20, 16, 2);

int pino[] = {A0,A1,A2,A3};


void setup()
{
	LCD.init();
}

void loop()
{  	
  for (int pin = 0; pin < 3;pin++){
    
	float SensorTempTensao = analogRead(pino[pin]);

	float Tensao = SensorTempTensao*5/1024; 
	int TemperaturaC = round((Tensao-0.5)*100); 
  
  	LCD.setBacklight(HIGH);
    LCD.setCursor(0,0); 
  	
    LCD.print("Temperatura ");
    LCD.print(pin+1);
    LCD.print(":");
  
  	LCD.setCursor(0,1); 
  	
	LCD.print(TemperaturaC); 
  	LCD.print(" C");
  	
  	delay(4000); 
  }
}