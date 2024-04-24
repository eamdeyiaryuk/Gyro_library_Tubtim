///////////////////////////////////////////

//      Library Gyro by Tubtim          //

//////////////////////////////////////////

#include "Gyro.h"
Gyro gyro;
float Yaw_,Pitch_,Roll_,
      RateRoll,RatePitch,RateYaw;
void setup() {
  Serial.begin(9600);
  gyro.GyroCalibration();       //Calibraation Gyro 


}

void loop() {
  gyro.GyroSignals();           //Signals and Rate
  Yaw_ = gyro.GetAngleYaw();
  Pitch_ = gyro.GetAnglePitch();
  Roll_ = gyro.GetAngleRoll();

  RateRoll = gyro.GetRateRoll();
  RatePitch = gyro.GetRatePitch();
  RateYaw = gyro.GetRateYaw();
  Serial.print("Angle Yaw: "); Serial.print(Yaw_);  Serial.print("\t");
  Serial.print("Angle Pitch: "); Serial.print(Pitch_);  Serial.print("\t");
  Serial.print("Angle Roll: "); Serial.print(Roll_);  Serial.print("\t");

  Serial.print("Rate Roll: ");  Serial.print(RateRoll);   Serial.print("\t");
  Serial.print("Rate Pitch: "); Serial.print(RatePitch);  Serial.print("\t");
  Serial.print("Rate Yaw: ");   Serial.println(RateYaw); 
  
}
