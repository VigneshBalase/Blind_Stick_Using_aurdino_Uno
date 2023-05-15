const int trigPin = 9;
const int echoPin = 10;
long duration;
int distanceCm, distanceInch;
void setup()
{ 

 Serial.begin(9600); 
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);

 pinMode(5, OUTPUT); // Connect Buzzer Pin D5
 pinMode(6, OUTPUT); // Connect vibrator Pin D6 

}
void loop()
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distanceCm= duration*0.034/2;
distanceInch = duration*0.0133/2;
Seri al.println("Distance: ");
Serial.println(distanceCm);
delay (100);
// See the Ultrasonic Sensor Value in Serial Monitor



if(distanceCm < 25)  // You can Change the value 
{
  
  digitalWrite(5, HIGH);  // Buzzer ON
  digitalWrite(6, HIGH);  // Vibrator ON 
  
}

else
{
    digitalWrite(5,LOW);  // Buzzer OFF
    digitalWrite(6,LOW);  // Vibrator OFF 
}
}
