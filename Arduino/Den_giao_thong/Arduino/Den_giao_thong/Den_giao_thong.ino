int led_red = 1, yellow_led = 2, green_led=3;   //Chân cắm đèn LED đỏ là 1, chân cắm đèn LED vàng là 2, chân cắm đèn LED xanh là 3
void setup()
{
    pinMode(led_red, OUTPUT);         //Đèn LED đỏ
    pinMode(yellow_led, OUTPUT);      //Đèn LED vàng
    pinMode(green_led, OUTPUT);       //Đèn LED xanh  
}
void loop()
{
  digitalWrite(green_led, HIGH);      //Sáng đèn LED xanh
  delay(300);                         //Trong khoảng 0.3 giây
  digitalWrite(green_led, LOW);       //Tắt đèn LED xanh
  delay(300);                         //Trong khoảng 0.3 giây
  digitalWrite(yellow_led, HIGH);     //Sáng đèn LED vàng
  delay(300);                         //Trong khoảng 0.3 giây
  digitalWrite(yellow_led, LOW);      //Tắt đèn LED vàng
  delay(300);                         //Trong khoảng 0.3 giây
  digitalWrite(led_red, HIGH);        //Sáng đèn LED đỏ
  delay(300);                         //Trong khoảng 0.3 giây
  digitalWrite(led_red, LOW);         //Tắt đèn LED đỏ
  delay(300);                         //Trong khoảng 0.3 giây
}
