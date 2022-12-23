#define led_vermelho 4
#define botao_vermelho 10

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led_vermelho, OUTPUT);
  pinMode(botao_vermelho, INPUT_PULLUP); //RESISTOR INTERNO DE 10K

  digitalWrite(led_vermelho, 1);
  delay(1000);
  digitalWrite(led_vermelho, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  int estado_botao = digitalRead(botao_vermelho);
  Serial.println(estado_botao);
  delay(500);
}
