const int ir1 = 2;
const int ir2 = 3;
const int ir3 = 4;
int ir1dat;
int ir2dat;
int ir3dat;

int half_turn_time = 200;

void mrun(int m11, int m12, int m21, int m22){
  digitalWrite(5,m11);
  digitalWrite(6,m12);
  digitalWrite(7,m21);
  digitalWrite(8,m22);
}

void setup() {
  pinMode(ir1, OUTPUT);
  pinMode(ir2, OUTPUT);
  pinMode(ir3, OUTPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(7, INPUT);

}

void loop() {
  ir1dat = digitalRead(ir1);
  ir2dat = digitalRead(ir2);
  ir3dat = digitalRead(ir3);
  if (ir1dat == 1 & ir2dat == 0 & ir3dat == 0){
    mrun(1,0,0,1);
    delay(2*half_turn_time);
    mrun(0,0,0,0);
  }
  else if(ir1dat == 0 & ir2dat == 0 & ir3dat == 1){
    mrun(0,1,1,0);
    delay(2*half_turn_time);
    mrun(0,0,0,0);
  }
  else if(ir1dat == 0 & ir2dat == 1 & ir3dat == 1){
    mrun(0,1,1,0);
    delay(half_turn_time);
    mrun(0,0,0,0);
  }
  else if(ir1dat == 1 & ir2dat == 1 & ir3dat == 0){
    mrun(1,0,0,1);
    delay(half_turn_time);
    mrun(0,0,0,0);
  }
  else{
    mrun(1,0,1,0);
  }
  delayMicroseconds(2);

}
