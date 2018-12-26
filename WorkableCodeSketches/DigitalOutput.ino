
int pinOutD3 = D3;                              // Declaring pins to a variable
int pinOutD4 = D4;
int pinOutD5 = D5;
int pinOutD6 = D6;                               
                            

void setup() {                
  Serial.begin(9600);               
  
  pinMode(pinOutD3, OUTPUT);                     // Setting Digital I/O pins as output 
  pinMode(pinOutD4, OUTPUT);                     
  pinMode(pinOutD5, OUTPUT); 
  pinMode(pinOutD6, OUTPUT);   
}

void loop() {    
  
  digitalWrite(pinOutD3, HIGH);                  // Setting Pin D0 On
  digitalWrite(pinOutD4, HIGH);  
  digitalWrite(pinOutD5, HIGH);                  // Setting Pin D1 On
  digitalWrite(pinOutD5, HIGH);
  delay(100);
     
}
  
  

