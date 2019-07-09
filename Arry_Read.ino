int Left_p=13;




void setup()

{

  pinMode(Left_p,OUTPUT);

 


pinMode(A0, INPUT);




}

  



void loop()



{

 


  if(Left_p>10 )

  {

     digitalWrite(Left_p,HIGH);

   
  }
  else{
    
    digitalWrite(Left_p,LOW);
    }
   
     

  }

 
