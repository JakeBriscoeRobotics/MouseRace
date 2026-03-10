const int leftMotorPin = D3
const int rightMotorPin = D4
const int leftProbePin = D5
const int rightProbePin = D6
const int maxPositionValue = //define experimentally

void setup() {
  serial.begin(9600);
  pinMode(leftMotorPin, OUTPUT);
  pinMode(rightMotorPin, OUTPUT);
  pinMode(leftMotorPin, INPUT);
  pinMode(rightMotorPin, INPUT);
}

void readSensor(){

  //Code for sensor readings here
  return leftSensorValue,rightSensorValue;
}


void feedbackControl(int leftSensorPosition, int rightSensorPosition) {
      //Adjust to make base speed 2.4V as required by rupert

  float Kp = 0.4;
  float base

      //Noramlises the sensor Difference
  int normDenomiantor = leftSensorPosition + rightSensorPosition;
  if normDenominator >= 50 {
    int error = (leftSensorPosition - rightSensorPosition)/normDenominator;
  } else {
    int error = 0;
  }

  float correction = (Kp * error);

  float leftSpeedNorm = baseSpeed - correction
  float rightSpeedNorm = baseSpeed - correction

  return leftSpeedNorm,rightSpeedNorm;
}

void calcPwmVal() {

  //Ensures stays moving
  if leftPwmValue<=60 {
    leftPwmValue = 60;
  }
  if rightPwmValue<=0 {
    rightPwmValue = 60;
  } else {
    return leftPwmValue,rightPwmValue;
  }

}

void updateMotors(int leftPwmValue, int rightPwmValue) {

  analogWrite(leftMotorPin, leftPwmValue);
  analogWrite(rightMotorPin, rightPwmValue);

}

void loop() {




}
// FInd max and make mapping function