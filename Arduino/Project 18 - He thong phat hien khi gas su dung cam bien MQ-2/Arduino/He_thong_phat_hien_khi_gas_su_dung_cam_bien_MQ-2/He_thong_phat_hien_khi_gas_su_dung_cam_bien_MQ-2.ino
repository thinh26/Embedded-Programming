//Khai báo thư viện Arduino
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

int sensor = 2, led = 13, speaker = 12; //12: Chân sử dụng cảm biến ga, LED chân số 13, loa chân số 12

void setup()
{
    lcd.init(); //Khởi tạo LCD
    lcd.backlight(); //Bật đèn LCD
    pinMode(sensor,INPUT);  //INPUT tại chân số 2
    pinMode(led,OUTPUT);
    pinMode(speaker,OUTPUT);
    lcd.setCursor(0,0); //Đưa con trở tới hàng 0 cột 1
    lcd.print("Cam bien khi ga");
    delay(1000);
    lcd.clear();
}

void He_thong_phat_hien_khi_gas_su_dung_cam_bien_MQ_2()
{
    if(digitalRead(sensor) == HIGH)
    {
        lcd.setCursor(0,0); //Đưa con trỏ tới hàng 0 cột 0
        lcd.print("Canh bao !"); //In cảnh báo
        lcd.setCursor(0,1);
        lcd.print("Ro ri ga !");
        digitalWrite(led,HIGH); //LED sáng
        digitalWrite(speaker,HIGH); //Loa báo động
    }
    else
    {
        //Nếu không có khí ga thì LED tắt và loa tắt
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Trang thai:");
        lcd.setCursor(0,1);
        lcd.print("Binh thuong");
        digitalWrite(led,LOW);
        digitalWrite(speaker,LOW);
    }
    delay(1000);
    lcd.clear();
}

void loop()
{
    He_thong_phat_hien_khi_gas_su_dung_cam_bien_MQ_2();
}
