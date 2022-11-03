int led = 9;  //Chân cắm đèn LED
void setup()
{
    pinMode(led, OUTPUT); //Đèn LED
}

void LED_nhap_nhay()
{
    digitalWrite(led, HIGH);    //Bật đèn LED
    delay(300);                 //Trong khoảng 0.3 giây
    digitalWrite(led, LOW);     //Tắt đèn LED
    delay(300);                 //Trong khoảng 0.3 giây
}

void loop()
{
    LED_nhap_nhay();
}