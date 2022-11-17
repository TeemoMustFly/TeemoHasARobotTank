/*
  PWN example for ESP32

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

int LED_PIN = 5;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_PIN as an output.
  pinMode(LED_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(int i=0; i<=255; i+=40){
    analogWrite(LED_PIN, i);
    delay(1000);
  }
}
