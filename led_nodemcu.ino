#define LED 6
#define Switch 7
void setup() {
pinMode(LED,OUTPUT);
pinMode(Switch,INPUT);
}
void loop() {  
int val;
val = digitalRead(Switch);
digitalWrite(LED,val);
}
