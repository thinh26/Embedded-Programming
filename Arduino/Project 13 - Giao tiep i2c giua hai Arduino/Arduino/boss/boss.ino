#include <Wire.h>
int x = 0;
void setup()
{
    Serial.begin(9600);
    Wire.begin();
}

void boss()
{
    while (Serial.available())
    {
        char c = Serial.read();
        if (c == 'H')
        {
            Wire.beginTransmission(6);
            Wire.write('H');
            Wire.endTransmission();
        }
        else if(c == 'L')
        {
            Wire.beginTransmission(6);
            Wire.write('L');
            Wire.endTransmission();
        }
    }
}

void loop()
{
    boss();
}
