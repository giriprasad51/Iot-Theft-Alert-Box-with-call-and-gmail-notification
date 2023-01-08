#include "thingProperties.h"
#include <iostream>
#include <string>
#include <fstream>
//#include <windows>
using namespace std;



int const trigPin = D5;
int const echoPin = D6;
int const buzzPin = D4;


string link;
void setup() {
  
  pinMode(trigPin, OUTPUT); // trig pin will have pulses output
  pinMode(echoPin, INPUT); // echo pin should be input to get pulse width
  pinMode(buzzPin, OUTPUT);

  
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500);

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
  */
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  // Your code here
  int duration, distance;
 // Output pulse with 1ms width on trigPin
 digitalWrite(trigPin, HIGH);
 delay(1);
 digitalWrite(trigPin, LOW);
 // Measure the pulse input in echo pin
 duration = pulseIn(echoPin, HIGH);
 // Distance is half the duration devided by 29.1 (from datasheet)
 distance = (duration/2) / 29.1;
 // if distance less than 0.3 meter and more than 0 (0 or less means over range)
 if (distance <= 30 && distance >= 10) {
 // Buzz
 digitalWrite(buzzPin, HIGH);
 t=1;
 
 
 } else {
 // Don't buzz
 digitalWrite(buzzPin, LOW);
 t=0;
 
 
 
 }
 // Waiting 60 ms won't hurt any one
 
 delay(6);



}


/*
  Since Led is READ_WRITE variable, onLedChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onLedChange()  {
  // Add your code here to act upon Led change
  
  Serial.println(led);
  /*
  if (led) {
    digitalWrite(ledl, HIGH);
    Serial.println("ON");
    link="https://maker.ifttt.com/trigger/true/with/key/hleiEMS-SlcwEJ24woQ-4ZQZiN2TKDfufRrIKSF9Iwj";
    system(link.c_str());
    
    string url="https://maker.ifttt.com/trigger/true/with/key/hleiEMS-SlcwEJ24woQ-4ZQZiN2TKDfufRrIKSF9Iwj";
    fstream fs;
    fs.open(url);
    fs.close();
    
    //ShellExecute(NULL, "open", "http://www.yahoo.com/",NULL, NULL, SW_SHOWNORMAL);
    
  }
  else {
    digitalWrite(ledl, LOW);
    Serial.println("OFF");
    
  }
  */
}







/*
  Since L is READ_WRITE variable, onLChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onLChange()  {
  // Add your code here to act upon L change
}
/*
  Since T is READ_WRITE variable, onTChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onTChange()  {
  // Add your code here to act upon T change
}