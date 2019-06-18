const int led3 = 11;   
const int flexPin =A2; 
int value; 
int xPin=A1;
int yPin=A0;
int led1=13;
int led2=12;


void setup(){
  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
 
}


void loop() 
{
  int xval=analogRead(xPin);
  int yval=analogRead(yPin);


    if ((xval>360 && xval<390) && (yval>294 && yval<340)) //forward
   {
     digitalWrite(led1,HIGH);  
      }

      else {
    
    digitalWrite(led1, LOW);
  }
   
 
    
    if ((xval>294 && xval<340) && (yval>360 && yval<390)) //left
    {
;   
      digitalWrite(led2,HIGH);   
      
    }
    
    
     else {
    
    digitalWrite(led2, LOW);
  }

    value = analogRead(flexPin);

 if (value<30) //forward
   {
     digitalWrite(led3,HIGH);  
      }

      else {
    
    digitalWrite(led3, LOW);
  }


  }
