int temperature = 0,	//Biến để lưu giá trị nhiệt độ
	led = 9;			//Chân cắm đèn LED

void setup()
{
  pinMode(A0,INPUT);
	pinMode(led, OUTPUT);
}

void cam_bien_nhiet_do()
{
	  temperature = analogRead(A0);  
  	int result = map( temperature , 0, 410, -50, 150); //Chuyển đổi sang độ C
  	if(result > 37)
  		digitalWrite(led, HIGH);
  	else
  		digitalWrite(led, LOW);
    delay(1000);
}

void loop()
{
	cam_bien_nhiet_do();
}
