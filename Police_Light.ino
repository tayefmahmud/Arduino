int LED1=3;
int LED2=4;
int LED3=5;
int LED4=6;
int LED5=7;
int LED6=8;
int LED7=9;
int LED8=10;
int LED9=11;
int LED10=12;


void setup()
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);  // set each LED to pins
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
  pinMode(LED8,OUTPUT);
  pinMode(LED9,OUTPUT);
  pinMode(LED10,OUTPUT);
    
}


void loop()
    { 
      
   for(int i = 0; i<=4; i++){ 
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(50);
   
   //*********************3 times***************************************
   
   digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   }
    
    
   for(int i = 0; i<=4; i++){ 
   digitalWrite(LED5,HIGH);
   digitalWrite(LED6,HIGH);
   
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);  
   delay(50); 
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);  
   delay(50);                            
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);  
   delay(50);       
   
   //*********************3 times***************************************
   
   digitalWrite(LED1,HIGH); 
   digitalWrite(LED2,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED1,HIGH); 
   digitalWrite(LED2,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED1,HIGH); 
   digitalWrite(LED2,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   }
    
    
   for(int i = 0; i<=4; i++){ 
   digitalWrite(LED5,HIGH);     // Turn the LED on   
   digitalWrite(LED6,HIGH);      // Turn LED off
   delay(150);                  // Wait 25 ms
 
   digitalWrite(LED4,HIGH);    // Turno LED1 on
   digitalWrite(LED7,HIGH);     // Turn LED1 off
   delay(150);                  // Wait 25 ms
 
   digitalWrite(LED3,HIGH);     // Turn the LED on   
   digitalWrite(LED8,HIGH);      // Turn LED off
   delay(150);                  // Wait 25 ms
 
   digitalWrite(LED2,HIGH);    // Turno LED1 on
   digitalWrite(LED9,HIGH);     // Turn LED1 off
   delay(150);                  // Wait 25 ms
  
   digitalWrite(LED1,HIGH);     // Turn the LED on   
   digitalWrite(LED10,HIGH);      // Turn LED off
   delay(150);                  // Wait 25 ms
  
   digitalWrite(LED1,LOW);     // Turn the LED on   
   digitalWrite(LED2,LOW);      // Turn LED off                  
   digitalWrite(LED3,LOW);    // Turno LED1 on
   digitalWrite(LED4,LOW);     // Turn LED1 off
   digitalWrite(LED5,LOW);     // Turn the LED on   
   digitalWrite(LED6,LOW);      // Turn LED off
   digitalWrite(LED7,LOW);    // Turno LED1 on
   digitalWrite(LED8,LOW);     // Turn LED1 off
   digitalWrite(LED9,LOW);     // Turn the LED on   
   digitalWrite(LED10,LOW);      // Turn LED off
   delay(150);
   }
    
    
   for(int i = 0; i<=4; i++){  
    
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50); 
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50);                            
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50);       
   
   //*********************3 times***************************************
   
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH); 
   delay(75);
   digitalWrite(LED5,LOW);  
   digitalWrite(LED6,LOW);  
   delay(75);
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH); 
   delay(75);
   digitalWrite(LED5,LOW);  
   digitalWrite(LED6,LOW);  
   delay(75);
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH); 
   delay(75);
   digitalWrite(LED5,LOW);  
   digitalWrite(LED6,LOW);  
   delay(75);
   
   }
    
    
   for(int i = 0; i<=4; i++){ 
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);  
   delay(50); 
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);  
   delay(75);     
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);  
   delay(50);       
   
   //*********************3 times***************************************
   
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   
    //*********************3 times***************************************    
 
    }
    
    //****************************************************6. PROGRAM**************************************************************************
    
   for(int i = 0; i<=4; i++){
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50); 
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50);                            
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50);       
   
   //*********************3 times***************************************
   
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH); 
   delay(50);
   digitalWrite(LED5,LOW);  
   digitalWrite(LED6,LOW);  
   delay(50);
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH); 
   delay(50);
   digitalWrite(LED5,LOW);  
   digitalWrite(LED6,LOW);  
   delay(50);
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH); 
   delay(50);
   digitalWrite(LED5,LOW);  
   digitalWrite(LED6,LOW);  
   delay(50);

   
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50); 
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50);                            
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50);       
   
   }

   
   for(int i = 0; i<=4; i++){
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);

   
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   delay(50);
   //********3 times*******
   
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   
   
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
      
   } 

 
   for(int i = 0; i<=4; i++){
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED5,HIGH);
   delay(50); 
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   delay(50);
   
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   }
     
     
   for(int i = 0; i<=4; i++){
     
       
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   
   
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED5,HIGH);
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED5,HIGH);
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED5,HIGH);
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);
   delay(50);
   }   
 
   for(int i = 0; i<=4; i++){
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED3,HIGH);
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED9,HIGH);
   delay(75);  
   digitalWrite(LED1,LOW);  
   digitalWrite(LED3,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED9,LOW); 
   delay(75);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED3,HIGH);
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED9,HIGH);
   delay(75);  
   digitalWrite(LED1,LOW);  
   digitalWrite(LED3,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED9,LOW); 
   delay(75);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED3,HIGH);
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED9,HIGH);
   delay(75);  
   digitalWrite(LED1,LOW);  
   digitalWrite(LED3,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED9,LOW); 
   delay(75);
  
   //*********************3 times***************************************
   
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED2,LOW);  
   digitalWrite(LED4,LOW); 
   digitalWrite(LED8,LOW);  
   digitalWrite(LED10,LOW);
   delay(75);
     
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED2,LOW);  
   digitalWrite(LED4,LOW); 
   digitalWrite(LED8,LOW);  
   digitalWrite(LED10,LOW);
   delay(75);
    
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED2,LOW);  
   digitalWrite(LED4,LOW); 
   digitalWrite(LED8,LOW);  
   digitalWrite(LED10,LOW);
   delay(75);
   }

   
   for(int i = 0; i<=4; i++){
   digitalWrite(LED1,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   delay(50);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   delay(50);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   delay(50);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED10,LOW);
   delay(50);
    
    
   digitalWrite(LED9,HIGH); 
   delay(75);
   digitalWrite(LED8,HIGH);
   delay(75);
   digitalWrite(LED7,HIGH);
   delay(75);  
   digitalWrite(LED6,HIGH); 
   delay(75);
   digitalWrite(LED5,HIGH); 
   delay(75); 
   digitalWrite(LED4,HIGH);
   delay(75);
   digitalWrite(LED3,HIGH);  
   delay(75);
   digitalWrite(LED2,HIGH); 
   delay(75); 
   
   digitalWrite(LED2,LOW);
   delay(75);
   digitalWrite(LED3,LOW);  
   delay(75);
   digitalWrite(LED4,LOW); 
   delay(75);
   digitalWrite(LED5,LOW);  
   delay(75);
   digitalWrite(LED6,LOW);
   delay(75);
   digitalWrite(LED7,LOW);
   delay(75);  
   digitalWrite(LED8,LOW);
   delay(75);
   digitalWrite(LED9,LOW);
   delay(75);  
   
   digitalWrite(LED1,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   delay(50);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   delay(50);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   delay(50);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED10,LOW);
   delay(50);
   }

   
   for(int i = 0; i<=4; i++){
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED10,LOW);
   
   digitalWrite(LED9,HIGH); 
   delay(75);
   digitalWrite(LED9,LOW);
  
   digitalWrite(LED8,HIGH);
   delay(75);
   digitalWrite(LED8,LOW);
   
   digitalWrite(LED7,HIGH);
   delay(75);  
   digitalWrite(LED7,LOW);
   
   digitalWrite(LED6,HIGH); 
   delay(75);
   digitalWrite(LED6,LOW);
   
   digitalWrite(LED5,HIGH); 
   delay(75); 
   digitalWrite(LED5,LOW);  
   
   digitalWrite(LED4,HIGH);
   delay(75);
   digitalWrite(LED4,LOW); 
   
   digitalWrite(LED3,HIGH);  
   delay(75);
   digitalWrite(LED3,LOW);  
   
   digitalWrite(LED2,HIGH); 
   delay(75);
   digitalWrite(LED2,LOW);
  
   digitalWrite(LED1,HIGH); 
   delay(75);
   digitalWrite(LED1,LOW); 
   }

   
   for(int i = 0; i<=4; i++){
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED10,LOW);
   
   digitalWrite(LED9,HIGH); 
   delay(50);
   digitalWrite(LED9,LOW);
  
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED8,LOW);
   
   digitalWrite(LED7,HIGH);
   delay(50);  
   digitalWrite(LED7,LOW);
   
   digitalWrite(LED6,HIGH); 
   delay(50);
   digitalWrite(LED6,LOW);
   
   digitalWrite(LED5,HIGH); 
   delay(50); 
   digitalWrite(LED5,LOW);  
   
   digitalWrite(LED4,HIGH);
   delay(50);
   digitalWrite(LED4,LOW); 
   
   digitalWrite(LED3,HIGH);  
   delay(50);
   digitalWrite(LED3,LOW);  
   
   digitalWrite(LED2,HIGH); 
   delay(50);
   digitalWrite(LED2,LOW);
  
   digitalWrite(LED1,HIGH); 
   delay(50);
   digitalWrite(LED1,LOW); 
   }

   
   for(int i = 0; i<=4; i++){
   digitalWrite(LED10,HIGH);
   delay(25);
   digitalWrite(LED10,LOW);
   
   digitalWrite(LED9,HIGH); 
   delay(25);
   digitalWrite(LED9,LOW);
  
   digitalWrite(LED8,HIGH);
   delay(25);
   digitalWrite(LED8,LOW);
   
   digitalWrite(LED7,HIGH);
   delay(25);  
   digitalWrite(LED7,LOW);
   
   digitalWrite(LED6,HIGH); 
   delay(25);
   digitalWrite(LED6,LOW);
   
   digitalWrite(LED5,HIGH); 
   delay(25); 
   digitalWrite(LED5,LOW);  
   
   digitalWrite(LED4,HIGH);
   delay(25);
   digitalWrite(LED4,LOW); 
   
   digitalWrite(LED3,HIGH);  
   delay(25);
   digitalWrite(LED3,LOW);  
   
   digitalWrite(LED2,HIGH); 
   delay(25);
   digitalWrite(LED2,LOW);
  
   digitalWrite(LED1,HIGH); 
   delay(25);
   digitalWrite(LED1,LOW); 
   }

   
   for(int i = 0; i<=4; i++){
   digitalWrite(LED1,HIGH);
   digitalWrite(LED10,HIGH); 
   delay(75);
   digitalWrite(LED1,LOW);
   digitalWrite(LED10,LOW);
   delay(75);
   digitalWrite(LED1,HIGH);
   digitalWrite(LED10,HIGH); 
   delay(75);
   digitalWrite(LED1,LOW);
   digitalWrite(LED10,LOW);
   delay(75);
   
   
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED5,HIGH); 
   delay(75);
   digitalWrite(LED6,LOW);
   digitalWrite(LED5,LOW);  
   delay(75);
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED5,HIGH); 
   delay(75);
   digitalWrite(LED6,LOW);
   digitalWrite(LED5,LOW);  
   delay(75);
   }

   
   for(int i = 0; i<=4; i++){
   digitalWrite(LED1,HIGH);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   digitalWrite(LED6,HIGH);
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
  
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED3,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED5,LOW);
   digitalWrite(LED6,LOW);
   digitalWrite(LED7,LOW);
   digitalWrite(LED8,LOW);
   digitalWrite(LED9,LOW);
   digitalWrite(LED10,LOW);
   delay(50);
  
   digitalWrite(LED1,HIGH);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   digitalWrite(LED6,HIGH);
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
  
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED3,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED5,LOW);
   digitalWrite(LED6,LOW);
   digitalWrite(LED7,LOW);
   digitalWrite(LED8,LOW);
   digitalWrite(LED9,LOW);
   digitalWrite(LED10,LOW);
   delay(50);
  
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED3,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED5,LOW);
   digitalWrite(LED6,LOW);
   digitalWrite(LED7,LOW);
   digitalWrite(LED8,LOW);
   digitalWrite(LED9,LOW);
   digitalWrite(LED10,LOW);
   delay(300);
   }

  
  for(int i = 0; i<=4; i++){
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED6,HIGH);
  digitalWrite(LED7,HIGH);
  digitalWrite(LED8,HIGH);
  digitalWrite(LED9,HIGH);
  digitalWrite(LED10,HIGH);
  delay(50);
  
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);
  digitalWrite(LED8,LOW);
  digitalWrite(LED9,LOW);
  digitalWrite(LED10,LOW);
  delay(50);
  
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED6,HIGH);
  digitalWrite(LED7,HIGH);
  digitalWrite(LED8,HIGH);
  digitalWrite(LED9,HIGH);
  digitalWrite(LED10,HIGH);
  delay(50);
  
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);
  digitalWrite(LED8,LOW);
  digitalWrite(LED9,LOW);
  digitalWrite(LED10,LOW);
  delay(50);
  
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);
  digitalWrite(LED8,LOW);
  digitalWrite(LED9,LOW);
  digitalWrite(LED10,LOW);
  delay(200);
  }
  
   for(int i = 0; i<=4; i++){
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(50);
   
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(200);
   
   
   //*********************3 times***************************************
   
   digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(200);
   }

   
   for(int i = 0; i<=4; i++){
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(50);
   
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(100);
   
   
   //*********************3 times***************************************
   
   digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(100);
   }

   
   for(int i = 0; i<=4; i++){
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH);
   digitalWrite(LED8,HIGH);
   digitalWrite(LED9,HIGH);
   delay(75);
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED6,LOW);
   digitalWrite(LED8,LOW);
   digitalWrite(LED9,LOW);
   delay(75);
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH);
   digitalWrite(LED8,HIGH);
   digitalWrite(LED9,HIGH);
   delay(75);
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED6,LOW);
   digitalWrite(LED8,LOW);
   digitalWrite(LED9,LOW);
   delay(75);
   
   //*********************3 times***************************************
   
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED10,LOW);
   delay(75);
    
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED10,LOW);
   delay(75);
  }

  
   for(int i = 0; i<=4; i++){
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED9,LOW);
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED9,LOW);
   digitalWrite(LED10,LOW);
   delay(50);
   
   //*********************3 times***************************************
   
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW);
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW);
   digitalWrite(LED8,LOW);
   delay(50);
   }

   
   for(int i = 0; i<=4; i++){
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED9,LOW);
   digitalWrite(LED10,LOW);
   delay(75);
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED9,LOW);
   digitalWrite(LED10,LOW);
   delay(75);
   
   //*********************3 times***************************************
   
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(75);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW);
   digitalWrite(LED8,LOW);
   delay(75);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(75);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW);
   digitalWrite(LED8,LOW);
   delay(75);

   }

   
   for(int i = 0; i<=4; i++){
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   delay(50);
  //*********************1 times***************************************
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
     
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   }

   
   for(int i = 0; i<=4; i++){
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);  
   delay(50); 
  
   //*********************3 times***************************************
   
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   }

   
   for(int i = 0; i<=4; i++){
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED3,HIGH);
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED9,HIGH);
   delay(50);  
   digitalWrite(LED1,LOW);  
   digitalWrite(LED3,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED9,LOW); 
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED3,HIGH);
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED9,HIGH);
   delay(50);  
   digitalWrite(LED1,LOW);  
   digitalWrite(LED3,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED9,LOW); 
   delay(50);
  
  
   //*********************3 times***************************************
   
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED2,LOW);  
   digitalWrite(LED4,LOW); 
   digitalWrite(LED8,LOW);  
   digitalWrite(LED10,LOW);
   delay(50);
     
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED2,LOW);  
   digitalWrite(LED4,LOW); 
   digitalWrite(LED8,LOW);  
   digitalWrite(LED10,LOW);
   delay(50);
   }
   
   for(int i = 0; i<=4; i++){
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   delay(50);
  //*********************1 times***************************************
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
     
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   delay(50);
  //*********************1 times***************************************
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
     
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   delay(50);
  //*********************1 times***************************************
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
     
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   delay(50);
  //*********************1 times***************************************
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
     
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   
   
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   
      
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
    
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
     
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
    
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
    
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   }
}
