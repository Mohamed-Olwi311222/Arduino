const int led[4] = {5, 6, 7, 8};

const int d = 150;

void setup(){
  for(int i = 0; i < 4; i++)
  {
    pinMode(led[i], OUTPUT);
  }
}
void loop() {
  for (int forward = 0; forward < 4; forward++)
  {
    digitalWrite(led[forward], HIGH);
    delay(d);
    digitalWrite(led[forward], LOW);
    delay(d);
  }

  for (int backward = 2; backward > 0; backward--)
  {
    digitalWrite(led[backward], HIGH);
    delay(d);
    digitalWrite(led[backward], LOW);
    delay(d);
  }

}
                                                             