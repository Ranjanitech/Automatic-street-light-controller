const int LDR_PIN = 34;      
const int RELAY_PIN = 5;    
const int LIGHT_THRESHOLD = 1000; 
void setup() {
  Serial.begin(115200);        
  pinMode(RELAY_PIN, OUTPUT); 
  digitalWrite(RELAY_PIN, LOW); 
}
void loop() {
  int ldrValue = analogRead(LDR_PIN); 
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);
  if (ldrValue < LIGHT_THRESHOLD) {
   digitalWrite(RELAY_PIN, HIGH);
   Serial.println("Street Light: ON");
  } else {
    digitalWrite(RELAY_PIN, LOW);
    Serial.println("Street Light: OFF");
  }
  delay(1000);  
}
