byte so[] = {0xFC,0x60,0xDA,0xF2,0x66,0xB6,0xBE,0xE0,0xFE,0xF6};
void setup() {
  for(int i = 0; i < 10; i++){
    pinMode(i,OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
    for(int j = 0;j<100;j++){
      for(int i=0;i<100;i++){
        digitalWrite(9,1);
        PORTD = so[j%10];
        digitalWrite(8,0);
        delay(1);
      
        digitalWrite(8,1);
        PORTD = so[j/10];
        digitalWrite(9,0);
        delay(1);
      }
    }
	// digitalWrite(9,1);
	// PORTD = 0xBE;
	// digitalWrite(8,0);
	// delay(1);
	
	// digitalWrite(8,1);
        // PORTD = 0xDA;
        // digitalWrite(9,0);
        // delay(1);
    
  
}
