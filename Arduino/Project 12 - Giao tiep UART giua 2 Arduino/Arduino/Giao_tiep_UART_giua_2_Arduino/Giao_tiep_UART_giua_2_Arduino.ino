int button = 8, led = 4;
void setup()
{
	pinMode(button, INPUT_PULLUP);
	pinMode(led, OUTPUT);
	digitalWrite(led, LOW);

	Serial.begin(9600);
}

void Giao_tiep_UART_giua_2_Arduino()
{
	if(Serial.available())
	{
		char data_rcvd = Serial.read();

		if(data_rcvd == '1')
			digitalWrite(led, HIGH);
		if(data_rcvd == '0')
			digitalWrite(led, LOW);
	}
	if(digitalRead(8) == LOW)
		Serial.write('0');
	else
		Serial.write('1');
}

void loop()
{
	Giao_tiep_UART_giua_2_Arduino();
}
