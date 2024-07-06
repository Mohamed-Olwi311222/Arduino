/* 
 * File:   moving_eye.ino
 * Author: mohamed olwi
 * Created on 02 July 2024, 05:45:07 AM
 */

#include "Moving_eye.h"

void setup()
{
    myservo.attach(servo_signal_pin);
    pinMode(led_pin, OUTPUT);
}

void loop()
{
    run_app();
}