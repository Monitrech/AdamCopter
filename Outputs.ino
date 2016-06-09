  //motor0 left front
  //motor1
  //motor2
  //motor3

  
void motorInit(){
  
  pinMode(MOTOR0,OUTPUT); 
  pinMode(MOTOR1,OUTPUT);
  pinMode(MOTOR2,OUTPUT);
  pinMode(MOTOR3,OUTPUT);

  motor0.attach(MOTOR0);
  motor1.attach(MOTOR1);
  motor2.attach(MOTOR2);
  motor3.attach(MOTOR3);

  delay(1000);

  motor0.write(0);
  motor1.write(0);
  motor2.write(0);
  motor3.write(0);

  delay(3000);
  
  
//  analogWrite(MOTOR0,MOTOR_ZERO_LEVEL);
//  analogWrite(MOTOR1,MOTOR_ZERO_LEVEL);
//  analogWrite(MOTOR2,MOTOR_ZERO_LEVEL);
//  analogWrite(MOTOR3,MOTOR_ZERO_LEVEL);
}

//this gets the motors ready to start turning
void armMotors(){
//  delay(3000);
//  analogWrite(MOTOR0,MOTOR_ZERO_LEVEL);
//  analogWrite(MOTOR1,MOTOR_ZERO_LEVEL);
//  analogWrite(MOTOR2,MOTOR_ZERO_LEVEL);
//  analogWrite(MOTOR3,MOTOR_ZERO_LEVEL);
//  delay(1000);
//
//  analogWrite(MOTOR0,160);
//  analogWrite(MOTOR1,160);
//  analogWrite(MOTOR2,160);
//  analogWrite(MOTOR3,160);
//  delay(1000);
//  
//  analogWrite(MOTOR0,MOTOR_ZERO_LEVEL);
//  analogWrite(MOTOR1,MOTOR_ZERO_LEVEL);
//  analogWrite(MOTOR2,MOTOR_ZERO_LEVEL);
//  analogWrite(MOTOR3,MOTOR_ZERO_LEVEL);
//  delay(1000);
}


