int button_pressed = 0,     //Biến để lưu giá trị khi ấn nút bấm
    button = 2,             //Chân nút bấm là 2
    led = 13;               //Chân đèn LED là 13

void setup()
{
    pinMode(led,OUTPUT);
    pinMode(button,OUTPUT);
}

void Nut_bam_de_bat_den_LED()
{
    button_pressed = digitalRead(2); //Đọc giá trị lúc ấn nút bấm
    if(button_pressed == HIGH) //Nếu ấn nút bấm
        digitalWrite(led, HIGH); //Đèn sáng
    else                        // Nếu không ấn nút bấm
        digitalWrite(led, LOW); //Đèn tắt
    delay(1000);
}

void loop()
{
  Nut_bam_de_bat_den_LED();
}
