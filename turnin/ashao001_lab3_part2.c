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
    unsigned char countA, lvlcnt, countB, tempA;
    countA = 0x00;
    countB = 0x00;
    lvlcnt = 0;
    while (1) {
	if((PINA & 0x01) == 0x01){
		countA++;
		lvlcnt++;
	}	
	if((PINA & 0x02) == 0x02){
		countA++;
		lvlcnt++;
	}
	if((PINA & 0x04) == 0x04){
		countA++;
		lvlcnt++;
	}
	if((PINA & 0x08) == 0x08){
		countA++;
		lvlcnt++;
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
                countB++;
}
	 if((PINB & 0x02) == 0x02){
countB++;
}
        if((PINB & 0x04) == 0x04){
countB++; 
}  
if((PINB & 0x08) == 0x08){
                countB++;
}
        if((PINB & 0x10) == 0x10){
                countB++;
}
        if((PINB & 0x20) == 0x20){
                countB++;
        }
        if((PINB & 0x40) == 0x40){
                countB++;
        }
	if((PINB & 0x80) == 0x80){
		countB++;
	}
	
	//for exercise 2
	if((((PINA & 0x01)==0x01) || ((PINA & 0x02) == 0x02))&& (lvlcnt == 1 )){
	PORTC = 0X60; //1 or 2
	}
	if( (((PINA & 0x03)==0x03) && (lvlcnt == 2)) || (((PINA & 0x04)==0x04) && (lvlcnt == 1)) ){
	PORTC = 0x70; // 3 or 4
	}
	if( (((PINA & 0x05)==0x05) && (lvlcnt == 2)) || (((PINA & 0x06)==0x06) && (lvlcnt == 2)) ){
	PORTC = 0x38; //5 or 6
	}
	if( (((PINA & 0x07)==0x07) && (lvlcnt == 3)) || (((PINA & 0x08)==0x08) && (lvlcnt == 1)) || (((PINA & 0x09)==0x09) && (lvlcnt == 2)) ){
	PORTC = 0X3C; // 7 or 8 or 9
	}
	if( (((PINA & 0x0A)==0x0A) && (lvlcnt == 2)) || (((PINA & 0x0B)==0x0B) && (lvlcnt == 3)) || (((PINA & 0x0C)==0x0C) && (lvlcnt == 2)) ){
	PORTC = 0X3E; // 10 or 11 or 12
	}
	if( (((PINA & 0x0D)==0x0D) && (lvlcnt == 3)) || (((PINA & 0x0E)==0x0E) && (lvlcnt == 3)) || (((PINA & 0x0F)==0x0F) && (lvlcnt == 4)) ){
	PORTC = 0x3F;
	}

	//PORTC = countA + countB;
	countA = 0x00;
	countB = 0x00;
	lvlcnt = 0;
    }
    return 1;
}
