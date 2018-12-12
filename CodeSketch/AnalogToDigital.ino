/*
  EXTENDING ESP8266 ANALOG PINS USING MULTIPLEXER (MUX) 
  Hardware Hookup
  GPIO D0, D1, D2 @ S0, S1, S2 Respectively
  A0 ----> Z
*/
 
int pinOut00 = D0;
int pinOut01 = D1;
int pinOut02 = D2;
int pinOut03 = D3;
int pinOut04 = D4;
int pinOut05 = D5;
int pinOut06 = D6;
int pinOut07 = D7;
int pinOut08 = D8; 

int pinInA0 = A0;
int valueInA0 = 0;
int valueInA1 = 0;
int valueInA2 = 0;

void setup() {                
  Serial.begin(9600);
  
  pinMode(pinOut00, OUTPUT);                    // Setting Pin 13 as output
  pinMode(pinOut01, OUTPUT);                    // Setting Pin 12 as output
  pinMode(pinOut02, OUTPUT);
  pinMode(pinOut03, OUTPUT);
  pinMode(pinOut04, OUTPUT);
  pinMode(pinOut05, OUTPUT);
  
  pinMode(pinInA0, INPUT);                      // Setting analog pin A0 to input    
}

void loop() {
  
  digitalWrite(pinOut04, HIGH);                  // Power Indicator
  delay(1000);                                   // Stabilizer

  digitalWrite(pinOut00, LOW);                   // Y0
  digitalWrite(pinOut01, LOW);
  digitalWrite(pinOut02, LOW);
  delay(350);
    valueInA0 = analogRead(pinInA0);             // Sensing voltage input in pin A0 and converting to integer values (0 - 1023)
    delay(750);
  
  digitalWrite(pinOut00, HIGH);                  // Y1
  digitalWrite(pinOut01, LOW);
  digitalWrite(pinOut02, LOW);
  delay(350);
    valueInA1 = analogRead(pinInA0);             // Sensing voltage input in pin A0 and converting to integer values (0 - 1023)
    delay(750);

  digitalWrite(pinOut00, LOW);                   // Y2
  digitalWrite(pinOut01, HIGH);
  digitalWrite(pinOut02, LOW);
  delay(350);
    valueInA2 = analogRead(pinInA0);             // Sensing voltage input in pin A0 and converting to integer values (0 - 1023)
    delay(750); 

}

