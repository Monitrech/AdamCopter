void flightControl(){
  
}

void StabalizeYaw(){
     
}

void stabalizePitch(){
  
}
  
void stabalizeRoll(){
  rollError = rollSetPoint - yprout[2];
  rollNow = millis();
  rollTimeChange = rollNow - rollLastTime;

  //final computation of output
  rollOutput = RKp * rollError + RKi * (rollError * rollTimeChange) + RKd * ((rollError - rollLastError)/rollTimeChange);
  Serial.print("Roll Output: ");
  Serial.println(rollOutput);

  //set maximum output values
//  if(rollOutput > 600) rollOutput = 600;
//  if(rollOutput < -600) rollOutput = -600;

  rollLastTime = rollNow;
  rollLastError = rollError;
  //Serial.println(rollOutput);
  
}


