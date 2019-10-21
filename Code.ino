const int trigPin = 12;
const int echoPin = 11;
long duration;
int distance;
void setup() {
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
Serial.begin(9600);}
void loop() {

digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
Serial.print("Distance: ");
Serial.println(distance);
 if (distance<15)
 {
  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
 }
  else
  {
    digitalWrite(4,HIGH);
    digitalWrite(2,LOW);
    delay(20);
    digitalWrite(4,LOW);
  }}
