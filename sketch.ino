//MZ8LOW tnımlamaları
int MZ80_PINI  ;
//int MZ80_DURUM ;

//LED
int K_LED = 7 ;
int S_LED = 6 ;

//MOTOR
int PWMB = 9 ; //MOTOR HIZ PINI
int BIN1 = 4 ; //ILERI YON
int BIN2 = 3 ;

int PWMA = 10 ; //MOTOR HIZ PINI
int AIN1 = 11 ; //ILERI YON
int AIN2 = 12 ;

//SELENOID MOTOR 
int SELENOID = 8 ;

//ENDUKTIF SENSOR
int a ;
//int ENDUKTIF_DURUM ;

void setup() 
{
  
//MZ80 SENSORUNU PIN AYARLARI
pinMode(5, INPUT);

//ENDUKTIF SENSOR AYARLARI
pinMode(2, INPUT);

//MOTOR PIN AYARLARI
pinMode(PWMB, OUTPUT);
pinMode(BIN1, OUTPUT);
pinMode(BIN2, OUTPUT);

pinMode(PWMA, OUTPUT);
pinMode(AIN1, OUTPUT);
pinMode(AIN2, OUTPUT);

//SELENOID MOTOR AYARLARI
pinMode (SELENOID,OUTPUT);

//LED PIN AYARLARI
pinMode(K_LED, OUTPUT);
pinMode(S_LED, OUTPUT);
}

void loop() {

analogWrite(PWMB, 200); 
digitalWrite(BIN1, HIGH);
analogWrite(PWMA, 200); 
digitalWrite(AIN2, HIGH);

 
    
  if(digitalRead(2) == 1){
    
      delay(150);
      
      analogWrite(PWMB, 0);
      digitalWrite(BIN1, LOW);
      analogWrite(PWMA, 0); 
      digitalWrite(AIN2, LOW);
      
      digitalWrite(SELENOID, HIGH);
      delay(250);
      digitalWrite(SELENOID, LOW);
      delay(250);  
    
//        if(digitalRead(5) == 0){
//     
//           digitalWrite(K_LED, HIGH);
//           delay(500);
//           digitalWrite(K_LED, LOW);
//          }
//        else
//        {
//          
//           digitalWrite(S_LED, HIGH);
//           delay(500);
//           digitalWrite(S_LED, LOW);
//           
//    
//          }  
  }
  
  else if  (digitalRead(2) == 0)
  {
      analogWrite(PWMB, 200); 
      digitalWrite(BIN1, HIGH);
    
      analogWrite(PWMA, 200); 
      digitalWrite(AIN2, HIGH);
  }
  }
  
