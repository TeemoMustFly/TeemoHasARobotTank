/*
  PWN example for ESP32

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

int MOTOR1_EN = 14;
int MOTOR1_PIN1 = 27;
int MOTOR1_PIN2 = 26;
int MOTOR2_EN = 32;
int MOTOR2_PIN3 = 25;
int MOTOR2_PIN4 = 33;

// output1 connects to left motor's vin
// output2 connects to left motor's gnd
// output4 connects to right motor's vin
// output3 connects to right motor's gnd

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(MOTOR1_EN, OUTPUT);
  pinMode(MOTOR1_PIN1, OUTPUT);
  pinMode(MOTOR1_PIN2, OUTPUT);
  pinMode(MOTOR2_EN, OUTPUT);
  pinMode(MOTOR2_PIN3, OUTPUT);
  pinMode(MOTOR2_PIN4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  setMotorPowers(255,255);
  delay(2000);

  setMotorPowers(-255,-255);
  delay(2000);

  setMotorPowers(255,0);
  delay(2000);

  setMotorPowers(0,255);
  delay(2000);

  setMotorPowers(0,0);
  delay(2000);
}

// set motors' power with direction
void setMotorPowers(int left, int right){
  analogWrite(MOTOR1_EN, abs(left));
  analogWrite(MOTOR2_EN, abs(right));
  leftMotorDirection(left);
  rightMotorDirection(right);
}

// config left motor's direction
void leftMotorDirection(int left){
  if (left >= 0){
    // clockwise
    // output1 is HIGH
    // output2 is LOW
    // so
    // input1 is HIGH
    // inout2 is LOW
    digitalWrite(MOTOR1_PIN1, HIGH);
    digitalWrite(MOTOR1_PIN2, LOW);
  }
  else {
    // anticlockwise
    // output1 is LOW
    // output2 is HIGH
    // so
    // input1 is LOW
    // inout2 is HIGH
    digitalWrite(MOTOR1_PIN1, LOW);
    digitalWrite(MOTOR1_PIN2, HIGH);
  }
}

// config right motor's direction
void rightMotorDirection(int right){
  if (right >= 0){
    // anticlockwise
    // output4 is LOW
    // output3 is HIGH
    // so
    // input4 is LOW
    // inout3 is HIGH
    digitalWrite(MOTOR2_PIN4, LOW);
    digitalWrite(MOTOR2_PIN3, HIGH);
  }
  else {
    // clockwise
    // output4 is HIGH
    // output3 is LOW
    // so
    // input4 is HIGH
    // inout3 is LOW
    digitalWrite(MOTOR2_PIN4, HIGH);
    digitalWrite(MOTOR2_PIN3, LOW);
  }
}