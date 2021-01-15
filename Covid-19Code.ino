#define in1 5
#define in2 4
#define in3 3
#define in4 2

int IR_SENSOR = digitalRead(A5);

void setup() {
   
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  
  pinMode(A5, INPUT); // initialize IR-sensor as an input
}
 
void loop() {
 

   
if(IR_SENSOR==1) {
  
  digitalWrite(in1, HIGH);
   digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
     digitalWrite(in4, HIGH);
 }
 
  else if(IR_SENSOR==0) {
    digitalWrite(in1, LOW);
     digitalWrite(in2, LOW);
       digitalWrite(in3, LOW);
         digitalWrite(in4, LOW);
   
 }
 
}
 
