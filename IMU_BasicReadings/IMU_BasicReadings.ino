#include <Wire.h>

#include "SparkFun_LIS2DH12.h" //Click here to get the library: http://librarymanager/All#SparkFun_LIS2DH12
SPARKFUN_LIS2DH12 accel;       //Create instance

void setup()
{
  Serial.begin(115200);
  Serial.println("SparkFun Accel Example");

  Wire1.begin();

  if (accel.begin(0x19,Wire1) == false)
  {
    Serial.println("Accelerometer not detected. Check address jumper and wiring. Freezing...");
    while (1)
      ;
  }
}

void loop()
{
  //Print accel values only if new data is available
  if (accel.available())
  {
    float accelX = accel.getX();
    float accelY = accel.getY();
    float accelZ = accel.getZ();
    float tempC = accel.getTemperature();

    Serial.print("Acc [mg]: ");
    Serial.print(accelX, 1);
    Serial.print(" x, ");
    Serial.print(accelY, 1);
    Serial.print(" y, ");
    Serial.print(accelZ, 1);
    Serial.print(" z, ");
    Serial.print(tempC, 1);
    Serial.print("C");
    Serial.println();

    //    int rawX = accel.getRawX();
    //    int rawY = accel.getRawY();
    //    int rawZ = accel.getRawZ();
    //
    //    Serial.print("Acc raw: ");
    //    Serial.print(rawX);
    //    Serial.print(" x, ");
    //    Serial.print(rawY);
    //    Serial.print(" y, ");
    //    Serial.print(rawZ);
    //    Serial.print(" z");
    //    Serial.println();
  }
}
