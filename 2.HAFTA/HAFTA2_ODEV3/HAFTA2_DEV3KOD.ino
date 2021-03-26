#include <Joystick.h>
#include <Servo.h>
Joystick_ Joystick;
Servo jimhalpert;
Servo michaelscott;
#define Pot1 A0
#define Pot2 A1
int deger1;
int deger2;

void setup() {
  Joystick.begin();
  jimhalpert.attach(12);
  michaelscott.attach(13);

}

void loop() {
  Joystick.setXAxis(analogRead(Pot1));
  Joystick.setYAxis(analogRead(Pot2));

  Joystick.sendState();

  deger1=analogRead(A0);
  deger1=map(deger1,0,1023,0,180);
  jimhalpert.write(deger1);
  

  deger2=analogRead(A1);
  deger2=map(deger2,0,1023,0,90);
  michaelscott.write(deger2);
  
  
}
