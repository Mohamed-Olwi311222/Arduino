/* 
 * File:   moving_eye.h
 * Author: mohamed olwi
 * Created on 02 July 2024, 05:45:07 AM
 */
#ifndef MOVING_EYE_H
#define MOVING_EYE_H
/*----------------------Include Dirs---------------------*/
#include <Arduino.h>
#include <Servo.h>
/*----------------------Macros---------------------------*/
#define GPIO_PIN0           0
#define GPIO_PIN1           1
#define GPIO_PIN2           2
#define GPIO_PIN3           3
#define GPIO_PIN4           4
#define GPIO_PIN5           5
#define GPIO_PIN6           6
#define GPIO_PIN7           7
#define GPIO_PIN8           8
#define GPIO_PIN9           9
#define GPIO_PIN10          10

#define ZERO_INIT           0x00
/*----------------------Datatypes------------------------*/
extern Servo myservo;
extern const int servo_signal_pin;
extern const int led_pin;
extern int index;
/*----------------------Function Prototypes--------------*/

/**
 * @brief run the application by checking if the switch is on
 */
void run_app();

/**
 * @brief check if the switch between pin2 and pin3 is on
 */
void check_switch();

/**
 * @brief Make the servo have a delay while rotating clockwise
 */
void delay_at_right();

/**
 * @brief Make the servo have a delay while rotating anticlockwise
 */
void delay_at_left();

/**
 * @brief run the led that is connected on pin6
 */
void led_run();



#endif /*Moving_eye.h*/