int A=0, B=1, C=2, D=3, //Chân cắm
    pins[4] = {0,1,2,3}; //Để đỡ phải lặp lại hàm pinMode, dùng vòng lặp để thay thế

void setup()
{
    for(int i=0; i<4; i++)
        pinMode(pins[i],OUTPUT);
}

void KHONG()
{
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,LOW);
}

void MOT()
{
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,HIGH);
}

void HAI()
{
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(D,LOW);
}

void BA()
{
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
}

void BON()
{
    digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(D,LOW);
}

void NAM()
{
    digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(D,HIGH);
}

void SAU()
{
    digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,LOW);
}

void BAY()
{
    digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
}

void TAM()
{
    digitalWrite(A,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,LOW);
}

void CHIN()
{
    digitalWrite(A,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,HIGH);
}

void so_bang_BCD()
{
    KHONG();    delay(500);
    MOT();      delay(500);
    HAI();      delay(500);
    BA();       delay(500);
    BON();      delay(500);
    NAM();      delay(500);
    SAU();      delay(500);
    BAY();      delay(500);
    TAM();      delay(500);
    CHIN();     delay(500);
}

void loop()
{
    so_bang_BCD();
}
