const int UV=A0;
void setup() {
Serial.begin(115200);
}

void loop() {
int valeur_UV=analogRead(UV);
Serial.print("analog val= ");
Serial.println(valeur_UV);
if(0<valeur_UV and valeur_UV<10)
{ 
  Serial.print("UV index= ");
  Serial.println(0);
}
else if(10<valeur_UV and valeur_UV<46)
{
  Serial.print("UV index= ");
  Serial.println(1);
}
else if(46<valeur_UV and valeur_UV<65)
{
  Serial.print("UV index= ");
  Serial.println(2);
}
else if(65<valeur_UV and valeur_UV<83)
{
  Serial.print("UV index= ");
  Serial.println(3);
}
else if(83<valeur_UV and valeur_UV<103)
{
  Serial.print("UV index= ");
  Serial.println(4);
}
else if(103<valeur_UV and valeur_UV<124)
{
  Serial.print("UV index= ");
  Serial.println(5);
}
else if(124<valeur_UV and valeur_UV<142)
{
  Serial.print("UV index= ");
  Serial.println(6);
}
else if(142<valeur_UV and valeur_UV<162)
{
  Serial.print("UV index= ");
  Serial.println(7);
}
else if(162<valeur_UV and valeur_UV<180)
{
  Serial.print("UV index= ");
  Serial.println(8);
}
else if(180<valeur_UV and valeur_UV<200)
{
  Serial.print("UV index= ");
  Serial.println(9);
}
else if(200<valeur_UV and valeur_UV<221)
{
  Serial.print("UV index= ");
  Serial.println(10);
}
else if(221<valeur_UV and valeur_UV<240)
{
  Serial.print("UV index= ");
  Serial.println("11+");
}
else if(valeur_UV>240)
{
  Serial.print("UV index= ");
  Serial.println("11+");
}
delay(2000);
}
