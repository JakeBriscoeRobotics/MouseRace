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


void loop() {
  // put your main code here, to run repeatedly:

}
