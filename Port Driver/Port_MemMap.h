/********************************************************************************
 **                                                                             
 **  FOLDERNAME	  : Port_MemMap.h         									    
 **                                                                             
 **  VERSION      : 1.0.0                                                       
 **                                                                             
 **  DATE         : 2019-11-9                                                  
 **                                                                                                                                                          
 **  PLATFORM     : AVR ATmega32                                                
 **                                                                             
 **  AUTHOR       : Abdelrahman Hafez.	                                        
 **                                                                             
 **  VENDOR       : Abdelrahman Hafez Co.LTD							        
 **                                                                                                                                                        
 **  DESCRIPTION  : Port Driver Memory Mapped Regs file										
 **                                                                             
 **  SPECS        : Manuale coded									            
 **                                                                             
 **  MAY BE CHANGED BY USER : No                                                
 **															                    
 ********************************************************************************/

#ifndef PORT_MEMMAP_H
#define PORT_MEMMAP_H

#include "Std_Types.h"

/* Definition for PORTA Registers */
#define PORTA_REG	(*(volatile uint8 *)0x003B)
#define DDRA_REG	(*(volatile uint8 *)0x003A)
#define PINA_REG 	(*(volatile uint8 *)0x0039)

/* Definition for PORTB Registers */
#define PORTB_REG	(*(volatile uint8 *)0x0038)
#define DDRB_REG	(*(volatile uint8 *)0x0037)
#define PINB_REG 	(*(volatile uint8 *)0x0036)

/* Definition for PORTC Registers */
#define PORTC_REG	(*(volatile uint8 *)0x0035)
#define DDRC_REG	(*(volatile uint8 *)0x0034)
#define PINC_REG 	(*(volatile uint8 *)0x0033)

/* Definition for PORTD Registers */
#define PORTD_REG	(*(volatile uint8 *)0x0032)
#define DDRD_REG	(*(volatile uint8 *)0x0031)
#define PIND_REG 	(*(volatile uint8 *)0x0030)

#endif /* PORT_MEMMAP_H */
