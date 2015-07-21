//
// WaterTracker with BlendMicro
//
#include <SPI.h>
#include <Nordic_nRF8001.h>
#include <RBL_nRF8001.h>

void setup() {
  ble_begin();
  Serial.begin(57600);
}

void loop() {
  if (ble_connected()) {
  	int senserVal = analogRead(A0);
   	ble_write(senserVal);
  }
  ble_do_events();
  delay(1000);  
}