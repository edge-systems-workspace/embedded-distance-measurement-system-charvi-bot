#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author CHARVI
 * @date 2026-01-16
 *
 * @details
 * Measures distance using HC-SR04 ultrasonic sensor
 * and displays structured output via Serial Monitor.
 */

int trig_pin = 9;
int echo_pin = 10;
/**
 * @brief Arduino setup function.
 * @details Initializes Serial communication at 9600 baud and configures
 *          the TRIG and ECHO pins for the ultrasonic sensor.
 * @return void
 */
void setup(){
    pinMode(trig_pin, OUTPUT);
    pinMode(echo_pin, INPUT);
    Serial.begin(9600);
}
/**
 * @brief Arduino main loop function.
 * @details Sends a trigger pulse to the HC-SR04, measures the echo pulse
 *          duration, converts the duration to distance in centimeters,
 *          and prints the result to the Serial Monitor.
 * @return void
 */
void loop(){
    digitalWrite(trig_pin, LOW);
    delayMicroseconds(2);
    digitalWrite(trig_pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig_pin, LOW);