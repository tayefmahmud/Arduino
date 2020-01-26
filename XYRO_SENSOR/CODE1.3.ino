 int Gnd=A0; //xyro (-)
 int Vcc=A4; //xyro (+)
  
  int xPin=A3; // X data
  int yPin=A2;// Y data


void setup() 
{ 
  Serial.begin(9600);
  
  pinMode(Gnd,OUTPUT);
  pinMode(Vcc,OUTPUT);
            
            digitalWrite(Gnd,LOW);
            digitalWrite(Vcc,HIGH);
} 

void loop() 
{ 
  int Xval;
  int Yval;
  Xval = analogRead(xPin); // Reading X data
  Yval = analogRead(yPin); // Reading Y data
  
      if(Xval>390){
       Serial.println("BACKWARD"); // Voice 1
   }
  else{
       Serial.println("MID");
  }

   if(Xval<310){
       Serial.println("FORWARD"); // Voice 2
   }
  else{
       Serial.println("MID");
  }


      if(Yval>390){
       Serial.println("LEFT"); // Voice 3
   }
  else{
       Serial.println("MID");
  }

   if(Yval<310){
       Serial.println("RIGHT"); // Voice 4
   }
  else{
       Serial.println("MID");
  }















  
   delay(20);
} 
