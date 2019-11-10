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

    // PIN 0
    static volatile int pulsewidth_in_0;
    static volatile long pulse_start_0;

    // PIN 0
    static volatile int pulsewidth_in_1;
    static volatile long pulse_start_1;

    // PIN 0
    static volatile int pulsewidth_in_2;
    static volatile long pulse_start_2;

    // PIN 0
    static volatile int pulsewidth_in_3;
    static volatile long pulse_start_3;

    // PIN 0
    static volatile int pulsewidth_in_4;
    static volatile long pulse_start_4;

    // PIN 0
    static volatile int pulsewidth_in_5;
    static volatile long pulse_start_5;

    // PIN 0
    static volatile int pulsewidth_in_6;
    static volatile long pulse_start_6;

    // PIN 0
    static volatile int pulsewidth_in_7;
    static volatile long pulse_start_7;

    // PIN 0
    static volatile int pulsewidth_in_8;
    static volatile long pulse_start_8;

    // PIN 0
    static volatile int pulsewidth_in_9;
    static volatile long pulse_start_9;

    // PIN 0
    static volatile int pulsewidth_in_10;
    static volatile long pulse_start_10;

    // PIN 0
    static volatile int pulsewidth_in_11;
    static volatile long pulse_start_11;

    // PIN 0
    static volatile int pulsewidth_in_12;
    static volatile long pulse_start_12;

    // PIN 0
    static volatile int pulsewidth_in_13;
    static volatile long pulse_start_13;

    // PIN 0
    static volatile int pulsewidth_in_14;
    static volatile long pulse_start_14;

    // PIN 0
    static volatile int pulsewidth_in_15;
    static volatile long pulse_start_15;

    // PIN 0
    static volatile int pulsewidth_in_16;
    static volatile long pulse_start_16;

    // PIN 0
    static volatile int pulsewidth_in_17;
    static volatile long pulse_start_17;

    // PIN 0
    static volatile int pulsewidth_in_18;
    static volatile long pulse_start_18;

    // PIN 0
    static volatile int pulsewidth_in_19;
    static volatile long pulse_start_19;

    // PIN 0
    static volatile int pulsewidth_in_20;
    static volatile long pulse_start_20;

    // PIN 0
    static volatile int pulsewidth_in_21;
    static volatile long pulse_start_21;

    // PIN 0
    static volatile int pulsewidth_in_22;
    static volatile long pulse_start_22;

    // PIN 0
    static volatile int pulsewidth_in_23;
    static volatile long pulse_start_23;

    // PIN 0
    static volatile int pulsewidth_in_24;
    static volatile long pulse_start_24;

    // PIN 0
    static volatile int pulsewidth_in_25;
    static volatile long pulse_start_25;

    // PIN 0
    static volatile int pulsewidth_in_26;
    static volatile long pulse_start_26;

    // PIN 0
    static volatile int pulsewidth_in_27;
    static volatile long pulse_start_27;

    // PIN 0
    static volatile int pulsewidth_in_28;
    static volatile long pulse_start_28;

    // PIN 0
    static volatile int pulsewidth_in_29;
    static volatile long pulse_start_29;

    // PIN 0
    static volatile int pulsewidth_in_30;
    static volatile long pulse_start_30;

    // PIN 0
    static volatile int pulsewidth_in_31;
    static volatile long pulse_start_31;

    // PIN 0
    static volatile int pulsewidth_in_32;
    static volatile long pulse_start_32;

    // PIN 0
    static volatile int pulsewidth_in_33;
    static volatile long pulse_start_33;

    // PIN 0
    static volatile int pulsewidth_in_34;
    static volatile long pulse_start_34;

    // PIN 0
    static volatile int pulsewidth_in_35;
    static volatile long pulse_start_35;

    // PIN 0
    static volatile int pulsewidth_in_36;
    static volatile long pulse_start_36;

    // PIN 0
    static volatile int pulsewidth_in_37;
    static volatile long pulse_start_37;

    // PIN 0
    static volatile int pulsewidth_in_38;
    static volatile long pulse_start_38;

    // PIN 0
    static volatile int pulsewidth_in_39;
    static volatile long pulse_start_39;

    // PIN 0
    static volatile int pulsewidth_in_40;
    static volatile long pulse_start_40;

    // PIN 0
    static volatile int pulsewidth_in_41;
    static volatile long pulse_start_41;

    // PIN 0
    static volatile int pulsewidth_in_42;
    static volatile long pulse_start_42;

    // PIN 0
    static volatile int pulsewidth_in_43;
    static volatile long pulse_start_43;

    // PIN 0
    static volatile int pulsewidth_in_44;
    static volatile long pulse_start_44;

    // PIN 0
    static volatile int pulsewidth_in_45;
    static volatile long pulse_start_45;

    // PIN 0
    static volatile int pulsewidth_in_46;
    static volatile long pulse_start_46;

    // PIN 0
    static volatile int pulsewidth_in_47;
    static volatile long pulse_start_47;

    // PIN 0
    static volatile int pulsewidth_in_48;
    static volatile long pulse_start_48;

    // PIN 0
    static volatile int pulsewidth_in_49;
    static volatile long pulse_start_49;

    // PIN 0
    static volatile int pulsewidth_in_50;
    static volatile long pulse_start_50;

    // PIN 0
    static volatile int pulsewidth_in_51;
    static volatile long pulse_start_51;

    // PIN 0
    static volatile int pulsewidth_in_52;
    static volatile long pulse_start_52;

    // PIN 0
    static volatile int pulsewidth_in_53;
    static volatile long pulse_start_53;

};

// PIN 0
extern void isrRising0();
extern void isrFalling0();

// PIN 1
extern void isrRising1();
extern void isrFalling1();

// PIN 2
extern void isrRising2();
extern void isrFalling2();

// PIN 3
extern void isrRising3();
extern void isrFalling3();

// PIN 4
extern void isrRising4();
extern void isrFalling4();

// PIN 5
extern void isrRising5();
extern void isrFalling5();

// PIN 6
extern void isrRising6();
extern void isrFalling6();

// PIN 7
extern void isrRising7();
extern void isrFalling7();

// PIN 8
extern void isrRising8();
extern void isrFalling8();

// PIN 9
extern void isrRising9();
extern void isrFalling9();

// PIN 10
extern void isrRising10();
extern void isrFalling10();

// PIN 11
extern void isrRising11();
extern void isrFalling11();

// PIN 12
extern void isrRising12();
extern void isrFalling12();

// PIN 13
extern void isrRising13();
extern void isrFalling13();

// PIN 14
extern void isrRising14();
extern void isrFalling14();

// PIN 15
extern void isrRising15();
extern void isrFalling15();

// PIN 16
extern void isrRising16();
extern void isrFalling16();

// PIN 17
extern void isrRising17();
extern void isrFalling17();

// PIN 18
extern void isrRising18();
extern void isrFalling18();

// PIN 19
extern void isrRising19();
extern void isrFalling19();

// PIN 20
extern void isrRising20();
extern void isrFalling20();

// PIN 21
extern void isrRising21();
extern void isrFalling21();

// PIN 22
extern void isrRising22();
extern void isrFalling22();

// PIN 23
extern void isrRising23();
extern void isrFalling23();

// PIN 24
extern void isrRising24();
extern void isrFalling24();

// PIN 25
extern void isrRising25();
extern void isrFalling25();

// PIN 26
extern void isrRising26();
extern void isrFalling26();

// PIN 27
extern void isrRising27();
extern void isrFalling27();

// PIN 28
extern void isrRising28();
extern void isrFalling28();

// PIN 29
extern void isrRising29();
extern void isrFalling29();

// PIN 30
extern void isrRising30();
extern void isrFalling30();

// PIN 31
extern void isrRising31();
extern void isrFalling31();

// PIN 32
extern void isrRising32();
extern void isrFalling32();

// PIN 33
extern void isrRising33();
extern void isrFalling33();

// PIN 34
extern void isrRising34();
extern void isrFalling34();

// PIN 35
extern void isrRising35();
extern void isrFalling35();

// PIN 36
extern void isrRising36();
extern void isrFalling36();

// PIN 37
extern void isrRising37();
extern void isrFalling37();

// PIN 38
extern void isrRising38();
extern void isrFalling38();

// PIN 39
extern void isrRising39();
extern void isrFalling39();

// PIN 40
extern void isrRising40();
extern void isrFalling40();

// PIN 41
extern void isrRising41();
extern void isrFalling41();

// PIN 42
extern void isrRising42();
extern void isrFalling42();

// PIN 43
extern void isrRising43();
extern void isrFalling43();

// PIN 44
extern void isrRising44();
extern void isrFalling44();

// PIN 45
extern void isrRising45();
extern void isrFalling45();

// PIN 46
extern void isrRising46();
extern void isrFalling46();

// PIN 47
extern void isrRising47();
extern void isrFalling47();

// PIN 48
extern void isrRising48();
extern void isrFalling48();

// PIN 49
extern void isrRising49();
extern void isrFalling49();

// PIN 50
extern void isrRising50();
extern void isrFalling50();

// PIN 51
extern void isrRising51();
extern void isrFalling51();

// PIN 52
extern void isrRising52();
extern void isrFalling52();

// PIN 53
extern void isrRising53();
extern void isrFalling53();

