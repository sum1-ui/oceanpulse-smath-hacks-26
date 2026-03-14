
//pin layout
#define PHSensorPin A0
#define tempSensorPin A1

float PH;
float tempMilliVoltage;
float tempInCelcius;

void setup() {
  
}

void loop() {
  PH = phCalc();
  tempInCelcius = tempCalc();
}
float tempCalc() {
  tempMilliVoltage = (tempSensorPin * 5000/1024);
  return ((tempMilliVoltage - 500)/10);
}
float phCalc(){
  return (4 * analogRead(PHSensorPin)/1023);
}
