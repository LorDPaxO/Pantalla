#include <SoftwareSerial.h>
#include <Nextion.h>

SoftwareSerial nextion(2, 3);// Nextion TX to pin 2 and RX to pin 3 of Arduino 
Nextion myNextion(nextion, 9600); //create a Nextion object named myNextion using the nextion serial port @ 9600bps


void setup() {
  Serial.begin(9600);
  myNextion.init(); // send the initialization commands for Page 0
  delay(1500);
  myNextion.sendCommand("page 1");

}

void loop() {


}
