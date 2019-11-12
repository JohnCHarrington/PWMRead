# Introduction
This library uses RISING/FALLING interrupts to read PWM on any digital pin. The main purpose of this library is to simplify code for reading any PWM device, with high speed operation through interrupts. This library depends on the [EnableInterrupt](https://github.com/GreyGnome/EnableInterrupt) library.

This uses a slightly modified version of the [RcChannel](https://github.com/shah253kt/arduino-rc-receiver) library to give a simple and easy to use interface, and can also function as a high speed version of that library. I have published it under this new name as I find the same interface to be useful for all PWM devices, not just RC receivers.

# How to Use It
Please take a look at the examples provided.

# Functions
## Constructors
```cpp
PWMRead(byte pin, short minVal = 1100, short midVal = 1500, short maxVal = 1900);

//You may initialize your code like the following if you want to use the default min, mid and max values:
PWMRead pwm(4);

//If you want to supply your own set of values:
PWMRead pwm(4, 1000, 1500, 2000);
```

## Calibrations
When doing calibration, you should move the sticks in both directions for each channel.
```cpp
//For when you have multiple channels to calibrate
PWMRead pwm[] = {4, 5};

while(millis() < 5000) {
	pwm[0].calibrate();
	pwm[1].calibrate();
}

//For single channel
PWMRead pwm(4);

pwm.calibrate(5000); //This will calibrate this channel for 5 seconds. Note that this function is blocking.
```

## Readings
You have 2 options for reading the value of the channel; **RAW** or **PERCENTAGE**.
```cpp
//For reading raw data:
ch.readRaw();

//For reading percentage:
ch.readPercentage(); //This value returns value between -100 to 100. 0 being the middle value.
```

## Setters and Getters
### Tolerance
The tolerance allows the library to treat values within *-tolerance* and *+tolerance* as 0. This is to avoid value noise when the stick remain at the center. By default, the tolerance is set to **50**.
```cpp
//Setter
ch.setTolerance(100);

//Getter
ch.getTolerance();
```

### Min, Mid and Max Values
Min, Mid and Max values refers to the duration that the signal goes HIGH. Usually, for PPM signal, the value is around 1000 to 2000 microseconds. Some controllers may defer. That is the purpose of these functions.
```cpp
//Setter
ch.setMinVal(950);
ch.setMidVal(1550);
ch.setMaxVal(2000);

//Getter
ch.getMinVal();
ch.getMidVal();
ch.getMaxVal();
```

