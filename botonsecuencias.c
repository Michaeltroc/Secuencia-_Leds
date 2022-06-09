/* 
 * File:   secuencias.c
 * Author: 57310
 *
 * Created on 6 de junio de 2022, 08:57 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "pic18f4550.h"

# define _XTAL_FREQ 48000000

void delayms900 (void);
void delayms1000(void);

void main (void){
    ADCON1 = 0b00001111;
    TRISD  = 0b00000000;
    
    if(PORTAbits.RA1 == 1){
    
    PORTD = 0b10000000;
    delayms1000();
    
    PORTD = 0b01000000;
    delayms1000();
    
    PORTD = 0b00100000;
    delayms1000();
    
    PORTD = 0b00010000;
    delayms1000();
    
    PORTD = 0b00001000;
    delayms1000();
    
    PORTD = 0b00000100;
    delayms1000();
    
    PORTD = 0b00000010;
    delayms1000();
    
    PORTD = 0b00000001;
    delayms1000();
    
    }
    
        else if(PORTAbits.RA0 == 1){
    
     PORTD = 0b10000001;
     delayms900();
    
     PORTD = 0b01000010;
     delayms1000();
     
    
     PORTD = 0b00100100;
     delayms900();
     
     PORTD = 0b00011000;
     delayms900();
     
     PORTD = 0b00000000;
     delayms900();
     
     PORTD = 0b11111111;
     delayms900();
     
        
    }
    
    else 
    
         PORTD = 0b00000000;    
}
    
void delayms1000 (void){
    
    __delay_ms(7);
    __delay_ms(7);
    __delay_ms(7);
    __delay_ms(7);
    __delay_ms(7);
}

void delayms900(void){
    
    __delay_ms(6);
    __delay_ms(6);
    __delay_ms(6);
    
}
                        
                        


    


