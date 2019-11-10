PWMRead::PWMRead(byte pin): pin(pin) {
  pinMode(pin, INPUT);
  setInterrupt()
}

void PWMRead::setInterrupt() {
  switch (pin) {
    case 0: {enableInterrupt(0, isrRising0, RISING); break;}
    case 1: {enableInterrupt(1, isrRising1, RISING); break;}
    case 2: {enableInterrupt(2, isrRising2, RISING); break;}
    case 3: {enableInterrupt(3, isrRising3, RISING); break;}
    case 4: {enableInterrupt(4, isrRising4, RISING); break;}
    case 5: {enableInterrupt(5, isrRising5, RISING); break;}
    case 6: {enableInterrupt(6, isrRising6, RISING); break;}
    case 7: {enableInterrupt(7, isrRising7, RISING); break;}
    case 8: {enableInterrupt(8, isrRising8, RISING); break;}
    case 9: {enableInterrupt(9, isrRising9, RISING); break;}
    case 10: {enableInterrupt(10, isrRising10, RISING); break;}
    case 11: {enableInterrupt(11, isrRising11, RISING); break;}
    case 12: {enableInterrupt(12, isrRising12, RISING); break;}
    case 13: {enableInterrupt(13, isrRising13, RISING); break;}
    case 14: {enableInterrupt(14, isrRising14, RISING); break;}
    case 15: {enableInterrupt(15, isrRising15, RISING); break;}
    case 16: {enableInterrupt(16, isrRising16, RISING); break;}
    case 17: {enableInterrupt(17, isrRising17, RISING); break;}
    case 18: {enableInterrupt(18, isrRising18, RISING); break;}
    case 19: {enableInterrupt(19, isrRising19, RISING); break;}
    case 20: {enableInterrupt(20, isrRising20, RISING); break;}
    case 21: {enableInterrupt(21, isrRising21, RISING); break;}
    case 22: {enableInterrupt(22, isrRising22, RISING); break;}
    case 23: {enableInterrupt(23, isrRising23, RISING); break;}
    case 24: {enableInterrupt(24, isrRising24, RISING); break;}
    case 25: {enableInterrupt(25, isrRising25, RISING); break;}
    case 26: {enableInterrupt(26, isrRising26, RISING); break;}
    case 27: {enableInterrupt(27, isrRising27, RISING); break;}
    case 28: {enableInterrupt(28, isrRising28, RISING); break;}
    case 29: {enableInterrupt(29, isrRising29, RISING); break;}
    case 30: {enableInterrupt(30, isrRising30, RISING); break;}
    case 31: {enableInterrupt(31, isrRising31, RISING); break;}
    case 32: {enableInterrupt(32, isrRising32, RISING); break;}
    case 33: {enableInterrupt(33, isrRising33, RISING); break;}
    case 34: {enableInterrupt(34, isrRising34, RISING); break;}
    case 35: {enableInterrupt(35, isrRising35, RISING); break;}
    case 36: {enableInterrupt(36, isrRising36, RISING); break;}
    case 37: {enableInterrupt(37, isrRising37, RISING); break;}
    case 38: {enableInterrupt(38, isrRising38, RISING); break;}
    case 39: {enableInterrupt(39, isrRising39, RISING); break;}
    case 40: {enableInterrupt(40, isrRising40, RISING); break;}
    case 41: {enableInterrupt(41, isrRising41, RISING); break;}
    case 42: {enableInterrupt(42, isrRising42, RISING); break;}
    case 43: {enableInterrupt(43, isrRising43, RISING); break;}
    case 44: {enableInterrupt(44, isrRising44, RISING); break;}
    case 45: {enableInterrupt(45, isrRising45, RISING); break;}
    case 46: {enableInterrupt(46, isrRising46, RISING); break;}
    case 47: {enableInterrupt(47, isrRising47, RISING); break;}
    case 48: {enableInterrupt(48, isrRising48, RISING); break;}
    case 49: {enableInterrupt(49, isrRising49, RISING); break;}
    case 50: {enableInterrupt(50, isrRising50, RISING); break;}
    case 51: {enableInterrupt(51, isrRising51, RISING); break;}
    case 52: {enableInterrupt(52, isrRising52, RISING); break;}
    case 53: {enableInterrupt(53, isrRising53, RISING); break;}
  }
}

void PWMRead::getValue() {
  switch (pin) {
    case 0: {return pulsewidth_in_0;}
    case 1: {return pulsewidth_in_1;}
    case 2: {return pulsewidth_in_2;}
    case 3: {return pulsewidth_in_3;}
    case 4: {return pulsewidth_in_4;}
    case 5: {return pulsewidth_in_5;}
    case 6: {return pulsewidth_in_6;}
    case 7: {return pulsewidth_in_7;}
    case 8: {return pulsewidth_in_8;}
    case 9: {return pulsewidth_in_9;}
    case 10: {return pulsewidth_in_10;}
    case 11: {return pulsewidth_in_11;}
    case 12: {return pulsewidth_in_12;}
    case 13: {return pulsewidth_in_13;}
    case 14: {return pulsewidth_in_14;}
    case 15: {return pulsewidth_in_15;}
    case 16: {return pulsewidth_in_16;}
    case 17: {return pulsewidth_in_17;}
    case 18: {return pulsewidth_in_18;}
    case 19: {return pulsewidth_in_19;}
    case 20: {return pulsewidth_in_20;}
    case 21: {return pulsewidth_in_21;}
    case 22: {return pulsewidth_in_22;}
    case 23: {return pulsewidth_in_23;}
    case 24: {return pulsewidth_in_24;}
    case 25: {return pulsewidth_in_25;}
    case 26: {return pulsewidth_in_26;}
    case 27: {return pulsewidth_in_27;}
    case 28: {return pulsewidth_in_28;}
    case 29: {return pulsewidth_in_29;}
    case 30: {return pulsewidth_in_30;}
    case 31: {return pulsewidth_in_31;}
    case 32: {return pulsewidth_in_32;}
    case 33: {return pulsewidth_in_33;}
    case 34: {return pulsewidth_in_34;}
    case 35: {return pulsewidth_in_35;}
    case 36: {return pulsewidth_in_36;}
    case 37: {return pulsewidth_in_37;}
    case 38: {return pulsewidth_in_38;}
    case 39: {return pulsewidth_in_39;}
    case 40: {return pulsewidth_in_40;}
    case 41: {return pulsewidth_in_41;}
    case 42: {return pulsewidth_in_42;}
    case 43: {return pulsewidth_in_43;}
    case 44: {return pulsewidth_in_44;}
    case 45: {return pulsewidth_in_45;}
    case 46: {return pulsewidth_in_46;}
    case 47: {return pulsewidth_in_47;}
    case 48: {return pulsewidth_in_48;}
    case 49: {return pulsewidth_in_49;}
    case 50: {return pulsewidth_in_50;}
    case 51: {return pulsewidth_in_51;}
    case 52: {return pulsewidth_in_52;}
    case 53: {return pulsewidth_in_53;}
  }
}

// PIN 0
static volatile int pulsewidth_in_0 = -100;
static volatile long pulse_start_0;

extern void isrRising0() {
  pulse_start_0 = micros();
  disableInterrupt(0);
  enableInterrupt(0, isrFalling0, FALLING);
}

extern void isrFalling0() {
  pulsewidth_in_0 = micros() - pulse_start_0;
  disableInterrupt(0);
  enableInterrupt(0, isrRising0, RISING);
}

// PIN 1
static volatile int pulsewidth_in_1 = -100;
static volatile long pulse_start_1;

extern void isrRising1() {
  pulse_start_1 = micros();
  disableInterrupt(1);
  enableInterrupt(1, isrFalling1, FALLING);
}

extern void isrFalling1() {
  pulsewidth_in_1 = micros() - pulse_start_1;
  disableInterrupt(1);
  enableInterrupt(1, isrRising1, RISING);
}

// PIN 2
static volatile int pulsewidth_in_2 = -100;
static volatile long pulse_start_2;

extern void isrRising2() {
  pulse_start_2 = micros();
  disableInterrupt(2);
  enableInterrupt(2, isrFalling2, FALLING);
}

extern void isrFalling2() {
  pulsewidth_in_2 = micros() - pulse_start_2;
  disableInterrupt(2);
  enableInterrupt(2, isrRising2, RISING);
}

// PIN 3
static volatile int pulsewidth_in_3 = -100;
static volatile long pulse_start_3;

extern void isrRising3() {
  pulse_start_3 = micros();
  disableInterrupt(3);
  enableInterrupt(3, isrFalling3, FALLING);
}

extern void isrFalling3() {
  pulsewidth_in_3 = micros() - pulse_start_3;
  disableInterrupt(3);
  enableInterrupt(3, isrRising3, RISING);
}

// PIN 4
static volatile int pulsewidth_in_4 = -100;
static volatile long pulse_start_4;

extern void isrRising4() {
  pulse_start_4 = micros();
  disableInterrupt(4);
  enableInterrupt(4, isrFalling4, FALLING);
}

extern void isrFalling4() {
  pulsewidth_in_4 = micros() - pulse_start_4;
  disableInterrupt(4);
  enableInterrupt(4, isrRising4, RISING);
}

// PIN 5
static volatile int pulsewidth_in_5 = -100;
static volatile long pulse_start_5;

extern void isrRising5() {
  pulse_start_5 = micros();
  disableInterrupt(5);
  enableInterrupt(5, isrFalling5, FALLING);
}

extern void isrFalling5() {
  pulsewidth_in_5 = micros() - pulse_start_5;
  disableInterrupt(5);
  enableInterrupt(5, isrRising5, RISING);
}

// PIN 6
static volatile int pulsewidth_in_6 = -100;
static volatile long pulse_start_6;

extern void isrRising6() {
  pulse_start_6 = micros();
  disableInterrupt(6);
  enableInterrupt(6, isrFalling6, FALLING);
}

extern void isrFalling6() {
  pulsewidth_in_6 = micros() - pulse_start_6;
  disableInterrupt(6);
  enableInterrupt(6, isrRising6, RISING);
}

// PIN 7
static volatile int pulsewidth_in_7 = -100;
static volatile long pulse_start_7;

extern void isrRising7() {
  pulse_start_7 = micros();
  disableInterrupt(7);
  enableInterrupt(7, isrFalling7, FALLING);
}

extern void isrFalling7() {
  pulsewidth_in_7 = micros() - pulse_start_7;
  disableInterrupt(7);
  enableInterrupt(7, isrRising7, RISING);
}

// PIN 8
static volatile int pulsewidth_in_8 = -100;
static volatile long pulse_start_8;

extern void isrRising8() {
  pulse_start_8 = micros();
  disableInterrupt(8);
  enableInterrupt(8, isrFalling8, FALLING);
}

extern void isrFalling8() {
  pulsewidth_in_8 = micros() - pulse_start_8;
  disableInterrupt(8);
  enableInterrupt(8, isrRising8, RISING);
}

// PIN 9
static volatile int pulsewidth_in_9 = -100;
static volatile long pulse_start_9;

extern void isrRising9() {
  pulse_start_9 = micros();
  disableInterrupt(9);
  enableInterrupt(9, isrFalling9, FALLING);
}

extern void isrFalling9() {
  pulsewidth_in_9 = micros() - pulse_start_9;
  disableInterrupt(9);
  enableInterrupt(9, isrRising9, RISING);
}

// PIN 10
static volatile int pulsewidth_in_10 = -100;
static volatile long pulse_start_10;

extern void isrRising10() {
  pulse_start_10 = micros();
  disableInterrupt(10);
  enableInterrupt(10, isrFalling10, FALLING);
}

extern void isrFalling10() {
  pulsewidth_in_10 = micros() - pulse_start_10;
  disableInterrupt(10);
  enableInterrupt(10, isrRising10, RISING);
}

// PIN 11
static volatile int pulsewidth_in_11 = -100;
static volatile long pulse_start_11;

extern void isrRising11() {
  pulse_start_11 = micros();
  disableInterrupt(11);
  enableInterrupt(11, isrFalling11, FALLING);
}

extern void isrFalling11() {
  pulsewidth_in_11 = micros() - pulse_start_11;
  disableInterrupt(11);
  enableInterrupt(11, isrRising11, RISING);
}

// PIN 12
static volatile int pulsewidth_in_12 = -100;
static volatile long pulse_start_12;

extern void isrRising12() {
  pulse_start_12 = micros();
  disableInterrupt(12);
  enableInterrupt(12, isrFalling12, FALLING);
}

extern void isrFalling12() {
  pulsewidth_in_12 = micros() - pulse_start_12;
  disableInterrupt(12);
  enableInterrupt(12, isrRising12, RISING);
}

// PIN 13
static volatile int pulsewidth_in_13 = -100;
static volatile long pulse_start_13;

extern void isrRising13() {
  pulse_start_13 = micros();
  disableInterrupt(13);
  enableInterrupt(13, isrFalling13, FALLING);
}

extern void isrFalling13() {
  pulsewidth_in_13 = micros() - pulse_start_13;
  disableInterrupt(13);
  enableInterrupt(13, isrRising13, RISING);
}

// PIN 14
static volatile int pulsewidth_in_14 = -100;
static volatile long pulse_start_14;

extern void isrRising14() {
  pulse_start_14 = micros();
  disableInterrupt(14);
  enableInterrupt(14, isrFalling14, FALLING);
}

extern void isrFalling14() {
  pulsewidth_in_14 = micros() - pulse_start_14;
  disableInterrupt(14);
  enableInterrupt(14, isrRising14, RISING);
}

// PIN 15
static volatile int pulsewidth_in_15 = -100;
static volatile long pulse_start_15;

extern void isrRising15() {
  pulse_start_15 = micros();
  disableInterrupt(15);
  enableInterrupt(15, isrFalling15, FALLING);
}

extern void isrFalling15() {
  pulsewidth_in_15 = micros() - pulse_start_15;
  disableInterrupt(15);
  enableInterrupt(15, isrRising15, RISING);
}

// PIN 16
static volatile int pulsewidth_in_16 = -100;
static volatile long pulse_start_16;

extern void isrRising16() {
  pulse_start_16 = micros();
  disableInterrupt(16);
  enableInterrupt(16, isrFalling16, FALLING);
}

extern void isrFalling16() {
  pulsewidth_in_16 = micros() - pulse_start_16;
  disableInterrupt(16);
  enableInterrupt(16, isrRising16, RISING);
}

// PIN 17
static volatile int pulsewidth_in_17 = -100;
static volatile long pulse_start_17;

extern void isrRising17() {
  pulse_start_17 = micros();
  disableInterrupt(17);
  enableInterrupt(17, isrFalling17, FALLING);
}

extern void isrFalling17() {
  pulsewidth_in_17 = micros() - pulse_start_17;
  disableInterrupt(17);
  enableInterrupt(17, isrRising17, RISING);
}

// PIN 18
static volatile int pulsewidth_in_18 = -100;
static volatile long pulse_start_18;

extern void isrRising18() {
  pulse_start_18 = micros();
  disableInterrupt(18);
  enableInterrupt(18, isrFalling18, FALLING);
}

extern void isrFalling18() {
  pulsewidth_in_18 = micros() - pulse_start_18;
  disableInterrupt(18);
  enableInterrupt(18, isrRising18, RISING);
}

// PIN 19
static volatile int pulsewidth_in_19 = -100;
static volatile long pulse_start_19;

extern void isrRising19() {
  pulse_start_19 = micros();
  disableInterrupt(19);
  enableInterrupt(19, isrFalling19, FALLING);
}

extern void isrFalling19() {
  pulsewidth_in_19 = micros() - pulse_start_19;
  disableInterrupt(19);
  enableInterrupt(19, isrRising19, RISING);
}

// PIN 20
static volatile int pulsewidth_in_20 = -100;
static volatile long pulse_start_20;

extern void isrRising20() {
  pulse_start_20 = micros();
  disableInterrupt(20);
  enableInterrupt(20, isrFalling20, FALLING);
}

extern void isrFalling20() {
  pulsewidth_in_20 = micros() - pulse_start_20;
  disableInterrupt(20);
  enableInterrupt(20, isrRising20, RISING);
}

// PIN 21
static volatile int pulsewidth_in_21 = -100;
static volatile long pulse_start_21;

extern void isrRising21() {
  pulse_start_21 = micros();
  disableInterrupt(21);
  enableInterrupt(21, isrFalling21, FALLING);
}

extern void isrFalling21() {
  pulsewidth_in_21 = micros() - pulse_start_21;
  disableInterrupt(21);
  enableInterrupt(21, isrRising21, RISING);
}

// PIN 22
static volatile int pulsewidth_in_22 = -100;
static volatile long pulse_start_22;

extern void isrRising22() {
  pulse_start_22 = micros();
  disableInterrupt(22);
  enableInterrupt(22, isrFalling22, FALLING);
}

extern void isrFalling22() {
  pulsewidth_in_22 = micros() - pulse_start_22;
  disableInterrupt(22);
  enableInterrupt(22, isrRising22, RISING);
}

// PIN 23
static volatile int pulsewidth_in_23 = -100;
static volatile long pulse_start_23;

extern void isrRising23() {
  pulse_start_23 = micros();
  disableInterrupt(23);
  enableInterrupt(23, isrFalling23, FALLING);
}

extern void isrFalling23() {
  pulsewidth_in_23 = micros() - pulse_start_23;
  disableInterrupt(23);
  enableInterrupt(23, isrRising23, RISING);
}

// PIN 24
static volatile int pulsewidth_in_24 = -100;
static volatile long pulse_start_24;

extern void isrRising24() {
  pulse_start_24 = micros();
  disableInterrupt(24);
  enableInterrupt(24, isrFalling24, FALLING);
}

extern void isrFalling24() {
  pulsewidth_in_24 = micros() - pulse_start_24;
  disableInterrupt(24);
  enableInterrupt(24, isrRising24, RISING);
}

// PIN 25
static volatile int pulsewidth_in_25 = -100;
static volatile long pulse_start_25;

extern void isrRising25() {
  pulse_start_25 = micros();
  disableInterrupt(25);
  enableInterrupt(25, isrFalling25, FALLING);
}

extern void isrFalling25() {
  pulsewidth_in_25 = micros() - pulse_start_25;
  disableInterrupt(25);
  enableInterrupt(25, isrRising25, RISING);
}

// PIN 26
static volatile int pulsewidth_in_26 = -100;
static volatile long pulse_start_26;

extern void isrRising26() {
  pulse_start_26 = micros();
  disableInterrupt(26);
  enableInterrupt(26, isrFalling26, FALLING);
}

extern void isrFalling26() {
  pulsewidth_in_26 = micros() - pulse_start_26;
  disableInterrupt(26);
  enableInterrupt(26, isrRising26, RISING);
}

// PIN 27
static volatile int pulsewidth_in_27 = -100;
static volatile long pulse_start_27;

extern void isrRising27() {
  pulse_start_27 = micros();
  disableInterrupt(27);
  enableInterrupt(27, isrFalling27, FALLING);
}

extern void isrFalling27() {
  pulsewidth_in_27 = micros() - pulse_start_27;
  disableInterrupt(27);
  enableInterrupt(27, isrRising27, RISING);
}

// PIN 28
static volatile int pulsewidth_in_28 = -100;
static volatile long pulse_start_28;

extern void isrRising28() {
  pulse_start_28 = micros();
  disableInterrupt(28);
  enableInterrupt(28, isrFalling28, FALLING);
}

extern void isrFalling28() {
  pulsewidth_in_28 = micros() - pulse_start_28;
  disableInterrupt(28);
  enableInterrupt(28, isrRising28, RISING);
}

// PIN 29
static volatile int pulsewidth_in_29 = -100;
static volatile long pulse_start_29;

extern void isrRising29() {
  pulse_start_29 = micros();
  disableInterrupt(29);
  enableInterrupt(29, isrFalling29, FALLING);
}

extern void isrFalling29() {
  pulsewidth_in_29 = micros() - pulse_start_29;
  disableInterrupt(29);
  enableInterrupt(29, isrRising29, RISING);
}

// PIN 30
static volatile int pulsewidth_in_30 = -100;
static volatile long pulse_start_30;

extern void isrRising30() {
  pulse_start_30 = micros();
  disableInterrupt(30);
  enableInterrupt(30, isrFalling30, FALLING);
}

extern void isrFalling30() {
  pulsewidth_in_30 = micros() - pulse_start_30;
  disableInterrupt(30);
  enableInterrupt(30, isrRising30, RISING);
}

// PIN 31
static volatile int pulsewidth_in_31 = -100;
static volatile long pulse_start_31;

extern void isrRising31() {
  pulse_start_31 = micros();
  disableInterrupt(31);
  enableInterrupt(31, isrFalling31, FALLING);
}

extern void isrFalling31() {
  pulsewidth_in_31 = micros() - pulse_start_31;
  disableInterrupt(31);
  enableInterrupt(31, isrRising31, RISING);
}

// PIN 32
static volatile int pulsewidth_in_32 = -100;
static volatile long pulse_start_32;

extern void isrRising32() {
  pulse_start_32 = micros();
  disableInterrupt(32);
  enableInterrupt(32, isrFalling32, FALLING);
}

extern void isrFalling32() {
  pulsewidth_in_32 = micros() - pulse_start_32;
  disableInterrupt(32);
  enableInterrupt(32, isrRising32, RISING);
}

// PIN 33
static volatile int pulsewidth_in_33 = -100;
static volatile long pulse_start_33;

extern void isrRising33() {
  pulse_start_33 = micros();
  disableInterrupt(33);
  enableInterrupt(33, isrFalling33, FALLING);
}

extern void isrFalling33() {
  pulsewidth_in_33 = micros() - pulse_start_33;
  disableInterrupt(33);
  enableInterrupt(33, isrRising33, RISING);
}

// PIN 34
static volatile int pulsewidth_in_34 = -100;
static volatile long pulse_start_34;

extern void isrRising34() {
  pulse_start_34 = micros();
  disableInterrupt(34);
  enableInterrupt(34, isrFalling34, FALLING);
}

extern void isrFalling34() {
  pulsewidth_in_34 = micros() - pulse_start_34;
  disableInterrupt(34);
  enableInterrupt(34, isrRising34, RISING);
}

// PIN 35
static volatile int pulsewidth_in_35 = -100;
static volatile long pulse_start_35;

extern void isrRising35() {
  pulse_start_35 = micros();
  disableInterrupt(35);
  enableInterrupt(35, isrFalling35, FALLING);
}

extern void isrFalling35() {
  pulsewidth_in_35 = micros() - pulse_start_35;
  disableInterrupt(35);
  enableInterrupt(35, isrRising35, RISING);
}

// PIN 36
static volatile int pulsewidth_in_36 = -100;
static volatile long pulse_start_36;

extern void isrRising36() {
  pulse_start_36 = micros();
  disableInterrupt(36);
  enableInterrupt(36, isrFalling36, FALLING);
}

extern void isrFalling36() {
  pulsewidth_in_36 = micros() - pulse_start_36;
  disableInterrupt(36);
  enableInterrupt(36, isrRising36, RISING);
}

// PIN 37
static volatile int pulsewidth_in_37 = -100;
static volatile long pulse_start_37;

extern void isrRising37() {
  pulse_start_37 = micros();
  disableInterrupt(37);
  enableInterrupt(37, isrFalling37, FALLING);
}

extern void isrFalling37() {
  pulsewidth_in_37 = micros() - pulse_start_37;
  disableInterrupt(37);
  enableInterrupt(37, isrRising37, RISING);
}

// PIN 38
static volatile int pulsewidth_in_38 = -100;
static volatile long pulse_start_38;

extern void isrRising38() {
  pulse_start_38 = micros();
  disableInterrupt(38);
  enableInterrupt(38, isrFalling38, FALLING);
}

extern void isrFalling38() {
  pulsewidth_in_38 = micros() - pulse_start_38;
  disableInterrupt(38);
  enableInterrupt(38, isrRising38, RISING);
}

// PIN 39
static volatile int pulsewidth_in_39 = -100;
static volatile long pulse_start_39;

extern void isrRising39() {
  pulse_start_39 = micros();
  disableInterrupt(39);
  enableInterrupt(39, isrFalling39, FALLING);
}

extern void isrFalling39() {
  pulsewidth_in_39 = micros() - pulse_start_39;
  disableInterrupt(39);
  enableInterrupt(39, isrRising39, RISING);
}

// PIN 40
static volatile int pulsewidth_in_40 = -100;
static volatile long pulse_start_40;

extern void isrRising40() {
  pulse_start_40 = micros();
  disableInterrupt(40);
  enableInterrupt(40, isrFalling40, FALLING);
}

extern void isrFalling40() {
  pulsewidth_in_40 = micros() - pulse_start_40;
  disableInterrupt(40);
  enableInterrupt(40, isrRising40, RISING);
}

// PIN 41
static volatile int pulsewidth_in_41 = -100;
static volatile long pulse_start_41;

extern void isrRising41() {
  pulse_start_41 = micros();
  disableInterrupt(41);
  enableInterrupt(41, isrFalling41, FALLING);
}

extern void isrFalling41() {
  pulsewidth_in_41 = micros() - pulse_start_41;
  disableInterrupt(41);
  enableInterrupt(41, isrRising41, RISING);
}

// PIN 42
static volatile int pulsewidth_in_42 = -100;
static volatile long pulse_start_42;

extern void isrRising42() {
  pulse_start_42 = micros();
  disableInterrupt(42);
  enableInterrupt(42, isrFalling42, FALLING);
}

extern void isrFalling42() {
  pulsewidth_in_42 = micros() - pulse_start_42;
  disableInterrupt(42);
  enableInterrupt(42, isrRising42, RISING);
}

// PIN 43
static volatile int pulsewidth_in_43 = -100;
static volatile long pulse_start_43;

extern void isrRising43() {
  pulse_start_43 = micros();
  disableInterrupt(43);
  enableInterrupt(43, isrFalling43, FALLING);
}

extern void isrFalling43() {
  pulsewidth_in_43 = micros() - pulse_start_43;
  disableInterrupt(43);
  enableInterrupt(43, isrRising43, RISING);
}

// PIN 44
static volatile int pulsewidth_in_44 = -100;
static volatile long pulse_start_44;

extern void isrRising44() {
  pulse_start_44 = micros();
  disableInterrupt(44);
  enableInterrupt(44, isrFalling44, FALLING);
}

extern void isrFalling44() {
  pulsewidth_in_44 = micros() - pulse_start_44;
  disableInterrupt(44);
  enableInterrupt(44, isrRising44, RISING);
}

// PIN 45
static volatile int pulsewidth_in_45 = -100;
static volatile long pulse_start_45;

extern void isrRising45() {
  pulse_start_45 = micros();
  disableInterrupt(45);
  enableInterrupt(45, isrFalling45, FALLING);
}

extern void isrFalling45() {
  pulsewidth_in_45 = micros() - pulse_start_45;
  disableInterrupt(45);
  enableInterrupt(45, isrRising45, RISING);
}

// PIN 46
static volatile int pulsewidth_in_46 = -100;
static volatile long pulse_start_46;

extern void isrRising46() {
  pulse_start_46 = micros();
  disableInterrupt(46);
  enableInterrupt(46, isrFalling46, FALLING);
}

extern void isrFalling46() {
  pulsewidth_in_46 = micros() - pulse_start_46;
  disableInterrupt(46);
  enableInterrupt(46, isrRising46, RISING);
}

// PIN 47
static volatile int pulsewidth_in_47 = -100;
static volatile long pulse_start_47;

extern void isrRising47() {
  pulse_start_47 = micros();
  disableInterrupt(47);
  enableInterrupt(47, isrFalling47, FALLING);
}

extern void isrFalling47() {
  pulsewidth_in_47 = micros() - pulse_start_47;
  disableInterrupt(47);
  enableInterrupt(47, isrRising47, RISING);
}

// PIN 48
static volatile int pulsewidth_in_48 = -100;
static volatile long pulse_start_48;

extern void isrRising48() {
  pulse_start_48 = micros();
  disableInterrupt(48);
  enableInterrupt(48, isrFalling48, FALLING);
}

extern void isrFalling48() {
  pulsewidth_in_48 = micros() - pulse_start_48;
  disableInterrupt(48);
  enableInterrupt(48, isrRising48, RISING);
}

// PIN 49
static volatile int pulsewidth_in_49 = -100;
static volatile long pulse_start_49;

extern void isrRising49() {
  pulse_start_49 = micros();
  disableInterrupt(49);
  enableInterrupt(49, isrFalling49, FALLING);
}

extern void isrFalling49() {
  pulsewidth_in_49 = micros() - pulse_start_49;
  disableInterrupt(49);
  enableInterrupt(49, isrRising49, RISING);
}

// PIN 50
static volatile int pulsewidth_in_50 = -100;
static volatile long pulse_start_50;

extern void isrRising50() {
  pulse_start_50 = micros();
  disableInterrupt(50);
  enableInterrupt(50, isrFalling50, FALLING);
}

extern void isrFalling50() {
  pulsewidth_in_50 = micros() - pulse_start_50;
  disableInterrupt(50);
  enableInterrupt(50, isrRising50, RISING);
}

// PIN 51
static volatile int pulsewidth_in_51 = -100;
static volatile long pulse_start_51;

extern void isrRising51() {
  pulse_start_51 = micros();
  disableInterrupt(51);
  enableInterrupt(51, isrFalling51, FALLING);
}

extern void isrFalling51() {
  pulsewidth_in_51 = micros() - pulse_start_51;
  disableInterrupt(51);
  enableInterrupt(51, isrRising51, RISING);
}

// PIN 52
static volatile int pulsewidth_in_52 = -100;
static volatile long pulse_start_52;

extern void isrRising52() {
  pulse_start_52 = micros();
  disableInterrupt(52);
  enableInterrupt(52, isrFalling52, FALLING);
}

extern void isrFalling52() {
  pulsewidth_in_52 = micros() - pulse_start_52;
  disableInterrupt(52);
  enableInterrupt(52, isrRising52, RISING);
}

// PIN 53
static volatile int pulsewidth_in_53 = -100;
static volatile long pulse_start_53;

extern void isrRising53() {
  pulse_start_53 = micros();
  disableInterrupt(53);
  enableInterrupt(53, isrFalling53, FALLING);
}

extern void isrFalling53() {
  pulsewidth_in_53 = micros() - pulse_start_53;
  disableInterrupt(53);
  enableInterrupt(53, isrRising53, RISING);
}

