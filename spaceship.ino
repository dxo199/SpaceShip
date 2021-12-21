// set global variables
// a single "=" set the variable

//variables for the LEDs
const int redLed1 = 5;
const int redLed2 = 4;
const int greenLed = 3;

//variable for the switch
const int switchPin = 2;

void setup() {
  // declare the LED pins as outputs
  pinMode(redLed1, OUTPUT);
  pinMode(redLed2, OUTPUT);
  pinMode(greenLed, OUTPUT);

  // declare the switch pin as an input
  pinMode(switchPin, INPUT);

}

void loop() {
  // create a local variable to hold the
  // state of the switch, unlike the global variables above
  // this is created and destroyed every time the loop() runs

  int switchState;
  switchState = digitalRead(switchPin);
  if (switchState == LOW) {
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed1, HIGH);
    digitalWrite(redLed2, LOW);
    delay(250);

  }

  else {
    digitalWrite(redLed1, LOW);
    digitalWrite(redLed2, LOW);
    digitalWrite(greenLed, HIGH);
  }
}
