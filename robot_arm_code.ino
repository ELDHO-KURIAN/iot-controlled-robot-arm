
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

//int pos = 0;    // variable to store the servo position

const int stepPin = D2; // define pin for step
const int dirPin = D1;  // define pin for direction

const int stepPin1 = D3; // define pin for step
const int dirPin1 = D4;  // define pin for direction

const int stepPin2 = D6; // define pin for step
const int dirPin2 = D5;  // define pin for direction

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "6a4d9b61e1184556bbc5ee5650479dbb";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "TP-LINK_AECE6E";
char pass[] = "bsnl3916";

void setup()
{
  // Debug console
  Serial.begin(9600);
pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);

  pinMode(stepPin1,OUTPUT); 
  pinMode(dirPin1,OUTPUT);

  pinMode(stepPin2,OUTPUT); 
  pinMode(dirPin2,OUTPUT);
  myservo.attach(D8);
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()
{
  Blynk.run();
}
BLYNK_WRITE(V0)
  {
    int value;
    value = param.asInt();
    if(value==1){
      Serial.println("ok");
       digitalWrite(dirPin, HIGH); // set direction, HIGH for clockwise, LOW for anticlockwise
 
 for(int x = 0; x<250; x++) { // loop for 200 steps
  digitalWrite(stepPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPin,LOW); 
  delayMicroseconds(1000);
  
 }
    }
    if(value==0){
      Serial.println("ok");
       digitalWrite(dirPin, LOW); // set direction, HIGH for clockwise, LOW for anticlockwise
 
 for(int x = 0; x<250; x++) { // loop for 200 steps
  digitalWrite(stepPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPin,LOW); 
  delayMicroseconds(1000);
  
 }
    }
  }


  BLYNK_WRITE(V1)
  {
    int value1;
    value1 = param.asInt();
    if(value1==1){
      Serial.println("ok");
       digitalWrite(dirPin1, HIGH); // set direction, HIGH for clockwise, LOW for anticlockwise
 
 for(int x = 0; x<250; x++) { // loop for 200 steps
  digitalWrite(stepPin1,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPin1,LOW); 
  delayMicroseconds(1000);
  
 }
    }
    if(value1==0){
      Serial.println("ok");
       digitalWrite(dirPin1, LOW); // set direction, HIGH for clockwise, LOW for anticlockwise
 
 for(int x = 0; x<250; x++) { // loop for 200 steps
  digitalWrite(stepPin1,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPin1,LOW); 
  delayMicroseconds(1000);
  
 }
    }
  }



  BLYNK_WRITE(V2)
  {
    int value2;
    value2 = param.asInt();
    if(value2==1){
      Serial.println("ok");
       digitalWrite(dirPin2, HIGH); // set direction, HIGH for clockwise, LOW for anticlockwise
 
 for(int x = 0; x<50; x++) { // loop for 200 steps
  digitalWrite(stepPin2,HIGH);
  delayMicroseconds(2000);
  digitalWrite(stepPin2,LOW); 
  delayMicroseconds(2000);
  
 }
    }
    if(value2==0){
      Serial.println("ok");
       digitalWrite(dirPin2, LOW); // set direction, HIGH for clockwise, LOW for anticlockwise
 
 for(int x = 0; x<50; x++) { // loop for 200 steps
  digitalWrite(stepPin2,HIGH);
  delayMicroseconds(2000);
  digitalWrite(stepPin2,LOW); 
  delayMicroseconds(2000);
  
 }
    }
  }


 BLYNK_WRITE(V3)
  {
    int value3;
    value3 = param.asInt();
    myservo.write(value3);              // tell servo to go to position in variable 'pos'
    delay(15); 
  }  




    


  
