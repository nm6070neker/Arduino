/*
  Blink

  Developer: Natalie Maher
  Date: 2.13.26


  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT); // Piezo speaker
}

void loop() {

  // Flashing LEDs (cop lights)
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(100);

  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(100);

  // Siren sound - rising tone
  for (int freq = 600; freq <= 1200; freq += 20) {
    tone(11, freq);
    delay(5);
  }

  // Siren sound - falling tone
  for (int freq = 1200; freq >= 600; freq -= 20) {
    tone(11, freq);
    delay(5);
  }
}
