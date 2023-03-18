const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;
// defining the letter segemnts with their selected pin

int seg[]={2,3,4,5,6,7,8};
int zero[]={1,1,1,1,1,1,0};
int one[]={0,1,1,0,0,0,0};
int two[]={1,1,0,1,1,0,1};
int three[]={1,1,1,1,0,0,1};
int four[]={0,1,1,0,0,1,1};
int five[]={1,0,1,1,0,1,1};
int six[]={1,0,1,1,1,1,1};
int seven[]={1,1,1,0,0,0,0};
int eight[]={1,1,1,1,1,1,1};
int nine[]={1,1,1,1,0,1,1};

// array set with the formation of the different digits using the segments


void setup() {
  // put your setup code here, to run once:
for (int i=2; i<9; i++){
  pinMode(i,OUTPUT);
 //pinMode(seg[i],OUTPUT);
}
// placing the pins as outputs
}


void loop() {
  // put your main code here, to run repeatedly:
 // for loop array for number 0 
for(int j=0; j<7;j++){
  digitalWrite(seg[j],zero[j]);
}
delay(2000);


 // for loop array for number 1 
for(int j=0; j<7;j++){
  digitalWrite(seg[j],one[j]);
}
delay(2000);


 // for loop array for number 2 
for(int j=0; j<7;j++){
  digitalWrite(seg[j],two[j]);
}
delay(2000);


 // for loop array for number 3 
for(int j=0; j<7;j++){
  digitalWrite(seg[j],three[j]);
}
delay(2000);


 // for loop array for number 4 
for(int j=0; j<7;j++){
  digitalWrite(seg[j],four[j]);
}
delay(2000);

 // for loop array for number 5 
for(int j=0; j<7;j++){
  digitalWrite(seg[j],five[j]);
}
delay(2000);


 // for loop array for number 6
for(int j=0; j<7;j++){
  digitalWrite(seg[j],six[j]);
}
delay(2000);


 // for loop array for number 7 
for(int j=0; j<7;j++){
  digitalWrite(seg[j],seven[j]);
}
delay(2000);


 // for loop array for number 8
for(int j=0; j<7;j++){
  digitalWrite(seg[j],eight[j]);
}
delay(2000);


 // for loop array for number 9
for(int j=0; j<7;j++){
  digitalWrite(seg[j],nine[j]);

delay(2000);
}

}
