int ldr = 9; //Chân của quang trở là 9
int led = 8; //Chân của đèn LED là 8

void setup()
{
  pinMode(ldr, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void Lam_viec_voi_quang_tro()
{
  if(digitalRead(ldr) == HIGH) 
  {
    digitalWrite(led, LOW); 
  }
  else 
  {
    digitalWrite(led, HIGH); 
  }
}

void loop()
{
    Lam_viec_voi_quang_tro();
}