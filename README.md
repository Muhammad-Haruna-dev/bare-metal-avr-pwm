# bare-metal-avr-pwm
Bare-metal AVR PWM driver with direct register access

Bare-Metal AVR PWM

A PWM driver for the ATmega328P (Arduino Uno) written in bare-metal C with direct register access — no Arduino libraries.

Overview

This project configures the ATmega328P’s hardware timers and GPIO registers directly to generate PWM signals, demonstrating low-level embedded control without the Arduino abstraction layer.

Features
Direct register manipulation for GPIO and timers
Hardware PWM via Timer/Counter compare-match output
Adjustable duty cycle and frequency
No dependencies on the Arduino core
Hardware
Arduino Uno (ATmega328P)
LED and 220-ohm resistor for output testing
Build & Flash

Compile with avr-gcc and flash using avrdude.