#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C LCD(0x27,16,2);

int den = 2;
int loa = 3;
int cam_bien = 8;

void setup()
{
    LCD.init();
    LCD.backlight();
    LCD.println("hello");
    LCD.setCursor(0,1);
    LCD.println("CamBienLua");
    pinMode(den,OUTPUT);
    pinMode(loa,OUTPUT);
    pinMode(cam_bien,INPUT);
    delay(500);
}

void Arduino_voi_cam_bien_ngon_lua()
{
    int value = digitalRead(cam_bien);
    if(value == 1)
    {
        LCD.setCursor(0,0);
        LCD.print("GiaTriValue: ");
        LCD.println(value);
        LCD.setCursor(0,1);
        LCD.println("COLUA");
        digitalWrite(den,HIGH);
        digitalWrite(loa,HIGH);
    }
    else
    {
        LCD.setCursor(0,0);
        LCD.print("GiaTriValue: ");
        LCD.println(value);
        LCD.setCursor(0,1);
        LCD.println("BINHTHUONG");
        digitalWrite(den,LOW);
        digitalWrite(loa,LOW);
    }
    delay(500);
    LCD.clear();
}

void loop()
{
    Arduino_voi_cam_bien_ngon_lua();
}
