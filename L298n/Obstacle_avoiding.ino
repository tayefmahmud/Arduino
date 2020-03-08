
const int RMF = 4;
const int RMB = 5;
const int LMF = 6;
const int LMB = 7;



void setup() 
{

  pinMode (RMF, OUTPUT);
  pinMode (RMB, OUTPUT);
  pinMode (LMF, OUTPUT);
  pinMode (LMB, OUTPUT);
}

void loop()
{     
 
      digitalWrite(RMF, HIGH);               
      digitalWrite(RMB, LOW); 
      digitalWrite(LMF, HIGH); 
      digitalWrite(LMB, LOW);
      
      
  
}
