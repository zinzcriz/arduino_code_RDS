// C++ code
//

const int buzzer = 9; //buzzer to arduino pin 9
int i =0;
void setup(){
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
}

void loop(){
  if(i==0){
    tone(buzzer,1000);
    delay(2000);
    noTone(buzzer);
    i++;
  }
  
  
}