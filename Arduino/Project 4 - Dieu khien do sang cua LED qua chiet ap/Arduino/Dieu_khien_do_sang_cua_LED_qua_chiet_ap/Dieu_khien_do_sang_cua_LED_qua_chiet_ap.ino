int result = 0,
    led = 5,
    brightness = 0;

void setup()
{
    pinMode(A0,INPUT);
    pinMode(led,OUTPUT);
}

void Dieu_khien_do_sang_cua_LED_qua_chiet_ap()
{
    result = analogRead(A0); //Đọc giá trị từ chiết áp, cất vào biến result
    brightness = map(result,0,1023,0,255); //Quy đổi sang độ sáng
    analogWrite(led,brightness);
}

void loop()
{
    Dieu_khien_do_sang_cua_LED_qua_chiet_ap();
}