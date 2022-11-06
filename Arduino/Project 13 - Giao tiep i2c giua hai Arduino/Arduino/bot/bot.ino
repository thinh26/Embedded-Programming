#include <Wire.h>
int led = 8, x = 0;

void setup()
{
    Wire.begin(6);
    Wire.onReceive(receiveEvent);
    pinMode(led,OUTPUT);
    digitalWrite(led,OUTPUT);
}
void loop()
{
}

void receiveEvent(int bytes)
{
    while(Wire.available())
    {
        char c = Wire.read();
        if(c == 'H')
            digitalWrite(led,HIGH);
        else if(c == 'L')
            digitalWrite(led,LOW);
    }
}
