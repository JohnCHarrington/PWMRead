#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "PWMRead.hpp"
#include <EnableInterrupt.h>

PWMRead::PWMRead(byte pin): pin(pin) {
  pinMode(pin, INPUT);
  setInterrupt();
}

void PWMRead::setInterrupt() {
  switch (pin) {
    case 0: {enableInterrupt(0, pwm_read_isrRising0, RISING); break;}
    case 1: {enableInterrupt(1, pwm_read_isrRising1, RISING); break;}
    case 2: {enableInterrupt(2, pwm_read_isrRising2, RISING); break;}
    case 3: {enableInterrupt(3, pwm_read_isrRising3, RISING); break;}
    case 4: {enableInterrupt(4, pwm_read_isrRising4, RISING); break;}
    case 5: {enableInterrupt(5, pwm_read_isrRising5, RISING); break;}
    case 6: {enableInterrupt(6, pwm_read_isrRising6, RISING); break;}
    case 7: {enableInterrupt(7, pwm_read_isrRising7, RISING); break;}
    case 8: {enableInterrupt(8, pwm_read_isrRising8, RISING); break;}
    case 9: {enableInterrupt(9, pwm_read_isrRising9, RISING); break;}
    case 10: {enableInterrupt(10, pwm_read_isrRising10, RISING); break;}
    case 11: {enableInterrupt(11, pwm_read_isrRising11, RISING); break;}
    case 12: {enableInterrupt(12, pwm_read_isrRising12, RISING); break;}
    case 13: {enableInterrupt(13, pwm_read_isrRising13, RISING); break;}
    case 14: {enableInterrupt(14, pwm_read_isrRising14, RISING); break;}
    case 15: {enableInterrupt(15, pwm_read_isrRising15, RISING); break;}
    case 16: {enableInterrupt(16, pwm_read_isrRising16, RISING); break;}
    case 17: {enableInterrupt(17, pwm_read_isrRising17, RISING); break;}
    case 18: {enableInterrupt(18, pwm_read_isrRising18, RISING); break;}
    case 19: {enableInterrupt(19, pwm_read_isrRising19, RISING); break;}
    case 20: {enableInterrupt(20, pwm_read_isrRising20, RISING); break;}
    case 21: {enableInterrupt(21, pwm_read_isrRising21, RISING); break;}
    case 22: {enableInterrupt(22, pwm_read_isrRising22, RISING); break;}
    case 23: {enableInterrupt(23, pwm_read_isrRising23, RISING); break;}
    case 24: {enableInterrupt(24, pwm_read_isrRising24, RISING); break;}
    case 25: {enableInterrupt(25, pwm_read_isrRising25, RISING); break;}
    case 26: {enableInterrupt(26, pwm_read_isrRising26, RISING); break;}
    case 27: {enableInterrupt(27, pwm_read_isrRising27, RISING); break;}
    case 28: {enableInterrupt(28, pwm_read_isrRising28, RISING); break;}
    case 29: {enableInterrupt(29, pwm_read_isrRising29, RISING); break;}
    case 30: {enableInterrupt(30, pwm_read_isrRising30, RISING); break;}
    case 31: {enableInterrupt(31, pwm_read_isrRising31, RISING); break;}
    case 32: {enableInterrupt(32, pwm_read_isrRising32, RISING); break;}
    case 33: {enableInterrupt(33, pwm_read_isrRising33, RISING); break;}
    case 34: {enableInterrupt(34, pwm_read_isrRising34, RISING); break;}
    case 35: {enableInterrupt(35, pwm_read_isrRising35, RISING); break;}
    case 36: {enableInterrupt(36, pwm_read_isrRising36, RISING); break;}
    case 37: {enableInterrupt(37, pwm_read_isrRising37, RISING); break;}
    case 38: {enableInterrupt(38, pwm_read_isrRising38, RISING); break;}
    case 39: {enableInterrupt(39, pwm_read_isrRising39, RISING); break;}
    case 40: {enableInterrupt(40, pwm_read_isrRising40, RISING); break;}
    case 41: {enableInterrupt(41, pwm_read_isrRising41, RISING); break;}
    case 42: {enableInterrupt(42, pwm_read_isrRising42, RISING); break;}
    case 43: {enableInterrupt(43, pwm_read_isrRising43, RISING); break;}
    case 44: {enableInterrupt(44, pwm_read_isrRising44, RISING); break;}
    case 45: {enableInterrupt(45, pwm_read_isrRising45, RISING); break;}
    case 46: {enableInterrupt(46, pwm_read_isrRising46, RISING); break;}
    case 47: {enableInterrupt(47, pwm_read_isrRising47, RISING); break;}
    case 48: {enableInterrupt(48, pwm_read_isrRising48, RISING); break;}
    case 49: {enableInterrupt(49, pwm_read_isrRising49, RISING); break;}
    case 50: {enableInterrupt(50, pwm_read_isrRising50, RISING); break;}
    case 51: {enableInterrupt(51, pwm_read_isrRising51, RISING); break;}
    case 52: {enableInterrupt(52, pwm_read_isrRising52, RISING); break;}
    case 53: {enableInterrupt(53, pwm_read_isrRising53, RISING); break;}
  }
}

int PWMRead::getVal() {
  switch (pin) {
    case 0: {return pwm_read_pulsewidth_in_0;}
    case 1: {return pwm_read_pulsewidth_in_1;}
    case 2: {return pwm_read_pulsewidth_in_2;}
    case 3: {return pwm_read_pulsewidth_in_3;}
    case 4: {return pwm_read_pulsewidth_in_4;}
    case 5: {return pwm_read_pulsewidth_in_5;}
    case 6: {return pwm_read_pulsewidth_in_6;}
    case 7: {return pwm_read_pulsewidth_in_7;}
    case 8: {return pwm_read_pulsewidth_in_8;}
    case 9: {return pwm_read_pulsewidth_in_9;}
    case 10: {return pwm_read_pulsewidth_in_10;}
    case 11: {return pwm_read_pulsewidth_in_11;}
    case 12: {return pwm_read_pulsewidth_in_12;}
    case 13: {return pwm_read_pulsewidth_in_13;}
    case 14: {return pwm_read_pulsewidth_in_14;}
    case 15: {return pwm_read_pulsewidth_in_15;}
    case 16: {return pwm_read_pulsewidth_in_16;}
    case 17: {return pwm_read_pulsewidth_in_17;}
    case 18: {return pwm_read_pulsewidth_in_18;}
    case 19: {return pwm_read_pulsewidth_in_19;}
    case 20: {return pwm_read_pulsewidth_in_20;}
    case 21: {return pwm_read_pulsewidth_in_21;}
    case 22: {return pwm_read_pulsewidth_in_22;}
    case 23: {return pwm_read_pulsewidth_in_23;}
    case 24: {return pwm_read_pulsewidth_in_24;}
    case 25: {return pwm_read_pulsewidth_in_25;}
    case 26: {return pwm_read_pulsewidth_in_26;}
    case 27: {return pwm_read_pulsewidth_in_27;}
    case 28: {return pwm_read_pulsewidth_in_28;}
    case 29: {return pwm_read_pulsewidth_in_29;}
    case 30: {return pwm_read_pulsewidth_in_30;}
    case 31: {return pwm_read_pulsewidth_in_31;}
    case 32: {return pwm_read_pulsewidth_in_32;}
    case 33: {return pwm_read_pulsewidth_in_33;}
    case 34: {return pwm_read_pulsewidth_in_34;}
    case 35: {return pwm_read_pulsewidth_in_35;}
    case 36: {return pwm_read_pulsewidth_in_36;}
    case 37: {return pwm_read_pulsewidth_in_37;}
    case 38: {return pwm_read_pulsewidth_in_38;}
    case 39: {return pwm_read_pulsewidth_in_39;}
    case 40: {return pwm_read_pulsewidth_in_40;}
    case 41: {return pwm_read_pulsewidth_in_41;}
    case 42: {return pwm_read_pulsewidth_in_42;}
    case 43: {return pwm_read_pulsewidth_in_43;}
    case 44: {return pwm_read_pulsewidth_in_44;}
    case 45: {return pwm_read_pulsewidth_in_45;}
    case 46: {return pwm_read_pulsewidth_in_46;}
    case 47: {return pwm_read_pulsewidth_in_47;}
    case 48: {return pwm_read_pulsewidth_in_48;}
    case 49: {return pwm_read_pulsewidth_in_49;}
    case 50: {return pwm_read_pulsewidth_in_50;}
    case 51: {return pwm_read_pulsewidth_in_51;}
    case 52: {return pwm_read_pulsewidth_in_52;}
    case 53: {return pwm_read_pulsewidth_in_53;}
  }
}

// PIN 0
volatile int pwm_read_pulsewidth_in_0 = -100;
volatile long pwm_read_pulse_start_0;

extern void pwm_read_isrRising0() {
  pwm_read_pulse_start_0 = micros();
  disableInterrupt(0);
  enableInterrupt(0, pwm_read_isrFalling0, FALLING);
}

extern void pwm_read_isrFalling0() {
  pwm_read_pulsewidth_in_0 = micros() - pwm_read_pulse_start_0;
  disableInterrupt(0);
  enableInterrupt(0, pwm_read_isrRising0, RISING);
}

// PIN 1
volatile int pwm_read_pulsewidth_in_1 = -100;
volatile long pwm_read_pulse_start_1;

extern void pwm_read_isrRising1() {
  pwm_read_pulse_start_1 = micros();
  disableInterrupt(1);
  enableInterrupt(1, pwm_read_isrFalling1, FALLING);
}

extern void pwm_read_isrFalling1() {
  pwm_read_pulsewidth_in_1 = micros() - pwm_read_pulse_start_1;
  disableInterrupt(1);
  enableInterrupt(1, pwm_read_isrRising1, RISING);
}

// PIN 2
volatile int pwm_read_pulsewidth_in_2 = -100;
volatile long pwm_read_pulse_start_2;

extern void pwm_read_isrRising2() {
  pwm_read_pulse_start_2 = micros();
  disableInterrupt(2);
  enableInterrupt(2, pwm_read_isrFalling2, FALLING);
}

extern void pwm_read_isrFalling2() {
  pwm_read_pulsewidth_in_2 = micros() - pwm_read_pulse_start_2;
  disableInterrupt(2);
  enableInterrupt(2, pwm_read_isrRising2, RISING);
}

// PIN 3
volatile int pwm_read_pulsewidth_in_3 = -100;
volatile long pwm_read_pulse_start_3;

extern void pwm_read_isrRising3() {
  pwm_read_pulse_start_3 = micros();
  disableInterrupt(3);
  enableInterrupt(3, pwm_read_isrFalling3, FALLING);
}

extern void pwm_read_isrFalling3() {
  pwm_read_pulsewidth_in_3 = micros() - pwm_read_pulse_start_3;
  disableInterrupt(3);
  enableInterrupt(3, pwm_read_isrRising3, RISING);
}

// PIN 4
volatile int pwm_read_pulsewidth_in_4 = -100;
volatile long pwm_read_pulse_start_4;

extern void pwm_read_isrRising4() {
  pwm_read_pulse_start_4 = micros();
  disableInterrupt(4);
  enableInterrupt(4, pwm_read_isrFalling4, FALLING);
}

extern void pwm_read_isrFalling4() {
  pwm_read_pulsewidth_in_4 = micros() - pwm_read_pulse_start_4;
  disableInterrupt(4);
  enableInterrupt(4, pwm_read_isrRising4, RISING);
}

// PIN 5
volatile int pwm_read_pulsewidth_in_5 = -100;
volatile long pwm_read_pulse_start_5;

extern void pwm_read_isrRising5() {
  pwm_read_pulse_start_5 = micros();
  disableInterrupt(5);
  enableInterrupt(5, pwm_read_isrFalling5, FALLING);
}

extern void pwm_read_isrFalling5() {
  pwm_read_pulsewidth_in_5 = micros() - pwm_read_pulse_start_5;
  disableInterrupt(5);
  enableInterrupt(5, pwm_read_isrRising5, RISING);
}

// PIN 6
volatile int pwm_read_pulsewidth_in_6 = -100;
volatile long pwm_read_pulse_start_6;

extern void pwm_read_isrRising6() {
  pwm_read_pulse_start_6 = micros();
  disableInterrupt(6);
  enableInterrupt(6, pwm_read_isrFalling6, FALLING);
}

extern void pwm_read_isrFalling6() {
  pwm_read_pulsewidth_in_6 = micros() - pwm_read_pulse_start_6;
  disableInterrupt(6);
  enableInterrupt(6, pwm_read_isrRising6, RISING);
}

// PIN 7
volatile int pwm_read_pulsewidth_in_7 = -100;
volatile long pwm_read_pulse_start_7;

extern void pwm_read_isrRising7() {
  pwm_read_pulse_start_7 = micros();
  disableInterrupt(7);
  enableInterrupt(7, pwm_read_isrFalling7, FALLING);
}

extern void pwm_read_isrFalling7() {
  pwm_read_pulsewidth_in_7 = micros() - pwm_read_pulse_start_7;
  disableInterrupt(7);
  enableInterrupt(7, pwm_read_isrRising7, RISING);
}

// PIN 8
volatile int pwm_read_pulsewidth_in_8 = -100;
volatile long pwm_read_pulse_start_8;

extern void pwm_read_isrRising8() {
  pwm_read_pulse_start_8 = micros();
  disableInterrupt(8);
  enableInterrupt(8, pwm_read_isrFalling8, FALLING);
}

extern void pwm_read_isrFalling8() {
  pwm_read_pulsewidth_in_8 = micros() - pwm_read_pulse_start_8;
  disableInterrupt(8);
  enableInterrupt(8, pwm_read_isrRising8, RISING);
}

// PIN 9
volatile int pwm_read_pulsewidth_in_9 = -100;
volatile long pwm_read_pulse_start_9;

extern void pwm_read_isrRising9() {
  pwm_read_pulse_start_9 = micros();
  disableInterrupt(9);
  enableInterrupt(9, pwm_read_isrFalling9, FALLING);
}

extern void pwm_read_isrFalling9() {
  pwm_read_pulsewidth_in_9 = micros() - pwm_read_pulse_start_9;
  disableInterrupt(9);
  enableInterrupt(9, pwm_read_isrRising9, RISING);
}

// PIN 10
volatile int pwm_read_pulsewidth_in_10 = -100;
volatile long pwm_read_pulse_start_10;

extern void pwm_read_isrRising10() {
  pwm_read_pulse_start_10 = micros();
  disableInterrupt(10);
  enableInterrupt(10, pwm_read_isrFalling10, FALLING);
}

extern void pwm_read_isrFalling10() {
  pwm_read_pulsewidth_in_10 = micros() - pwm_read_pulse_start_10;
  disableInterrupt(10);
  enableInterrupt(10, pwm_read_isrRising10, RISING);
}

// PIN 11
volatile int pwm_read_pulsewidth_in_11 = -100;
volatile long pwm_read_pulse_start_11;

extern void pwm_read_isrRising11() {
  pwm_read_pulse_start_11 = micros();
  disableInterrupt(11);
  enableInterrupt(11, pwm_read_isrFalling11, FALLING);
}

extern void pwm_read_isrFalling11() {
  pwm_read_pulsewidth_in_11 = micros() - pwm_read_pulse_start_11;
  disableInterrupt(11);
  enableInterrupt(11, pwm_read_isrRising11, RISING);
}

// PIN 12
volatile int pwm_read_pulsewidth_in_12 = -100;
volatile long pwm_read_pulse_start_12;

extern void pwm_read_isrRising12() {
  pwm_read_pulse_start_12 = micros();
  disableInterrupt(12);
  enableInterrupt(12, pwm_read_isrFalling12, FALLING);
}

extern void pwm_read_isrFalling12() {
  pwm_read_pulsewidth_in_12 = micros() - pwm_read_pulse_start_12;
  disableInterrupt(12);
  enableInterrupt(12, pwm_read_isrRising12, RISING);
}

// PIN 13
volatile int pwm_read_pulsewidth_in_13 = -100;
volatile long pwm_read_pulse_start_13;

extern void pwm_read_isrRising13() {
  pwm_read_pulse_start_13 = micros();
  disableInterrupt(13);
  enableInterrupt(13, pwm_read_isrFalling13, FALLING);
}

extern void pwm_read_isrFalling13() {
  pwm_read_pulsewidth_in_13 = micros() - pwm_read_pulse_start_13;
  disableInterrupt(13);
  enableInterrupt(13, pwm_read_isrRising13, RISING);
}

// PIN 14
volatile int pwm_read_pulsewidth_in_14 = -100;
volatile long pwm_read_pulse_start_14;

extern void pwm_read_isrRising14() {
  pwm_read_pulse_start_14 = micros();
  disableInterrupt(14);
  enableInterrupt(14, pwm_read_isrFalling14, FALLING);
}

extern void pwm_read_isrFalling14() {
  pwm_read_pulsewidth_in_14 = micros() - pwm_read_pulse_start_14;
  disableInterrupt(14);
  enableInterrupt(14, pwm_read_isrRising14, RISING);
}

// PIN 15
volatile int pwm_read_pulsewidth_in_15 = -100;
volatile long pwm_read_pulse_start_15;

extern void pwm_read_isrRising15() {
  pwm_read_pulse_start_15 = micros();
  disableInterrupt(15);
  enableInterrupt(15, pwm_read_isrFalling15, FALLING);
}

extern void pwm_read_isrFalling15() {
  pwm_read_pulsewidth_in_15 = micros() - pwm_read_pulse_start_15;
  disableInterrupt(15);
  enableInterrupt(15, pwm_read_isrRising15, RISING);
}

// PIN 16
volatile int pwm_read_pulsewidth_in_16 = -100;
volatile long pwm_read_pulse_start_16;

extern void pwm_read_isrRising16() {
  pwm_read_pulse_start_16 = micros();
  disableInterrupt(16);
  enableInterrupt(16, pwm_read_isrFalling16, FALLING);
}

extern void pwm_read_isrFalling16() {
  pwm_read_pulsewidth_in_16 = micros() - pwm_read_pulse_start_16;
  disableInterrupt(16);
  enableInterrupt(16, pwm_read_isrRising16, RISING);
}

// PIN 17
volatile int pwm_read_pulsewidth_in_17 = -100;
volatile long pwm_read_pulse_start_17;

extern void pwm_read_isrRising17() {
  pwm_read_pulse_start_17 = micros();
  disableInterrupt(17);
  enableInterrupt(17, pwm_read_isrFalling17, FALLING);
}

extern void pwm_read_isrFalling17() {
  pwm_read_pulsewidth_in_17 = micros() - pwm_read_pulse_start_17;
  disableInterrupt(17);
  enableInterrupt(17, pwm_read_isrRising17, RISING);
}

// PIN 18
volatile int pwm_read_pulsewidth_in_18 = -100;
volatile long pwm_read_pulse_start_18;

extern void pwm_read_isrRising18() {
  pwm_read_pulse_start_18 = micros();
  disableInterrupt(18);
  enableInterrupt(18, pwm_read_isrFalling18, FALLING);
}

extern void pwm_read_isrFalling18() {
  pwm_read_pulsewidth_in_18 = micros() - pwm_read_pulse_start_18;
  disableInterrupt(18);
  enableInterrupt(18, pwm_read_isrRising18, RISING);
}

// PIN 19
volatile int pwm_read_pulsewidth_in_19 = -100;
volatile long pwm_read_pulse_start_19;

extern void pwm_read_isrRising19() {
  pwm_read_pulse_start_19 = micros();
  disableInterrupt(19);
  enableInterrupt(19, pwm_read_isrFalling19, FALLING);
}

extern void pwm_read_isrFalling19() {
  pwm_read_pulsewidth_in_19 = micros() - pwm_read_pulse_start_19;
  disableInterrupt(19);
  enableInterrupt(19, pwm_read_isrRising19, RISING);
}

// PIN 20
volatile int pwm_read_pulsewidth_in_20 = -100;
volatile long pwm_read_pulse_start_20;

extern void pwm_read_isrRising20() {
  pwm_read_pulse_start_20 = micros();
  disableInterrupt(20);
  enableInterrupt(20, pwm_read_isrFalling20, FALLING);
}

extern void pwm_read_isrFalling20() {
  pwm_read_pulsewidth_in_20 = micros() - pwm_read_pulse_start_20;
  disableInterrupt(20);
  enableInterrupt(20, pwm_read_isrRising20, RISING);
}

// PIN 21
volatile int pwm_read_pulsewidth_in_21 = -100;
volatile long pwm_read_pulse_start_21;

extern void pwm_read_isrRising21() {
  pwm_read_pulse_start_21 = micros();
  disableInterrupt(21);
  enableInterrupt(21, pwm_read_isrFalling21, FALLING);
}

extern void pwm_read_isrFalling21() {
  pwm_read_pulsewidth_in_21 = micros() - pwm_read_pulse_start_21;
  disableInterrupt(21);
  enableInterrupt(21, pwm_read_isrRising21, RISING);
}

// PIN 22
volatile int pwm_read_pulsewidth_in_22 = -100;
volatile long pwm_read_pulse_start_22;

extern void pwm_read_isrRising22() {
  pwm_read_pulse_start_22 = micros();
  disableInterrupt(22);
  enableInterrupt(22, pwm_read_isrFalling22, FALLING);
}

extern void pwm_read_isrFalling22() {
  pwm_read_pulsewidth_in_22 = micros() - pwm_read_pulse_start_22;
  disableInterrupt(22);
  enableInterrupt(22, pwm_read_isrRising22, RISING);
}

// PIN 23
volatile int pwm_read_pulsewidth_in_23 = -100;
volatile long pwm_read_pulse_start_23;

extern void pwm_read_isrRising23() {
  pwm_read_pulse_start_23 = micros();
  disableInterrupt(23);
  enableInterrupt(23, pwm_read_isrFalling23, FALLING);
}

extern void pwm_read_isrFalling23() {
  pwm_read_pulsewidth_in_23 = micros() - pwm_read_pulse_start_23;
  disableInterrupt(23);
  enableInterrupt(23, pwm_read_isrRising23, RISING);
}

// PIN 24
volatile int pwm_read_pulsewidth_in_24 = -100;
volatile long pwm_read_pulse_start_24;

extern void pwm_read_isrRising24() {
  pwm_read_pulse_start_24 = micros();
  disableInterrupt(24);
  enableInterrupt(24, pwm_read_isrFalling24, FALLING);
}

extern void pwm_read_isrFalling24() {
  pwm_read_pulsewidth_in_24 = micros() - pwm_read_pulse_start_24;
  disableInterrupt(24);
  enableInterrupt(24, pwm_read_isrRising24, RISING);
}

// PIN 25
volatile int pwm_read_pulsewidth_in_25 = -100;
volatile long pwm_read_pulse_start_25;

extern void pwm_read_isrRising25() {
  pwm_read_pulse_start_25 = micros();
  disableInterrupt(25);
  enableInterrupt(25, pwm_read_isrFalling25, FALLING);
}

extern void pwm_read_isrFalling25() {
  pwm_read_pulsewidth_in_25 = micros() - pwm_read_pulse_start_25;
  disableInterrupt(25);
  enableInterrupt(25, pwm_read_isrRising25, RISING);
}

// PIN 26
volatile int pwm_read_pulsewidth_in_26 = -100;
volatile long pwm_read_pulse_start_26;

extern void pwm_read_isrRising26() {
  pwm_read_pulse_start_26 = micros();
  disableInterrupt(26);
  enableInterrupt(26, pwm_read_isrFalling26, FALLING);
}

extern void pwm_read_isrFalling26() {
  pwm_read_pulsewidth_in_26 = micros() - pwm_read_pulse_start_26;
  disableInterrupt(26);
  enableInterrupt(26, pwm_read_isrRising26, RISING);
}

// PIN 27
volatile int pwm_read_pulsewidth_in_27 = -100;
volatile long pwm_read_pulse_start_27;

extern void pwm_read_isrRising27() {
  pwm_read_pulse_start_27 = micros();
  disableInterrupt(27);
  enableInterrupt(27, pwm_read_isrFalling27, FALLING);
}

extern void pwm_read_isrFalling27() {
  pwm_read_pulsewidth_in_27 = micros() - pwm_read_pulse_start_27;
  disableInterrupt(27);
  enableInterrupt(27, pwm_read_isrRising27, RISING);
}

// PIN 28
volatile int pwm_read_pulsewidth_in_28 = -100;
volatile long pwm_read_pulse_start_28;

extern void pwm_read_isrRising28() {
  pwm_read_pulse_start_28 = micros();
  disableInterrupt(28);
  enableInterrupt(28, pwm_read_isrFalling28, FALLING);
}

extern void pwm_read_isrFalling28() {
  pwm_read_pulsewidth_in_28 = micros() - pwm_read_pulse_start_28;
  disableInterrupt(28);
  enableInterrupt(28, pwm_read_isrRising28, RISING);
}

// PIN 29
volatile int pwm_read_pulsewidth_in_29 = -100;
volatile long pwm_read_pulse_start_29;

extern void pwm_read_isrRising29() {
  pwm_read_pulse_start_29 = micros();
  disableInterrupt(29);
  enableInterrupt(29, pwm_read_isrFalling29, FALLING);
}

extern void pwm_read_isrFalling29() {
  pwm_read_pulsewidth_in_29 = micros() - pwm_read_pulse_start_29;
  disableInterrupt(29);
  enableInterrupt(29, pwm_read_isrRising29, RISING);
}

// PIN 30
volatile int pwm_read_pulsewidth_in_30 = -100;
volatile long pwm_read_pulse_start_30;

extern void pwm_read_isrRising30() {
  pwm_read_pulse_start_30 = micros();
  disableInterrupt(30);
  enableInterrupt(30, pwm_read_isrFalling30, FALLING);
}

extern void pwm_read_isrFalling30() {
  pwm_read_pulsewidth_in_30 = micros() - pwm_read_pulse_start_30;
  disableInterrupt(30);
  enableInterrupt(30, pwm_read_isrRising30, RISING);
}

// PIN 31
volatile int pwm_read_pulsewidth_in_31 = -100;
volatile long pwm_read_pulse_start_31;

extern void pwm_read_isrRising31() {
  pwm_read_pulse_start_31 = micros();
  disableInterrupt(31);
  enableInterrupt(31, pwm_read_isrFalling31, FALLING);
}

extern void pwm_read_isrFalling31() {
  pwm_read_pulsewidth_in_31 = micros() - pwm_read_pulse_start_31;
  disableInterrupt(31);
  enableInterrupt(31, pwm_read_isrRising31, RISING);
}

// PIN 32
volatile int pwm_read_pulsewidth_in_32 = -100;
volatile long pwm_read_pulse_start_32;

extern void pwm_read_isrRising32() {
  pwm_read_pulse_start_32 = micros();
  disableInterrupt(32);
  enableInterrupt(32, pwm_read_isrFalling32, FALLING);
}

extern void pwm_read_isrFalling32() {
  pwm_read_pulsewidth_in_32 = micros() - pwm_read_pulse_start_32;
  disableInterrupt(32);
  enableInterrupt(32, pwm_read_isrRising32, RISING);
}

// PIN 33
volatile int pwm_read_pulsewidth_in_33 = -100;
volatile long pwm_read_pulse_start_33;

extern void pwm_read_isrRising33() {
  pwm_read_pulse_start_33 = micros();
  disableInterrupt(33);
  enableInterrupt(33, pwm_read_isrFalling33, FALLING);
}

extern void pwm_read_isrFalling33() {
  pwm_read_pulsewidth_in_33 = micros() - pwm_read_pulse_start_33;
  disableInterrupt(33);
  enableInterrupt(33, pwm_read_isrRising33, RISING);
}

// PIN 34
volatile int pwm_read_pulsewidth_in_34 = -100;
volatile long pwm_read_pulse_start_34;

extern void pwm_read_isrRising34() {
  pwm_read_pulse_start_34 = micros();
  disableInterrupt(34);
  enableInterrupt(34, pwm_read_isrFalling34, FALLING);
}

extern void pwm_read_isrFalling34() {
  pwm_read_pulsewidth_in_34 = micros() - pwm_read_pulse_start_34;
  disableInterrupt(34);
  enableInterrupt(34, pwm_read_isrRising34, RISING);
}

// PIN 35
volatile int pwm_read_pulsewidth_in_35 = -100;
volatile long pwm_read_pulse_start_35;

extern void pwm_read_isrRising35() {
  pwm_read_pulse_start_35 = micros();
  disableInterrupt(35);
  enableInterrupt(35, pwm_read_isrFalling35, FALLING);
}

extern void pwm_read_isrFalling35() {
  pwm_read_pulsewidth_in_35 = micros() - pwm_read_pulse_start_35;
  disableInterrupt(35);
  enableInterrupt(35, pwm_read_isrRising35, RISING);
}

// PIN 36
volatile int pwm_read_pulsewidth_in_36 = -100;
volatile long pwm_read_pulse_start_36;

extern void pwm_read_isrRising36() {
  pwm_read_pulse_start_36 = micros();
  disableInterrupt(36);
  enableInterrupt(36, pwm_read_isrFalling36, FALLING);
}

extern void pwm_read_isrFalling36() {
  pwm_read_pulsewidth_in_36 = micros() - pwm_read_pulse_start_36;
  disableInterrupt(36);
  enableInterrupt(36, pwm_read_isrRising36, RISING);
}

// PIN 37
volatile int pwm_read_pulsewidth_in_37 = -100;
volatile long pwm_read_pulse_start_37;

extern void pwm_read_isrRising37() {
  pwm_read_pulse_start_37 = micros();
  disableInterrupt(37);
  enableInterrupt(37, pwm_read_isrFalling37, FALLING);
}

extern void pwm_read_isrFalling37() {
  pwm_read_pulsewidth_in_37 = micros() - pwm_read_pulse_start_37;
  disableInterrupt(37);
  enableInterrupt(37, pwm_read_isrRising37, RISING);
}

// PIN 38
volatile int pwm_read_pulsewidth_in_38 = -100;
volatile long pwm_read_pulse_start_38;

extern void pwm_read_isrRising38() {
  pwm_read_pulse_start_38 = micros();
  disableInterrupt(38);
  enableInterrupt(38, pwm_read_isrFalling38, FALLING);
}

extern void pwm_read_isrFalling38() {
  pwm_read_pulsewidth_in_38 = micros() - pwm_read_pulse_start_38;
  disableInterrupt(38);
  enableInterrupt(38, pwm_read_isrRising38, RISING);
}

// PIN 39
volatile int pwm_read_pulsewidth_in_39 = -100;
volatile long pwm_read_pulse_start_39;

extern void pwm_read_isrRising39() {
  pwm_read_pulse_start_39 = micros();
  disableInterrupt(39);
  enableInterrupt(39, pwm_read_isrFalling39, FALLING);
}

extern void pwm_read_isrFalling39() {
  pwm_read_pulsewidth_in_39 = micros() - pwm_read_pulse_start_39;
  disableInterrupt(39);
  enableInterrupt(39, pwm_read_isrRising39, RISING);
}

// PIN 40
volatile int pwm_read_pulsewidth_in_40 = -100;
volatile long pwm_read_pulse_start_40;

extern void pwm_read_isrRising40() {
  pwm_read_pulse_start_40 = micros();
  disableInterrupt(40);
  enableInterrupt(40, pwm_read_isrFalling40, FALLING);
}

extern void pwm_read_isrFalling40() {
  pwm_read_pulsewidth_in_40 = micros() - pwm_read_pulse_start_40;
  disableInterrupt(40);
  enableInterrupt(40, pwm_read_isrRising40, RISING);
}

// PIN 41
volatile int pwm_read_pulsewidth_in_41 = -100;
volatile long pwm_read_pulse_start_41;

extern void pwm_read_isrRising41() {
  pwm_read_pulse_start_41 = micros();
  disableInterrupt(41);
  enableInterrupt(41, pwm_read_isrFalling41, FALLING);
}

extern void pwm_read_isrFalling41() {
  pwm_read_pulsewidth_in_41 = micros() - pwm_read_pulse_start_41;
  disableInterrupt(41);
  enableInterrupt(41, pwm_read_isrRising41, RISING);
}

// PIN 42
volatile int pwm_read_pulsewidth_in_42 = -100;
volatile long pwm_read_pulse_start_42;

extern void pwm_read_isrRising42() {
  pwm_read_pulse_start_42 = micros();
  disableInterrupt(42);
  enableInterrupt(42, pwm_read_isrFalling42, FALLING);
}

extern void pwm_read_isrFalling42() {
  pwm_read_pulsewidth_in_42 = micros() - pwm_read_pulse_start_42;
  disableInterrupt(42);
  enableInterrupt(42, pwm_read_isrRising42, RISING);
}

// PIN 43
volatile int pwm_read_pulsewidth_in_43 = -100;
volatile long pwm_read_pulse_start_43;

extern void pwm_read_isrRising43() {
  pwm_read_pulse_start_43 = micros();
  disableInterrupt(43);
  enableInterrupt(43, pwm_read_isrFalling43, FALLING);
}

extern void pwm_read_isrFalling43() {
  pwm_read_pulsewidth_in_43 = micros() - pwm_read_pulse_start_43;
  disableInterrupt(43);
  enableInterrupt(43, pwm_read_isrRising43, RISING);
}

// PIN 44
volatile int pwm_read_pulsewidth_in_44 = -100;
volatile long pwm_read_pulse_start_44;

extern void pwm_read_isrRising44() {
  pwm_read_pulse_start_44 = micros();
  disableInterrupt(44);
  enableInterrupt(44, pwm_read_isrFalling44, FALLING);
}

extern void pwm_read_isrFalling44() {
  pwm_read_pulsewidth_in_44 = micros() - pwm_read_pulse_start_44;
  disableInterrupt(44);
  enableInterrupt(44, pwm_read_isrRising44, RISING);
}

// PIN 45
volatile int pwm_read_pulsewidth_in_45 = -100;
volatile long pwm_read_pulse_start_45;

extern void pwm_read_isrRising45() {
  pwm_read_pulse_start_45 = micros();
  disableInterrupt(45);
  enableInterrupt(45, pwm_read_isrFalling45, FALLING);
}

extern void pwm_read_isrFalling45() {
  pwm_read_pulsewidth_in_45 = micros() - pwm_read_pulse_start_45;
  disableInterrupt(45);
  enableInterrupt(45, pwm_read_isrRising45, RISING);
}

// PIN 46
volatile int pwm_read_pulsewidth_in_46 = -100;
volatile long pwm_read_pulse_start_46;

extern void pwm_read_isrRising46() {
  pwm_read_pulse_start_46 = micros();
  disableInterrupt(46);
  enableInterrupt(46, pwm_read_isrFalling46, FALLING);
}

extern void pwm_read_isrFalling46() {
  pwm_read_pulsewidth_in_46 = micros() - pwm_read_pulse_start_46;
  disableInterrupt(46);
  enableInterrupt(46, pwm_read_isrRising46, RISING);
}

// PIN 47
volatile int pwm_read_pulsewidth_in_47 = -100;
volatile long pwm_read_pulse_start_47;

extern void pwm_read_isrRising47() {
  pwm_read_pulse_start_47 = micros();
  disableInterrupt(47);
  enableInterrupt(47, pwm_read_isrFalling47, FALLING);
}

extern void pwm_read_isrFalling47() {
  pwm_read_pulsewidth_in_47 = micros() - pwm_read_pulse_start_47;
  disableInterrupt(47);
  enableInterrupt(47, pwm_read_isrRising47, RISING);
}

// PIN 48
volatile int pwm_read_pulsewidth_in_48 = -100;
volatile long pwm_read_pulse_start_48;

extern void pwm_read_isrRising48() {
  pwm_read_pulse_start_48 = micros();
  disableInterrupt(48);
  enableInterrupt(48, pwm_read_isrFalling48, FALLING);
}

extern void pwm_read_isrFalling48() {
  pwm_read_pulsewidth_in_48 = micros() - pwm_read_pulse_start_48;
  disableInterrupt(48);
  enableInterrupt(48, pwm_read_isrRising48, RISING);
}

// PIN 49
volatile int pwm_read_pulsewidth_in_49 = -100;
volatile long pwm_read_pulse_start_49;

extern void pwm_read_isrRising49() {
  pwm_read_pulse_start_49 = micros();
  disableInterrupt(49);
  enableInterrupt(49, pwm_read_isrFalling49, FALLING);
}

extern void pwm_read_isrFalling49() {
  pwm_read_pulsewidth_in_49 = micros() - pwm_read_pulse_start_49;
  disableInterrupt(49);
  enableInterrupt(49, pwm_read_isrRising49, RISING);
}

// PIN 50
volatile int pwm_read_pulsewidth_in_50 = -100;
volatile long pwm_read_pulse_start_50;

extern void pwm_read_isrRising50() {
  pwm_read_pulse_start_50 = micros();
  disableInterrupt(50);
  enableInterrupt(50, pwm_read_isrFalling50, FALLING);
}

extern void pwm_read_isrFalling50() {
  pwm_read_pulsewidth_in_50 = micros() - pwm_read_pulse_start_50;
  disableInterrupt(50);
  enableInterrupt(50, pwm_read_isrRising50, RISING);
}

// PIN 51
volatile int pwm_read_pulsewidth_in_51 = -100;
volatile long pwm_read_pulse_start_51;

extern void pwm_read_isrRising51() {
  pwm_read_pulse_start_51 = micros();
  disableInterrupt(51);
  enableInterrupt(51, pwm_read_isrFalling51, FALLING);
}

extern void pwm_read_isrFalling51() {
  pwm_read_pulsewidth_in_51 = micros() - pwm_read_pulse_start_51;
  disableInterrupt(51);
  enableInterrupt(51, pwm_read_isrRising51, RISING);
}

// PIN 52
volatile int pwm_read_pulsewidth_in_52 = -100;
volatile long pwm_read_pulse_start_52;

extern void pwm_read_isrRising52() {
  pwm_read_pulse_start_52 = micros();
  disableInterrupt(52);
  enableInterrupt(52, pwm_read_isrFalling52, FALLING);
}

extern void pwm_read_isrFalling52() {
  pwm_read_pulsewidth_in_52 = micros() - pwm_read_pulse_start_52;
  disableInterrupt(52);
  enableInterrupt(52, pwm_read_isrRising52, RISING);
}

// PIN 53
volatile int pwm_read_pulsewidth_in_53 = -100;
volatile long pwm_read_pulse_start_53;

extern void pwm_read_isrRising53() {
  pwm_read_pulse_start_53 = micros();
  disableInterrupt(53);
  enableInterrupt(53, pwm_read_isrFalling53, FALLING);
}

extern void pwm_read_isrFalling53() {
  pwm_read_pulsewidth_in_53 = micros() - pwm_read_pulse_start_53;
  disableInterrupt(53);
  enableInterrupt(53, pwm_read_isrRising53, RISING);
}

