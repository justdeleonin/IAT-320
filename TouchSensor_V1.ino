#include <CapacitiveSensor.h>
#define piezoPin 3
CapacitiveSensor Sensor1 = CapacitiveSensor(4,6);
CapacitiveSensor Sensor2 = CapacitiveSensor(4,9);
CapacitiveSensor Sensor3 = CapacitiveSensor(4,12);

long val_1;
long val_2;
long val_3;
//int piezoPin = 3;
void setup() {
  

}

void loop() {
  // put your main code here, to run repeatedly:
  val_1= Sensor1.capacitiveSensor(30);
  val_2= Sensor2.capacitiveSensor(30);
  Serial.println(val_1);
  Serial.println(val_2);

  if(val_1 >=4000){
    tone(piezoPin, 200, 500);
  }
  
  if(val_2 >=4000){
    tone(piezoPin,100,500);
  }
  
  if(val_3 >=4000){
    tone(piezoPin,500,500);

  } 
}
