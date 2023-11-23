#define in1 10 // kiri,maju
#define in2 11 // kiri,mundur
#define in3 8 // kanan, maju
#define in4 9 // kanan,mundur
int sensor1 = A2; //sensor kanan item under 130 putih under 250
int sensor2 = A0; //sensor kiri item under 80 putih under 200
  
void setup() {
pinMode( in1, OUTPUT);
pinMode( in2, OUTPUT);
pinMode( in3, OUTPUT);
pinMode( in4, OUTPUT);
Serial.begin(9600);

}

void loop() {
  sensor1 = analogRead(A2);
  sensor2 = analogRead(A0); 
  Serial.print( "Sensor Kanan : ");
  Serial.println( sensor1);
  delay(100);
  

  analogWrite(in1, 100); 
  analogWrite(in2, 0);
  analogWrite(in3, 100);
  analogWrite(in4, 0);    
  if ( sensor1 <= 130 && sensor2 <= 80) {
   jalan();
  }
  else if ( sensor1 <= 130 ) {
  analogWrite(in1, 50);
  analogWrite(in2, 0);
  analogWrite(in3, 150);
  analogWrite(in4, 0);
     
  }
  else if ( sensor2 <= 80 ) {
  analogWrite(in1, 150);
  analogWrite(in2, 0);
  analogWrite(in3, 50);
  analogWrite(in4, 0);
    
  }

// put your main code here, to run repeatedly:

}

void jalan() {
    analogWrite(in1, 0);
  analogWrite(in2, 0);
  analogWrite(in3, 0);
  analogWrite(in4, 0);
  delay(5000);

  analogWrite(in1, 0);
  analogWrite(in2, 150);
  analogWrite(in3, 150);
  analogWrite(in4, 0);
  delay(250);
}
