void setup() {
 Serial.begin(9600);
 pinMode(6, INPUT_PULLUP);
 pinMode(7, INPUT_PULLUP);
 pinMode(8, INPUT_PULLUP);
 pinMode(9, INPUT_PULLUP);
 pinMode(10,INPUT_PULLUP);
 pinMode(11,INPUT_PULLUP);
 pinMode(12,LOW);
 pinMode(13,LOW);
}

void loop() {
   byte Val1 = digitalRead(6);
   if (Val1 == LOW) 
   {
        Serial.println(1);
          delay(1000);
   }
   byte Val2 = digitalRead(7);
   if (Val2 == LOW) 
   {
        Serial.println(2);
          delay(1000);
   }
   byte Val3 = digitalRead(8);
   if (Val3 == LOW) 
   {
        Serial.println(3);
          delay(1000);
   }
   byte Val4 = digitalRead(9);
   if (Val4 == LOW) 
   {
        Serial.println(4);
          delay(1000);
   }
   byte Val5 = digitalRead(10);
   if (Val5 == LOW) 
   {
        Serial.println(5);
          delay(1000);
   }
   byte Val6 = digitalRead(11);
   if (Val6 == LOW) 
   {
        Serial.println(6);
          delay(1000);
   }
  
    

}
