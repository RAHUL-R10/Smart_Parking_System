#include <LiquidCrystal.h>  LiquidCrystal lcd(2,3,4,5,6,7);  int Ir1=8;  int Ir2=9;  int Ir3=11;  int Ir4=12;  int count1=0;  int count2=0;  int count3=0;  int count4=0;  int cnt1=0;  int cnt2=0;  int cnt3=0;  int cnt4=0;  int out1=A0;  int out2=A1;  int out3=A2;  int out4=A3;  int Irbucket1;  int Irbucket2;  int Irbucket3; int Irbucket4; 
void setup() 
{ 
lcd.begin(16, 2); 
pinMode(Ir1,INPUT); 
pinMode(Ir2,INPUT); 
pinMode(Ir3,INPUT); 
pinMode(Ir4,INPUT); 
pinMode(out1,OUTPUT); 
pinMode(out2,OUTPUT); 
pinMode(out3,OUTPUT); 
pinMode(out4,OUTPUT); 
lcd.clear(); 
lcd.setCursor(0,0); 
lcd.print(" WELCOME TO "); 
delay(2000); 
lcd.clear(); 
lcd.setCursor(0,0); 
lcd.print(" IOT BASED CAR "); 
lcd.setCursor(0,1); 
lcd.print(" PARKING SYSTEM "); 
delay(2000); 
Serial.begin(9600);} 
void loop() 
{ 
Irbucket1=digitalRead(Ir1); 
Irbucket2=digitalRead(Ir2); 
Irbucket3=digitalRead(Ir3); 
Irbucket4=digitalRead(Ir4); 
delay(100); 
if(Irbucket1==HIGH ) 
{ 
digitalWrite(out1,HIGH); 
count1=1; 
cnt1=0; 
delay(10); 
} 
else 
{ 
digitalWrite(out1,LOW); 
cnt1=1; 
count1=0; 
delay(10); 
} 
if(Irbucket2==HIGH) { 
digitalWrite(out2,HIGH); 
count2=1; 
cnt2=0; 
delay(10); 
} 
else 
{ 
digitalWrite(out2,LOW); 
cnt2=1; 
count2=0; 
delay(10); 
} 
if(Irbucket3==HIGH) 
{ 
digitalWrite(out3,HIGH); 
count3=1; 
cnt3=0; 
delay(10); 
} 
else 
{ 
digitalWrite(out3,LOW); cnt3=1; 
count3=0; 
delay(10); 
} 
if(Irbucket4==HIGH) 
{ 
digitalWrite(out4,HIGH); 
count4=1; 
cnt4=0; 
delay(10); 
} 
else 
{ 
digitalWrite(out4,LOW); 
cnt4=1; 
count4=0; 
delay(10); 
} 
lcd.clear(); 
lcd.setCursor(0,0); 
lcd.print("Filled Slots:"); 
lcd.setCursor(13,0); 
int x=count1+count2+count3+count4; lcd.print(x); 
lcd.setCursor(0,1); 
lcd.print("Empty Slots :"); 
lcd.setCursor(13,1); 
int y=cnt1+cnt2+cnt3+cnt4; 
lcd.print(y); 
delay(100); 
}
