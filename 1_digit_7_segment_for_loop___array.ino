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

void sefer(){ 
for(int j=0; j<7;j++){
  digitalWrite(seg[j],zero[j]);
}
delay(2000);
}

void wahad(){
for(int j=0; j<7;j++){
  digitalWrite(seg[j],one[j]);
}
delay(2000);
}

void ethnayn(){
for(int j=0; j<7;j++){
  digitalWrite(seg[j],two[j]);
}
delay(2000);
}

void thalatha(){
for(int j=0; j<7;j++){
  digitalWrite(seg[j],three[j]);
}
delay(2000);
}

void arbaa(){
for(int j=0; j<7;j++){
  digitalWrite(seg[j],four[j]);
}
delay(2000);
}

void khamsa(){
for(int j=0; j<7;j++){
  digitalWrite(seg[j],five[j]);
}
delay(2000);
}

void seeta(){
for(int j=0; j<7;j++){
  digitalWrite(seg[j],six[j]);
}
delay(2000);
}

void sabaa(){
for(int j=0; j<7;j++){
  digitalWrite(seg[j],seven[j]);
}
delay(2000);
}

void thamaniya(){
for(int j=0; j<7;j++){
  digitalWrite(seg[j],eight[j]);
}
delay(2000);
}

void tesaa(){
for(int j=0; j<7;j++){
  digitalWrite(seg[j],nine[j]);
}
delay(2000);
}

void loop(){

sefer();
delay(2000);
wahad();
delay(2000);
ethnayn();
delay(2000);
thalatha();
delay(2000);
arbaa();
delay(2000);
khamsa();
delay(2000);
seeta();
delay(2000);
sabaa();
delay(2000);
thamaniya();
delay(2000);
tesaa();
delay(2000);

}
