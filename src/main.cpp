#include <Arduino.h>
void setup() {
// write your initialization code here
    Serial.begin(9600);
    pinMode(3, OUTPUT),
    pinMode(A0, INPUT);
    digitalWrite(3, LOW);
}

void loop() {
// write your code here
    if(analogRead(A0) > 500) {
        Serial.println("EXPLODED");
        digitalWrite(3, HIGH);
    }
    else
        digitalWrite(3, LOW);
}