#define ledVermelho 2
#define ledAzul 3
#define ledAmarelo 4
#define ledVerde  5

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledVermelho, OUTPUT); //Output == 1
}

void loop() {
  // put your main code here, to run repeatedly:
  placaLed(ledVermelho);
}

void pisca_tudo(int l2, l3, l4, l5){
  Serial.println(portaLed);
  
  digitalWrite(l2,1);
  digitalWrite(l3,1);
  digitalWrite(l4,1);
  digitalWrite(l5,1);
  
  delay(500);
  
  digitalWrite(l2,0);
  digitalWrite(l3,0);
  digitalWrite(l4,0);
  digitalWrite(l5,0);
}
