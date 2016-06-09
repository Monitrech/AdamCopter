

void updateUserInput(){

//  while(Serial.available()){
//    throttle = Serial.parseInt();
//    Serial.println(throttle);
//  }

//    while (Serial.available() > 0) {
//
//      // look for the next valid integer in the incoming serial stream:
//      MotorTestOutput = (int)Serial.parseInt();
//  
//        Serial.print("MotorTestOutput: ");
//        Serial.println(MotorTestOutput);
//
//    }

    while (Serial.available() > 0) {

      // look for the next valid integer in the incoming serial stream:
      throttle = (int)Serial.parseInt();
  
        Serial.print("throttle: ");
        Serial.println(throttle);

    }
  
  yawSetPoint = 0;//get data from processing in the future
  pitchSetPoint = 0;
  rollSetPoint = 0;
}


