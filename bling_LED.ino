void setup() {
  // put your setup code here, to run once:
   pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
     int i;
     
     
      
     while(i<17){
     
   digitalWrite(13, HIGH); 
   delay(1000); 
   digitalWrite(13, LOW); 
   delay(1000);
   i++;
     }
     delay(11000);
   
}
