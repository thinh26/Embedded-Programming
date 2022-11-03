int do_sang = 0; //Tạo một biến độ sáng
int led = 9; //Chân đèn LED bằng 9

void setup()
{
    pinMode(led,OUTPUT);
}

void LED_sang_dan()
{
    for(do_sang = 0; do_sang <= 255; do_sang+=5) //Vòng lặp chạy từ 0 đến 255, tức là từ 0 đến 5V, đèn sáng dần
    {
        analogWrite(led, do_sang);
        delay(30);
    }
    for(do_sang = 255; do_sang >= 0; do_sang-=5) //Vòng lặp chạy từ 0 đến 255, tức là từ 0 đến 5V, đèn tắt dần
    {
        analogWrite(led, do_sang);
        delay(30);
    }
}

void loop()
{
    LED_sang_dan();
}
