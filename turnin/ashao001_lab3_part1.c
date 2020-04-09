/*	Author: ashao001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0X00; PORTA = 0XFF; //input
	DDRB = 0x00; PORTB = 0XFF; //input
	DDRC = 0XFF; PORTC = 0X00; //OUTPUT
    /* Insert your solution below */
    unsigned char countA, tempA;
    countA = 0x00;
    while (1) {
	if((PINA & 0x01) == 0x01){
		countA++;
	}	
	if((PINA & 0x02) == 0x02){
		countA++;
	}
	if((PINA & 0x04) == 0x04){
		countA++;
	}
	if((PINA & 0x08) == 0x08){
		countA++;
	}
	if((PINA & 0x10) == 0x10){
		countA++;
	}
	if((PINA & 0x20) == 0x20){
		countA++;
	}
	if((PINA & 0x40) == 0x40){
		countA++;
	}
	if((PINA & 0x80) == 0x80){
		countA++;
	}	
	//PINB
	if((PINB & 0x01) == 0x01){
                countA++;
}
	 if((PINB & 0x02) == 0x02){
countA++;
}
        if((PINB & 0x04) == 0x04){
countA++; 
}  
if((PINB & 0x08) == 0x08){
                countA++;
}
        if((PINB & 0x10) == 0x10){
                countA++;
}
        if((PINB & 0x20) == 0x20){
                countA++;
        }
        if((PINB & 0x40) == 0x40){
                countA++;
        }
	if((PINB & 0x80) == 0x80){
		countA++;
	}
	
	PORTC = countA;
	countA = 0x00;
    }
    return 1;
}
