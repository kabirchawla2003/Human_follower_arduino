const int ir1 = 2;
const int ir2 = 3;
const int ir3 = 4;
int ir1dat;
int ir2dat;
int ir3dat;

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

}
