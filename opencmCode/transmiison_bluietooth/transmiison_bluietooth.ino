/* Minimum_Source*/
char data;
void setup() {
  // put your setup code here, to run once:
  //Data transmition speed for bluetooth
  Serial2.begin(57600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial2.available() > 0){
            data = (char)Serial2.read();
            SerialUSB.println(data);
  }
}

