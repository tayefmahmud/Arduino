 int Gnd=A0; //xyro (-)
 int Vcc=A4; //xyro (+)
  
  int xPin=A3; // X data
  int yPin=A2;// Y data


#include "SD.h"
#define SD_ChipSelectPin 4
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;


void setup() 
{ 
  Serial.begin(9600);
  
  pinMode(Gnd,OUTPUT);
  pinMode(Vcc,OUTPUT);
            
            digitalWrite(Gnd,LOW);
            digitalWrite(Vcc,HIGH);

tmrpcm.speakerPin = 9;
Serial.begin(9600);
if (!SD.begin(SD_ChipSelectPin)) {
Serial.println("SD fail");

return;
}
else{ 
  Serial.println("SD Card Ready For Use!");
  
} 
}
void loop() 
{ 
  int Xval;
  int Yval;
  Xval = analogRead(xPin); // Reading X data
  Yval = analogRead(yPin); // Reading Y data
  
      if(Xval>390){
       Serial.println("VOICE_1"); // Voice 1
      
      tmrpcm.setVolume(5);
      tmrpcm.play("1.wav");
      
   }
  

   if(Xval<310){
       Serial.println("VOICE_2"); // Voice 2
   
      tmrpcm.setVolume(5);
      tmrpcm.play("2.wav");
   
   }
 


      if(Yval>390){
       Serial.println("VOICE_3"); // Voice 3
   
      tmrpcm.setVolume(5);
      tmrpcm.play("3.wav");
   
   }
 

   if(Yval<310){
       Serial.println("VOICE_4"); // Voice 4
   
      tmrpcm.setVolume(5);
      tmrpcm.play("4.wav");
   
   }
   delay(20);
} 




// Thsi code is writen by Tayef Mahmud
//tayefmahmud63@gmail.com
//innovative science
//Hand Talk
