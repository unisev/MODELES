const int ledPin =  LED_BUILTIN; 
int ledState = LOW;            
unsigned long previousMillis = 0;        
const long interval = 200;

int sensorValue = 0;

void setup() {
  pinMode (A0, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int prevSensValue = sensorValue;
  sensorValue = analogRead (A0);
  if (sensorValue != prevSensValue) Serial.println(sensorValue); 
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    if (ledState == LOW) {
      ledState = HIGH;
      digitalWrite(ledPin, ledState);
    } else {
      ledState = LOW;
      digitalWrite(ledPin, ledState);
    }
  }
}
