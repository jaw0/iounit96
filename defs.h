
typedef unsignef char u_char;

#define MHz 8			/* CPU speed*/
#define INT_TIME 500		/* usec per timer int*/
#define WAIT_SECS 60		/* sec before abort in chinput*/
#define __PI 314159		/* pi * 100000*/
#define TIMER_COMMAND 00011000b	/* hso start timer command*/

#define TIMER_NUM ((MHz*int_time)/(3*8))	/* value for timer count*/
			/* 8095 is 3 osc / state time (196 is 2)*/
#define TIMER_COUNT -timer_num	
#define WAIT_MAX ( wait_secs*1000000/(int_time*256) )
#define RST_WARM 0x1234	/* warm reset flag*/


/* define adresses of devices*/

#define PPI_A0 0x1000
#define PPI_A1 0x1001
#define PPI_A2 0x1002
#define PPI_AC 0x1003

#define PPI_B0 0x1100
#define PPI_B1 0x1101
#define PPI_B2 0x1102
#define PPI_BC 0x1103

#define PIT_A0 0x1200
#define PIT_A1 0x1201
#define PIT_A2 0x1202
#define PIT_AC 0x1203

/* #define 		equ 0x1300	; future expansion*/
/* #define 		equ 0x1400	; ditto*/

#define DAC_A0 0x1500
#define /*		equ 0x1600	; fut. exp. (ADC)*/
#define LCD_A0 0x1700

#define REG_START 0x001A
#define REG_LAST 0x00FF
#define ROM_START 0x2000
#define ROM_LAST 0x3FFF
#define RAM_START 0xE000
#define RAM_LAST 0xFFFF


	/* define various bits*/
#define RI_BIT	6
#define TI_BIT	5
#define ADC_GO 	3
#define SEL_TXD 	5
#define SEL_PWM 	0
#define INT_SIO	6
#define INT_ADC	1
#define INT_TIMER	5
#define INT_EXTINT	7
#define INT_HSI	2
#define INT_HSO	3
#define CFLG_GOTIT 	0
#define CFLG_OV	1

	/* ascii cntl chars*/
#define nul 0
#define null 0
#define eot 4
#define enq 5
#define ack 6
#define bel 7
#define nl 0xA
#define cr 0xD
#define esc 0x1B

short timeto;
u_char sp_stat_image, char_flag;
