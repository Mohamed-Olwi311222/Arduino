#include <Servo.h>
void delay_at_left();
void delay_at_right();
void led_run();
bool check_switch();

Servo myservo;
const int servoSignal = 10;
const int led = 6;
const int s1_out = 2;
const int s2_in = 3;
int index = 0;

void setup() {
  myservo.attach(servoSignal);  // attaches the servo on pin 9 to the servo object
  pinMode(led, OUTPUT);
  pinMode(s1_out, OUTPUT);
  pinMode(s2_in, INPUT);
  digitalWrite(s1_out, HIGH);
}

void loop() {
  if (true == check_switch())
  {
    delay_at_right();
    delay_at_left();
  }
  else
  {
    analogWrite(led, 0);
    myservo.write(0);  // Adjust to your desired 'off' position
  }
}
bool check_switch()
{
  return digitalRead(s2_in);
}
void delay_at_right()
{
  int pos[] = {60, 80, 60, 100 ,120 ,160, 120};
  int d[] = {500,400, 200,800,200, 400,500};
  // led_run();
  for (index = 0; index < 6; index++)
  {
    myservo.write(pos[index]);
    delay(d[index]);
  }
  for (index = 6; index >= 0; index--)
  {
    myservo.write(pos[index]);
    delay(d[index]);
  }
}
void delay_at_left()
{
  int pos[] = {60, 80, 60, 100 ,120 ,160, 120};
  int d[] = {500,400, 200,800,200, 200,500};
  myservo.write(120);
  delay(1000);
  led_run();
  for (index = 0; index < 6; index++)
  {
    myservo.write(pos[index]);
    delay(d[index]);
  }
  for (index = 6; index >= 0; index--)
  {
    myservo.write(pos[index]);
    delay(d[index]);
  }
}
void led_run()
{
  uint8_t val = 0;
  for (val = 50; val < 250; val++)
  {
    analogWrite(led, val);
    delay(20);
  }
}
                                                                                                           