#ifndef PWMRead_H_INCLUDED
#define PWMRead_H_INCLUDED

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <EnableInterrupt.h>

class PWMRead {
  public:
    PWMRead(byte pin);
    void setInterrupt();
    int getVal();

  private:
    byte pin;
};

// PIN 0
extern volatile int pwm_read_pulsewidth_in_0;
extern volatile long pwm_read_pulse_start_0;

extern void pwm_read_isrRising0();
extern void pwm_read_isrFalling0();

// PIN 1
extern volatile int pwm_read_pulsewidth_in_1;
extern volatile long pwm_read_pulse_start_1;

extern void pwm_read_isrRising1();
extern void pwm_read_isrFalling1();

// PIN 2
extern volatile int pwm_read_pulsewidth_in_2;
extern volatile long pwm_read_pulse_start_2;

extern void pwm_read_isrRising2();
extern void pwm_read_isrFalling2();

// PIN 3
extern volatile int pwm_read_pulsewidth_in_3;
extern volatile long pwm_read_pulse_start_3;

extern void pwm_read_isrRising3();
extern void pwm_read_isrFalling3();

// PIN 4
extern volatile int pwm_read_pulsewidth_in_4;
extern volatile long pwm_read_pulse_start_4;

extern void pwm_read_isrRising4();
extern void pwm_read_isrFalling4();

// PIN 5
extern volatile int pwm_read_pulsewidth_in_5;
extern volatile long pwm_read_pulse_start_5;

extern void pwm_read_isrRising5();
extern void pwm_read_isrFalling5();

// PIN 6
extern volatile int pwm_read_pulsewidth_in_6;
extern volatile long pwm_read_pulse_start_6;

extern void pwm_read_isrRising6();
extern void pwm_read_isrFalling6();

// PIN 7
extern volatile int pwm_read_pulsewidth_in_7;
extern volatile long pwm_read_pulse_start_7;

extern void pwm_read_isrRising7();
extern void pwm_read_isrFalling7();

// PIN 8
extern volatile int pwm_read_pulsewidth_in_8;
extern volatile long pwm_read_pulse_start_8;

extern void pwm_read_isrRising8();
extern void pwm_read_isrFalling8();

// PIN 9
extern volatile int pwm_read_pulsewidth_in_9;
extern volatile long pwm_read_pulse_start_9;

extern void pwm_read_isrRising9();
extern void pwm_read_isrFalling9();

// PIN 10
extern volatile int pwm_read_pulsewidth_in_10;
extern volatile long pwm_read_pulse_start_10;

extern void pwm_read_isrRising10();
extern void pwm_read_isrFalling10();

// PIN 11
extern volatile int pwm_read_pulsewidth_in_11;
extern volatile long pwm_read_pulse_start_11;

extern void pwm_read_isrRising11();
extern void pwm_read_isrFalling11();

// PIN 12
extern volatile int pwm_read_pulsewidth_in_12;
extern volatile long pwm_read_pulse_start_12;

extern void pwm_read_isrRising12();
extern void pwm_read_isrFalling12();

// PIN 13
extern volatile int pwm_read_pulsewidth_in_13;
extern volatile long pwm_read_pulse_start_13;

extern void pwm_read_isrRising13();
extern void pwm_read_isrFalling13();

// PIN 14
extern volatile int pwm_read_pulsewidth_in_14;
extern volatile long pwm_read_pulse_start_14;

extern void pwm_read_isrRising14();
extern void pwm_read_isrFalling14();

// PIN 15
extern volatile int pwm_read_pulsewidth_in_15;
extern volatile long pwm_read_pulse_start_15;

extern void pwm_read_isrRising15();
extern void pwm_read_isrFalling15();

// PIN 16
extern volatile int pwm_read_pulsewidth_in_16;
extern volatile long pwm_read_pulse_start_16;

extern void pwm_read_isrRising16();
extern void pwm_read_isrFalling16();

// PIN 17
extern volatile int pwm_read_pulsewidth_in_17;
extern volatile long pwm_read_pulse_start_17;

extern void pwm_read_isrRising17();
extern void pwm_read_isrFalling17();

// PIN 18
extern volatile int pwm_read_pulsewidth_in_18;
extern volatile long pwm_read_pulse_start_18;

extern void pwm_read_isrRising18();
extern void pwm_read_isrFalling18();

// PIN 19
extern volatile int pwm_read_pulsewidth_in_19;
extern volatile long pwm_read_pulse_start_19;

extern void pwm_read_isrRising19();
extern void pwm_read_isrFalling19();

// PIN 20
extern volatile int pwm_read_pulsewidth_in_20;
extern volatile long pwm_read_pulse_start_20;

extern void pwm_read_isrRising20();
extern void pwm_read_isrFalling20();

// PIN 21
extern volatile int pwm_read_pulsewidth_in_21;
extern volatile long pwm_read_pulse_start_21;

extern void pwm_read_isrRising21();
extern void pwm_read_isrFalling21();

// PIN 22
extern volatile int pwm_read_pulsewidth_in_22;
extern volatile long pwm_read_pulse_start_22;

extern void pwm_read_isrRising22();
extern void pwm_read_isrFalling22();

// PIN 23
extern volatile int pwm_read_pulsewidth_in_23;
extern volatile long pwm_read_pulse_start_23;

extern void pwm_read_isrRising23();
extern void pwm_read_isrFalling23();

// PIN 24
extern volatile int pwm_read_pulsewidth_in_24;
extern volatile long pwm_read_pulse_start_24;

extern void pwm_read_isrRising24();
extern void pwm_read_isrFalling24();

// PIN 25
extern volatile int pwm_read_pulsewidth_in_25;
extern volatile long pwm_read_pulse_start_25;

extern void pwm_read_isrRising25();
extern void pwm_read_isrFalling25();

// PIN 26
extern volatile int pwm_read_pulsewidth_in_26;
extern volatile long pwm_read_pulse_start_26;

extern void pwm_read_isrRising26();
extern void pwm_read_isrFalling26();

// PIN 27
extern volatile int pwm_read_pulsewidth_in_27;
extern volatile long pwm_read_pulse_start_27;

extern void pwm_read_isrRising27();
extern void pwm_read_isrFalling27();

// PIN 28
extern volatile int pwm_read_pulsewidth_in_28;
extern volatile long pwm_read_pulse_start_28;

extern void pwm_read_isrRising28();
extern void pwm_read_isrFalling28();

// PIN 29
extern volatile int pwm_read_pulsewidth_in_29;
extern volatile long pwm_read_pulse_start_29;

extern void pwm_read_isrRising29();
extern void pwm_read_isrFalling29();

// PIN 30
extern volatile int pwm_read_pulsewidth_in_30;
extern volatile long pwm_read_pulse_start_30;

extern void pwm_read_isrRising30();
extern void pwm_read_isrFalling30();

// PIN 31
extern volatile int pwm_read_pulsewidth_in_31;
extern volatile long pwm_read_pulse_start_31;

extern void pwm_read_isrRising31();
extern void pwm_read_isrFalling31();

// PIN 32
extern volatile int pwm_read_pulsewidth_in_32;
extern volatile long pwm_read_pulse_start_32;

extern void pwm_read_isrRising32();
extern void pwm_read_isrFalling32();

// PIN 33
extern volatile int pwm_read_pulsewidth_in_33;
extern volatile long pwm_read_pulse_start_33;

extern void pwm_read_isrRising33();
extern void pwm_read_isrFalling33();

// PIN 34
extern volatile int pwm_read_pulsewidth_in_34;
extern volatile long pwm_read_pulse_start_34;

extern void pwm_read_isrRising34();
extern void pwm_read_isrFalling34();

// PIN 35
extern volatile int pwm_read_pulsewidth_in_35;
extern volatile long pwm_read_pulse_start_35;

extern void pwm_read_isrRising35();
extern void pwm_read_isrFalling35();

// PIN 36
extern volatile int pwm_read_pulsewidth_in_36;
extern volatile long pwm_read_pulse_start_36;

extern void pwm_read_isrRising36();
extern void pwm_read_isrFalling36();

// PIN 37
extern volatile int pwm_read_pulsewidth_in_37;
extern volatile long pwm_read_pulse_start_37;

extern void pwm_read_isrRising37();
extern void pwm_read_isrFalling37();

// PIN 38
extern volatile int pwm_read_pulsewidth_in_38;
extern volatile long pwm_read_pulse_start_38;

extern void pwm_read_isrRising38();
extern void pwm_read_isrFalling38();

// PIN 39
extern volatile int pwm_read_pulsewidth_in_39;
extern volatile long pwm_read_pulse_start_39;

extern void pwm_read_isrRising39();
extern void pwm_read_isrFalling39();

// PIN 40
extern volatile int pwm_read_pulsewidth_in_40;
extern volatile long pwm_read_pulse_start_40;

extern void pwm_read_isrRising40();
extern void pwm_read_isrFalling40();

// PIN 41
extern volatile int pwm_read_pulsewidth_in_41;
extern volatile long pwm_read_pulse_start_41;

extern void pwm_read_isrRising41();
extern void pwm_read_isrFalling41();

// PIN 42
extern volatile int pwm_read_pulsewidth_in_42;
extern volatile long pwm_read_pulse_start_42;

extern void pwm_read_isrRising42();
extern void pwm_read_isrFalling42();

// PIN 43
extern volatile int pwm_read_pulsewidth_in_43;
extern volatile long pwm_read_pulse_start_43;

extern void pwm_read_isrRising43();
extern void pwm_read_isrFalling43();

// PIN 44
extern volatile int pwm_read_pulsewidth_in_44;
extern volatile long pwm_read_pulse_start_44;

extern void pwm_read_isrRising44();
extern void pwm_read_isrFalling44();

// PIN 45
extern volatile int pwm_read_pulsewidth_in_45;
extern volatile long pwm_read_pulse_start_45;

extern void pwm_read_isrRising45();
extern void pwm_read_isrFalling45();

// PIN 46
extern volatile int pwm_read_pulsewidth_in_46;
extern volatile long pwm_read_pulse_start_46;

extern void pwm_read_isrRising46();
extern void pwm_read_isrFalling46();

// PIN 47
extern volatile int pwm_read_pulsewidth_in_47;
extern volatile long pwm_read_pulse_start_47;

extern void pwm_read_isrRising47();
extern void pwm_read_isrFalling47();

// PIN 48
extern volatile int pwm_read_pulsewidth_in_48;
extern volatile long pwm_read_pulse_start_48;

extern void pwm_read_isrRising48();
extern void pwm_read_isrFalling48();

// PIN 49
extern volatile int pwm_read_pulsewidth_in_49;
extern volatile long pwm_read_pulse_start_49;

extern void pwm_read_isrRising49();
extern void pwm_read_isrFalling49();

// PIN 50
extern volatile int pwm_read_pulsewidth_in_50;
extern volatile long pwm_read_pulse_start_50;

extern void pwm_read_isrRising50();
extern void pwm_read_isrFalling50();

// PIN 51
extern volatile int pwm_read_pulsewidth_in_51;
extern volatile long pwm_read_pulse_start_51;

extern void pwm_read_isrRising51();
extern void pwm_read_isrFalling51();

// PIN 52
extern volatile int pwm_read_pulsewidth_in_52;
extern volatile long pwm_read_pulse_start_52;

extern void pwm_read_isrRising52();
extern void pwm_read_isrFalling52();

// PIN 53
extern volatile int pwm_read_pulsewidth_in_53;
extern volatile long pwm_read_pulse_start_53;

extern void pwm_read_isrRising53();
extern void pwm_read_isrFalling53();

#endif