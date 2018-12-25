/* 5 ANALOG SENSORS */
 
int pinOut00 = D0;
int pinOut01 = D1;
int pinOut02 = D2;
int pinOut03 = D3;
int pinOut04 = D4;

int pinInA0 = A0;
int valueInA0 = 0;
int valueInA1 = 0;
int valueInA2 = 0;
int valueInA3 = 0;
int valueInA4 = 0;

void setup() {                
  Serial.begin(9600);
  
  pinMode(pinOut00, OUTPUT);                    
  pinMode(pinOut01, OUTPUT);                    
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
  delay(250);
    valueInA0 = analogRead(pinInA0);             // Sensing voltage input in pin A0 and converting to integer values (0 - 1023)
    Serial.print("A0 = ");                       // Label the ouput 
    Serial.println (valueInA0);
    delay(750);
  
  digitalWrite(pinOut00, HIGH);                  // Y1
  digitalWrite(pinOut01, LOW);
  digitalWrite(pinOut02, LOW);
  delay(250);
    valueInA1 = analogRead(pinInA0);             // Sensing voltage input in pin A0 and converting to integer values (0 - 1023)
    Serial.print("A1 = ");                       // Label the ouput 
    Serial.println (valueInA1);
    delay(750);

  digitalWrite(pinOut00, LOW);                   // Y2
  digitalWrite(pinOut01, HIGH);
  digitalWrite(pinOut02, LOW);
  delay(250);
    valueInA2 = analogRead(pinInA0);             // Sensing voltage input in pin A0 and converting to integer values (0 - 1023)
    Serial.print("A2 = ");                       // Label the ouput 
    Serial.println (valueInA2);
    delay(750); 

  digitalWrite(pinOut00, HIGH);                   // Y3
  digitalWrite(pinOut01, HIGH);
  digitalWrite(pinOut02, LOW);
  delay(250);
    valueInA3 = analogRead(pinInA0);             // Sensing voltage input in pin A0 and converting to integer values (0 - 1023)
    Serial.print("A3 = ");                       // Label the ouput 
    Serial.println (valueInA3);
    delay(750); 

 digitalWrite(pinOut00, LOW);                   // Y4
  digitalWrite(pinOut01, LOW);
  digitalWrite(pinOut02, HIGH);
  delay(250);
    valueInA4 = analogRead(pinInA0);             // Sensing voltage input in pin A0 and converting to integer values (0 - 1023)
    Serial.print("A4 = ");                       // Label the ouput 
    Serial.println (valueInA4);
    delay(750);  
    
}
