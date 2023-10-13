// Created by: Jaden Plugowsky
// Created on: Sept 2023
//
// This is the basic blink program, except the interval increases.

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
}

int blinkTime = 1000;

void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(blinkTime); // Wait for blinkTime millisecond(s)
    digitalWrite(LED_BUILTIN, LOW);
    delay(blinkTime); // Wait for blinkTime millisecond(s)
    blinkTime = blinkTime + 1000; // Increases blinkTime by 1 second
}
