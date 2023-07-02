#include <PMS.h>

PMS pms(Serial1);
PMS::DATA data;

void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600, SERIAL_8N1, 16, 17); // Configure UART2 with baud rate and pins
}

void loop()
{
  if (pms.read(data))
  {
    Serial.print("PM 1.0 (ug/m3): ");
    Serial.println(data.PM_AE_UG_1_0);

    Serial.print("PM 2.5 (ug/m3): ");
    Serial.println(data.PM_AE_UG_2_5);

    Serial.print("PM 10.0 (ug/m3): ");
    Serial.println(data.PM_AE_UG_10_0);

    Serial.println();
  }
}
