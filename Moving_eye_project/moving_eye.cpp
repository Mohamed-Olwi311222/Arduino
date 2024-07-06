/* 
 * File:   moving_eye.cpp
 * Author: mohamed olwi
 * Created on 02 July 2024, 05:45:07 AM
 */
#include "Moving_eye.h"

/*----------------------Global Variables-----------------*/
Servo myservo;
const int servo_signal_pin = GPIO_PIN10;
const int led_pin = GPIO_PIN6;
int index = ZERO_INIT;
const int d[] = {500, 400, 200, 800, 400}; /*Delay at each index*/
/*----------------------Function Definition--------------*/

/**
 * @brief run the application
 */
void run_app()
{
  led_run();
  delay_at_right();
  delay_at_left();
}

/**
 * @brief Make the servo have a delay while rotating clockwise
 */
void delay_at_right()
{
  const int pos[] = {90, 40, 60, 80, 90};
  const int pos_size = 5;
    
  for (index = pos_size - 1; index >= 0; index--)
  {
    myservo.write(pos[index]);
    delay(d[index]);
  }
}

/**
 * @brief Make the servo have a delay while rotating anticlockwise
 */
void delay_at_left()
{
  const int pos[] = {90, 120, 100, 140, 90};
  const int pos_size = 5;

  for (index = ZERO_INIT; index < pos_size; index++)
  {
    myservo.write(pos[index]);
    delay(d[index]);
  }
}

/**
 * @brief run the led that is connected on pin6
 */
void led_run()
{
  digitalWrite(led_pin, HIGH);
}
                                                                                               