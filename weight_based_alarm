#include "HX711.h"


#define calibration_factor 18029.57 //This value is obtained using the SparkFun_HX711_Calibration sketch
#define Buz 10
#define R_Led 9
#define DOUT  3
#define CLK  2


#define Bstart 6
#define Bstop 7

float weight;
HX711 scale;


void setup() {
pinMode(Buz, OUTPUT);
pinMode(R_Led, OUTPUT);
digitalWrite(Buz,LOW); 
digitalWrite(R_Led,LOW); 




  scale.begin(DOUT, CLK);
  scale.set_scale(calibration_factor); //This value is obtained by using the SparkFun_HX711_Calibration sketch
  scale.tare(); //Assuming there is no weight on the scale at start up, reset the scale to 0

}

void loop() {
weight=scale.get_units()/2;

if(weight != 0)
{
  digitalWrite(R_Led,HIGH);
  analogWrite(Buz,20);
  delay(2000);
  digitalWrite(R_Led,LOW);
  analogWrite(Buz,0);
  delay(2000);
}

}
