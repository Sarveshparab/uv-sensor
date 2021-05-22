const int UV=A0;
void setup() {
Serial.begin(115200);
}

void loop() {
int valeur_UV=analogRead(UV);
Serial.println(valeur_UV);
delay(100);
}
