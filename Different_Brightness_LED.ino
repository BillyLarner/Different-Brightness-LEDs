int ledPin1 = 5,    // LED 1's pin
    ledPin2 = 6,    // LED 2's pin
    ledPin3 = 9,    // LED 3's pin
    ledPin4 = 10;   // LED 4's pin


void setup() {
  pinMode (ledPin1, OUTPUT) ; // Sets pin 5 to an output
  pinMode (ledPin2, OUTPUT) ; // sets pin 6 to an output
  pinMode (ledPin3, OUTPUT) ; // sets pin 9 to an output
  pinMode (ledPin4, OUTPUT) ; // sets pin 10 to an output
}

void loop ()
  {
    analogWrite (ledPin1, map (2, 0, 100, 0, 255));    // sets Pin 5 to output a 2% duty cycle
    analogWrite (ledPin2, map (10, 0, 100, 0, 255));   // sets Pin 6 to output a 10% duty cycle 
    analogWrite (ledPin3, map(50, 0, 100, 0, 255));    // sets Pin 9 to output a 50% duty cycle
    analogWrite (ledPin4, map(100, 0, 100, 0, 255));   // sets Pin 10 to output a 100% duty cycle
  }
