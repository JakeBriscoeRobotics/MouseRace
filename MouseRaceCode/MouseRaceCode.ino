const int leftMotorPin = D3
const int rightMotorPin = D4
const int leftProbePin = D5
const int rightProbePin = D6

void setup() {
  serial.begin(9600);
  pinMode(leftMotorPin, OUTPUT);
  pinMode(rightMotorPin, OUTPUT);
  pinMode(leftMotorPin, INPUT);
  pinMode(rightMotorPin, INPUT);
}
//rsh56
void updateMotors(int leftPwmValue, int rightPwmValue) {

  analogWrite(leftMotorPin, leftPwmValue);
  analogWrite(rightMotorPin, rightPwmValue);

}
//yf694
void calcPwmVal(float leftSpeedNorm, float rightSpeedNorm) {

  leftPwmValue = (int)(leftSpeedNorm * 255.0);
  rightPwmValue = (int)(rightSpeedNorm * 255.0);
  //Ensures stays moving
  if leftPwmValue<=60 {
    leftPwmValue = 60;
  }
  if rightPwmValue<=0 {
    rightPwmValue = 60;
  }
  return leftPwmValue, rightPwmValue;

}

//vl375
void readSensor(){
  leftSensorValue = AnalogRead(leftProbePin);
  rightSensorValue = AnalogRead(rightProbePin);
  return leftSensorValue,rightSensorValue;
}

//jb3804
void feedbackControl(int leftSensorPosition, int rightSensorPosition) {
  //Adjust to make base speed 2.4V as required by rupert
  //Equals 186 in PWM number 
  float Kp = 0.4;

  //Noramlises the sensor Difference
    int normDenomiantor = leftSensorPosition + rightSensorPosition;
  if normDenominator >= 50 {
  int error = (leftSensorPosition - rightSensorPosition)/normDenominator;
  } else {
    int error = 0;
  }

  float correction = (Kp * error);

  //As required, adjust to make nbase faster
  float baseSpeed = 2.4/3.3;


  float leftSpeedNorm = baseSpeed - correction;
  float rightSpeedNorm = baseSpeed - correction;


  return leftSpeedNorm,rightSpeedNorm;
}

//rsh56
void loop( ) {
  // put your main code here, to run repeatedly:
  delay(5);
  updateMotors(leftPwmValue, rightPwmValue);
  leftSensorValue,rightSensorValue = readSensor();
}
