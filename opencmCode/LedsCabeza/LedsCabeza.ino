int pwm_pins[] = {2, 4, 5 };
int i = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(pwm_pins[0], OUTPUT);
  pinMode(pwm_pins[1], OUTPUT);
  pinMode(pwm_pins[2], OUTPUT);
}
void RGBLed (int r, int g, int b)     
{
  //analogWrite(pwm_pins[0], r);
  //analogWrite(pwm_pins[1], g);
  analogWrite(pwm_pins[2], b);
  digitalWrite(pwm_pins[0], r);
  digitalWrite(pwm_pins[1], g);
  //digitalWrite(pwm_pins[2], b);
}
void loop() {

    //for(int i = 0; i<255; i+=10){
      //RGBLed(i,i,i);
      digitalWrite(2, HIGH);
      delay(1000);
      digitalWrite(2, LOW);
      delay(1000);
    //}


}
