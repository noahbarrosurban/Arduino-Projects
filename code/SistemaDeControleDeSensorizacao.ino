#include <LiquidCrystal.h>
#define LDR A0
#define trig 13
#define echo 12

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

float duracao;
float cm;
int ldr;

void setup() {
  digitalWrite(trig, LOW);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(LDR, INPUT);

  lcd.begin(16, 2);
}

int leituraLDR() 
{
  ldr = analogRead(LDR);
  return ldr;
}

float calculoDis() 
{
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duracao = pulseIn(echo, HIGH);
  cm = ((duracao/2)*0.0343);
  return cm;
}

void loop() {

  if (leituraLDR() == 0 && calculoDis() == 0.00) 
  {
    lcd.setCursor(0,0);
    lcd.print("Dis: ---");
    lcd.setCursor(0,1);
    lcd.print("Luz: ---");

  } 
  else if (leituraLDR() == 0 && calculoDis() != 0.00) 
  {
    if (calculoDis() > 25.0) 
    {
      lcd.setCursor(0,0);
      lcd.print("Dis: ---");
    } 
    else 
    {
      lcd.setCursor(0,0);
      lcd.print("Dis:");
      lcd.setCursor(5, 0);
      lcd.print(calculoDis(),1);
    }

    lcd.setCursor(0,1);
    lcd.print("Dis: ---");

  }  
  else if (leituraLDR()!=0 && calculoDis()!=0.00) 
  {

    if (calculoDis() > 25.0) 
    {
      lcd.setCursor(0,0);
      lcd.print("Dis: ---");

      lcd.setCursor(0,1);
      lcd.print("Luz:");
      lcd.setCursor(5,1);
      lcd.print(leituraLDR(),1);

    } 
    else 
    {
      lcd.setCursor(0,0);
      lcd.print("Dis:");
      lcd.setCursor(5,0);
      lcd.print(calculoDis(),1);

      lcd.setCursor(0,1);
      lcd.print("Luz:");
      lcd.setCursor(5,1);
      lcd.print(leituraLDR(),1);
    }
  }
  else if (leituraLDR() != 0 && calculoDis() == 0.00) 
  {
    lcd.setCursor(0,0);
    lcd.print("Dis: ---");

    lcd.setCursor(0,1);
    lcd.print("Luz:");
    lcd.setCursor(5,1);
    lcd.print(calculoDis(),1);

  }

  delay(500);
  lcd.clear();
}