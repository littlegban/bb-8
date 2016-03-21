
#include <Wire.h>
#include <ArduinoNunchuk.h>

ArduinoNunchuk nunchuk = ArduinoNunchuk();

unsigned short driveL = 9;
unsigned short driveR = 10;

signed int dutyCycle = 0;
unsigned int highus = 1500;
unsigned int lowus = 1000;

void setup()
{
  pinMode(driveL, OUTPUT);
  pinMode(driveR, OUTPUT);
  Serial.begin(19200);
  nunchuk.init();
}

void loop()
{
  nunchuk.update();

  Serial.print(nunchuk.analogX, DEC);
  Serial.print(' ');
  Serial.print(nunchuk.analogY, DEC);
  Serial.print(' ');
  Serial.print(nunchuk.zButton, DEC);
  Serial.print(' ');
  Serial.println(nunchuk.cButton, DEC);
  delay(100);

  if (nunchuk.analogX > 122) {
    Serial.print("RIGHT");
  }
  else if (nunchuk.analogX < 120) {
    Serial.print("LEFT");  
  }
  else if (nunchuk.analogY > 135) {
    Serial.print("FORWARD");  
  }
  else if (nunchuk.analogY < 134) {
    Serial.print("BACKWARDS");
  }
  else if (nunchuk.zButton > 0) {
    Serial.print("ZPRESSED");  
  }
  else if (nunchuk.cButton < 0) {
    Serial.print("CPRESSED");  
  }
}
