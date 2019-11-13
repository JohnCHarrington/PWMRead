/*
Author: Ahmad Shahril
Date: 26/02/2018
Description: This library is made for using RC receiver with Arduino.

Modified by John Harrington for use with all PWM inputs
*/

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "PWMRead.h"
#include "PWMInterrupts.hpp"

PWMRead::PWMRead(byte pin, short minVal, short midVal, short maxVal):
  pwm(pin), minVal(minVal), midVal(midVal), maxVal(maxVal) {
    tolerance = 50;
}

void PWMRead::calibrate() {
  short reading = readRaw();

  if(reading < minVal) {
    minVal = reading;
  }

  if(reading > maxVal) {
    maxVal = reading;
  }

  midVal = ((maxVal - minVal) / 2) + minVal;
}

void PWMRead::calibrate(unsigned long duration) {
  unsigned long calibrateStart = millis();

  while (millis() - calibrateStart < duration) {
    calibrate();
  }
}

short PWMRead::readRaw() {
  return pwm.getVal();
}

short PWMRead::readPercentage() {
  short reading = constrain(readRaw(), minVal, maxVal);

  if(reading <= midVal + tolerance && reading >= midVal - tolerance) {
    return 0;
  }
  else {
    return map(reading, minVal, maxVal, -100, 100);
  }
}

void PWMRead::setTolerance(short toleranceVal){
  tolerance = toleranceVal;
}

void PWMRead::setMinVal(short val) {
  minVal = val;
}

void PWMRead::setMidVal(short val) {
  midVal = val;
}

void PWMRead::setMaxVal(short val) {
  maxVal = val;
}

short PWMRead::getToleranceVal() {
  return tolerance;
}

short PWMRead::getMinVal() {
  return minVal;
}

short PWMRead::getMidVal() {
  return midVal;
}

short PWMRead::getMaxVal() {
  return maxVal;
}
