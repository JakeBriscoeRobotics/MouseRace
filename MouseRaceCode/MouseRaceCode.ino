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



void loop() {
  // put your main code here, to run repeatedly:

}
