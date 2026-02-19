#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Force Measurement System using FSR
 * @author CHARVI
 * @date 2026-01-28
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

int value=0;
/**
 * @brief Initialize Serial communication and any required peripherals.
 *
 * This function configures the Serial port at 9600 baud and prints
 * an initialization banner to the Serial Monitor.
 *
 * @return void
 */
void setup() {
    Serial.begin(9600);
    pinMode(A0, INPUT);
}
/**
 * @brief Main loop: read FSR value and print status to Serial.
 *
 * Reads the analog value from the FSR sensor on `FSR_PIN`, prints the raw ADC
 * value and a simple thresholded status message. Loop delays 500 ms between reads.
 *
 * @return void
 */