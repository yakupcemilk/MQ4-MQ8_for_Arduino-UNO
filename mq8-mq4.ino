#include <Wire.h> //a lib for wire connections and data transfers with wires

int sensorPinMQ4 = A0;   //select the first input pin for the first analogue input
int sensorPinMQ8 = A5;   //select the second input pin for the second analogue input
int sensorValueMQ4 = 0;  //variable to store the value coming from the sensor
int sensorValueMQ8 = 0;  //variable to store the value coming from the sensor

/*If you don't do this, the order of operations of the microprocessor may be confused 
and may give incorrect data or no data. For this reason, we first equate to zero for 
the values of data coming from sensors.*/

void setup(){
  Serial.begin(9600); //for reading the values of sensors data
}

void loop(){
  sensorPinMQ4 = analogRead(sensorPinMQ4);
  sensorPinMQ8 = analogRead(sensorPinMQ8);
  Serial.println("MQ4:");
  Serial.println(sensorValueMQ4);
  Serial.println("MQ8:");
  Serial.println(sensorValueMQ8);
  delay(sensorPinMQ4); //delays value = sensors values (we need )
  delay(sensorPinMQ8);
}