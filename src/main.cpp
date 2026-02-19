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