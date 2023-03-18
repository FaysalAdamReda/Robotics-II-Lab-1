const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;
// defining the letter segemnts with their selected pin

void setup() {
  // put your setup code here, to run once:
for (int i=2; i<9; i++){
  pinMode(i,OUTPUT);
}
// placing the pins as outputs
}

void loop() {
  // put your main code here, to run repeatedly:

  // number 0
digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,0);

delay(2000);

 // number 1
digitalWrite(2,0);
digitalWrite(3,1);
digitalWrite(4,1);
digitalWrite(5,0);
digitalWrite(6,0);
digitalWrite(7,0);
digitalWrite(8,0);

delay(2000);

// number 2
digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,0);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,1);

delay(2000);

// number 3
digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,0);
digitalWrite(7,0);
digitalWrite(8,1);

delay(2000);

// number 4
digitalWrite(2,0);
digitalWrite(3,1);
digitalWrite(4,1);
digitalWrite(5,0);
digitalWrite(6,0);
digitalWrite(7,1);
digitalWrite(8,1);

delay(2000);

// number 5
digitalWrite(2,1);
digitalWrite(3,0);
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,0);
digitalWrite(7,1);
digitalWrite(8,1);

delay(2000);

// number 6
digitalWrite(2,1);
digitalWrite(3,0);
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);

delay(2000);

// number 7
digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,1);
digitalWrite(5,0);
digitalWrite(6,0);
digitalWrite(7,0);
digitalWrite(8,0);

delay(2000);

// number 8
digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);

delay(2000);

// number 9
digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,0);
digitalWrite(7,1);
digitalWrite(8,1);

delay(2000);
}
