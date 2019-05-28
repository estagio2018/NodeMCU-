//Include the SoftwareSerial library
#include "SoftwareSerial.h"

//Create a new software  serial
SoftwareSerial bluetooth(2, 3); //TX, RX (Bluetooth)

void setup() {
  //Initialize the hardware serial
  Serial.begin(9600);
  Serial.println(F("Type the AT commands:"));

  //Initialize the software serial
  bluetooth.begin(9600);
}

void loop() {
  //Check received a byte from hardware serial
  if (Serial.available()) {
    char ATCommand = Serial.read(); //Read and save the byte
    bluetooth.write(ATCommand);  //Send the byte to bluetooth by software serial
    Serial.print(ATCommand);  //Echo
  }
  //Check received a byte from bluetooth by software serial
  if (bluetooth.available()) {
    while (bluetooth.available()){
      delay(15);
      char Answer = bluetooth.read(); //Read and save the byte
      Serial.print(Answer); //Print the byte to hardware serial
    }
  }
}
