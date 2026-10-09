#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    // Set PB1 as output (OC1A)
    DDRB |= (1 << DDB1);

    // Fast PWM, 8-bit
    TCCR1A |= (1 << WGM10);
    TCCR1B |= (1 << WGM12);

    // Non-inverting mode on OC1A
    TCCR1A |= (1 << COM1A1);

    // Prescaler = 8
    TCCR1B |= (1 << CS11);

    while (1) {
        for (uint8_t i = 0; i < 255; i++) {
            OCR1A = i;
            _delay_ms(5);
        }
        for (uint8_t i = 255; i > 0; i--) {
            OCR1A = i;
            _delay_ms(5);
        }
    }
    return 0;
}