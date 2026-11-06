int relay1 = 7;
int relay2 =8;
void setup() {
 pinMode(relay1,OUTPUT);
 pinMode(relay2,OUTPUT);
}

void loop() {
  digitalWrite(relay1,LOW);
  digitalWrite(relay2,HIGH);
  delay(1000);
  digitalWrite(relay2,LOW);
  digitalWrite(relay1,HIGH);
  delay(1000);
}
