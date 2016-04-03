#include <NunchuckNew.h>
#include <Wire.h>




#define zeroX 121
#define zeroY 133

int loop_cnt=0;

int address = 52;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin();

  Wire.beginTransmission(address);
  Wire.write(0xF0);
  Wire.write(0x55);
  Wire.endTransmission();

  Wire.beginTransmission(address);
  Wire.write(0xFB);
  Wire.write(0x00);
  Wire.endTransmission();

  Serial.print("Ready\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  if( loop_cnt > 100 ) {
    loop_cnt = 0;

      int cnt=0;
    Wire.requestFrom (0x52, 6);// request data from nunchuck
    while (Wire.available ()) {
        // receive byte as an integer
        nunchuck_buf[cnt] = nunchuk_decode_byte(Wire.receive());
        cnt++;
    }
    nunchuck_send_request();  // send request for next data payload
    // If we recieved the 6 bytes, then go print them
    if (cnt >= 5) {
        return 1;   // success
    }
    return 0; //failure

    
    
    }

}
