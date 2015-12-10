int pinLED1 = 2;
int pinLED2 = 3;
int pinLED3 = 4;
int pinLED4 = 5;
int pinLED5 = 6;
int pinLED6 = 7;
int pinLED7 = 8;
int pinLED8 = 9;

short latchPin = 5; //patilla arduino para el latch
short clockPin = 6; //patilla arduino para la señal de reloj
short dataPin = 4; //patilla arduino por la que se envían los datos

int pinLecturaIR0 = A0;
int pinLecturaIR1 = A1;
int pinLecturaIR2 = A2;
int pinLecturaIR3 = A3;
int pinLecturaIR4 = A4;
int pinLecturaIR5 = A5;


void setup() {
  Serial.begin(9600);   
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
  pinMode(pinLED4, OUTPUT);
  pinMode(pinLED5, OUTPUT);
  pinMode(pinLED6, OUTPUT);
  pinMode(pinLED7, OUTPUT);
  pinMode(pinLED8, OUTPUT);
  

}

void loop() {
   byte leds = 0; 
   int lecturaIR1 = analogRead(pinLecturaIR0);
   int lecturaIR2 = analogRead(pinLecturaIR1);
   int lecturaIR3 = analogRead(pinLecturaIR2);
   int lecturaIR4 = analogRead(pinLecturaIR3);
   int lecturaIR5 = analogRead(pinLecturaIR4);
   int lecturaIR6 = analogRead(pinLecturaIR5);
   
   Serial.println(lecturaIR3);

  if(lecturaIR1 > 150)
  {
    digitalWrite(pinLED1, HIGH);
    digitalWrite(pinLED4, HIGH);
    digitalWrite(pinLED6, HIGH);
  }
  else
  {
    
    if(lecturaIR2 > 1000)
    {
      digitalWrite(pinLED1, HIGH);
      digitalWrite(pinLED4, HIGH);
      digitalWrite(pinLED6, HIGH);
    }
    else
    {
      
      if(lecturaIR3 > 1000)
      {
        digitalWrite(pinLED2, HIGH);
        digitalWrite(pinLED5, HIGH);
        digitalWrite(pinLED8, HIGH);
      }
      else
      {
        if(lecturaIR4 > 1000)
        {
          digitalWrite(pinLED1, HIGH);
          digitalWrite(pinLED2, HIGH);
          digitalWrite(pinLED3, HIGH);
        }
        else
        {
          if(lecturaIR5 > 1000)
          {
            digitalWrite(pinLED1, HIGH);
            digitalWrite(pinLED4, HIGH);
            digitalWrite(pinLED6, HIGH);
          }
          else
          {
            
            if(lecturaIR6 > 1000)
              {
                digitalWrite(pinLED1, HIGH);
                digitalWrite(pinLED4, HIGH);
                digitalWrite(pinLED6, HIGH);
              }
              else
              {
                
                estado();
              }
          }
        }
      }
    }
  }

}

void estado(){
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED4, LOW);
    digitalWrite(pinLED5, LOW);
    digitalWrite(pinLED6, LOW);
    digitalWrite(pinLED7, LOW);
    digitalWrite(pinLED8, LOW);

    
    digitalWrite(pinLED1, HIGH);
    delay(150);
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED2, HIGH);
    delay(150);
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED3, HIGH);
    delay(150);
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED4, HIGH);
    delay(150);
    digitalWrite(pinLED4, LOW);
    digitalWrite(pinLED5, HIGH);
    delay(150);
    digitalWrite(pinLED5, LOW);
    digitalWrite(pinLED6, HIGH);
    delay(150);
    digitalWrite(pinLED6, LOW);
    digitalWrite(pinLED7, HIGH);
    delay(150);
    digitalWrite(pinLED7, LOW);
    digitalWrite(pinLED8, HIGH);
    delay(150);
    
}


