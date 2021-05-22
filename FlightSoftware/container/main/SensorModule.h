#include <SPI.h>
#include <Adafruit_BMP280.h>
#include "TinyGPS++.h"
#include <SoftwareSerial.h>

//GPS pins
#define GPS_RX 50
#define GPS_TX 51
#define GPS_BAUD_RATE 9600

// BMP280 pins
#define BMP_280_S2C_ADDRESS 0x76

class SensorModule {
  public:
  float bmpBasePressureHPa = -1;
  Adafruit_BMP280 bmp280;
//  TinyGPSPlus gps;
  
  void init();
  void loop();

  /*
  BMP280 FUNCTIONS
  */
  float readAltitude();
  float readTemperature();
  float getAltitudeFromPressure(float currentPa);

};
