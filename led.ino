#define LED 9
#define Switch 12
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12,INPUT);
}

void loop() {
  int a;
  a=digitalRead(Switch);
  digitalWrite(13, a);
}
