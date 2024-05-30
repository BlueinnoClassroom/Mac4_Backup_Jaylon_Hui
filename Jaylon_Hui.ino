#include <Servo.h>

Servo bestsafeintheworld;

void setup() {
	Serial.begin(115200);
	pinMode(3 ,OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(2, INPUT);
	pinMode(6, INPUT);
	pinMode(7, INPUT);
	pinMode(8, INPUT);
	bestsafeintheworld.attach(10);
	bestsafeintheworld.write(0);
}

void loop() {
	if (digitalRead(7)){
		digitalWrite(3, HIGH);
		digitalWrite(4, HIGH);
		digitalWrite(5, HIGH);
		bestsafeintheworld.write(0);
		delay(10000);
	}else{	
		digitalWrite(3, LOW);
		digitalWrite(4, LOW);
		digitalWrite(5, LOW);
		bestsafeintheworld.write(180);
	}
}

