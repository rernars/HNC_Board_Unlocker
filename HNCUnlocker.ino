#define kbd_tr_tr
#include "DigiKeyboard.h"


//-----------------------//
//Reren Arslan 12/12/2021//
//----------------------//


void setup() {
  pinMode(1, OUTPUT); //kart başladığına dair geribildirim//
}

void loop() {

  
 DigiKeyboard.update();
 DigiKeyboard.sendKeyStroke(0);
 
 digitalWrite(1, HIGH);//programın çalıştığına dair geri bildirim//   
 delay(100);                      
 digitalWrite(1, LOW);
 delay(100);                      
 digitalWrite(1, HIGH);   
 delay(100);                      
 digitalWrite(1, LOW);  
 
 DigiKeyboard.delay(150);
 DigiKeyboard.print("1395534903"); //Kart idsini yazıp enterlayarak tahtayı açıyor//
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 digitalWrite(1, HIGH);   
 DigiKeyboard.delay(5000);//kartı çıkartmak için 5 sn delay, eğer çıkartılmaz ise tekrardan idyi girer.//
}
