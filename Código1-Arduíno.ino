int ledVermelho = 2;

void setup(){
	pinMode(ledVermelho, OUTPUT);
}

void loop(){
digitalWrite(ledVermelho,1);
delay(1000);
digitalWrite(ledVermelho,0);
delay(500);
}