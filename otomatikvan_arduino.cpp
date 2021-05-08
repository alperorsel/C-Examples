void setup()
{

pinMode(13, OUTPUT);
Serial.begin(9600);
}

void loop() {

  while(Serial.read() == 's')
  { 
    digitalWrite(13,HIGH);
    delay(2000);
    Serial.println("Motor Calisiyor");
    digitalWrite(13, LOW);
}
   while(Serial.read() == 'y')
  { 
    digitalWrite(13,LOW); 
    Serial.println("Motor kapalI");
}  
}
