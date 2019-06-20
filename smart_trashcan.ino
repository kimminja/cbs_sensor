## hi

##### bye

# HOW Making samrt trush(feat.아두이노)

## 목차

### introduce the Hardware

### introduce the software

### Hardware drawing(그림)

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int top_left,top_right,bot_left,bot_right;
  float top,bot,left,right;
  
  top_left=analogRead(A0);
  top_right=analogRead(A1);
  bot_left=analogRead(A2);
  bot_right=analogRead(A3);

  top = (top_left + top_right)/2.0;
  bot = (bot_left + bot_right)/2.0;
  top = (top_left + top_right)/2.0;
  bot = (bot_left + top_right)/2.0;
    
  Serial.print(top_left);Serial.println(top_left); 
  Serial.print(top_rght);Serial.println(top_rght);
  Serial.print(bot_left);Serial.println(bot_left);
  Serial.print(bot_right);Serial.println(bot_right);
 
  

}


###codeBlock(the software)



#include<Servo.h>

int trig = 8;
int echo = 9; 

Servo servo_x; //object

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  servo_x.attach(5);
  servo_x.write(20);
}

void loop() {
  digitalWrite(trig, LOW);
  digitalWrite(echo, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
 
  unsigned long duration = pulseIn(echo, HIGH);
  float distance = duration / 29.0 / 2.0;
 
  Serial.print(distance);
  Serial.println("cm");


  if(distance < 20) {
     Serial.println("Door open");
     servo_x.write(110);
     delay(3000);
     Serial.println("Door close"); 
     servo_x.write(20);
     delay(1000);  
      hahaha();
  }

    delay(500);

}

void hahaha(){

     servo_x.write(50);
     delay(500);
     servo_x.write(80);
     delay(200); 
     servo_x.write(110);
     delay(200);
     servo_x.write(20);
     delay(5000);
}
 
   난이도   | 유용함  | 종합 |
       ----|----|----|
      7 | 8 | 8  | 
