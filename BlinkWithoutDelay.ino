const int ledPin =  LED_BUILTIN;
int ledState = LOW;            
unsigned long previousMillis = 0;        
const long interval = 500;
void setup() {
  pinMode(ledPin, OUTPUT);

  // YOUR SETUP HERE

}

void loop() {
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

/// YOUR CODE HERE

}
