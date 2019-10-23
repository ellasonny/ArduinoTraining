/*

*/
/*//digitalWrite(ledOut, LOW);    // turn the LED off by making the voltage LOW/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman
  Phyllis change  pin 19
  This example code is in the public doma

  http://www.arduino.cc/en/Tutorial/Blink
*/
#define pinB 8
#define pinG 9
#define pinR 10
#define pinz 11
#define piny 12
#define pinx 13
// 6 oct 2019
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.

  //  pinMode(pinR, OUTPUT);
  //  pinMode(pinG, OUTPUT);
  //  pinMode(pinB, OUTPUT);
  //  pinMode(pinz, OUTPUT);
  //  pinMode(piny, OUTPUT);
  //  pinMode(pinx, OUTPUT);
  for (int thisPin = 6; thisPin < 14; thisPin = thisPin + 1) {
    pinMode(thisPin, OUTPUT);
  }
  //thisPin= thisPin+1
  //  thisPin        thisPin thisPin thisPin thisPin thisPin
}
//   //   means comment   or documentation
// the loop function runs over and over again forever
void loop() {

  //  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  // digitalWrite(pinR, HIGH);   // turn the LED on (HIGH is the voltage level)
  //]
  delay(1000);
  int d3;
  d3 = 400;
  for (int thisPin = 6; thisPin < 14; thisPin = thisPin + 2) {
    // pinMode(thisPin, OUTPUT);
    digitalWrite(thisPin, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(d3 );
    digitalWrite(thisPin, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(d3 );
  }
  //
  //  for (int thisPin = 13; thisPin > 5; thisPin = thisPin - 1) {
  //    // pinMode(thisPin, OUTPUT);
  //    digitalWrite(thisPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  //    delay(100 );
  //
  //    digitalWrite(thisPin, LOW);   // turn the LED on (HIGH is the voltage level)
  //    delay(100 );
  //  }

  int d2;
  d2 = 300;
  for (int thisPin = 13; thisPin > 5; thisPin = thisPin - 1) {
    // pinMode(thisPin, OUTPUT);
    digitalWrite(thisPin, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(d2 );

    digitalWrite(thisPin, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(d2 );
  }

  int d1;
  d1 = 100;
  for (int thisPin = 6; thisPin < 10; thisPin = thisPin + 1) {
    // pinMode(thisPin, OUTPUT);
    digitalWrite(thisPin, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(d1 );
    digitalWrite(thisPin, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(d1 );
  }

  for (int thisPin = 9; thisPin > 5; thisPin = thisPin - 1) {
    // pinMode(thisPin, OUTPUT);
    digitalWrite(thisPin, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(d1 );
    digitalWrite(thisPin, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(d1 );
  }

  // wait for a second
}
