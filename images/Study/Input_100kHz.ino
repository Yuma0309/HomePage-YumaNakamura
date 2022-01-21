#include <TimerOne.h>

void setup() {
  pinMode( 9, OUTPUT );
  Timer1.initialize(5);  /* 周期を指定する。単位はμs. 10μsだと100kHz */  
}

void loop() {
  Timer1.pwm( 9, 511);
  /* 出力ピン番号とデューティ比を指定する。10bitPWM波形なので511/1023だとDuty=1/2 */
}
