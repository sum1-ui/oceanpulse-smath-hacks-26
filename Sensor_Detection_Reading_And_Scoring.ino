
//pin layout
#define PHSensorPin A0


float PH;
void setup() {
  
}

void loop() {
  phCalc();
  
}

void phCalc(){
  PH = (4 * analogRead(PHSensorPin)/1023);
}
void calculateTotalDissolvedSolids() {

}