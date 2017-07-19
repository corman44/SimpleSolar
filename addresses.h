/*  addresses.h
 *
 *  Author: CEEJ
 *  Description: Includes memory address locations for the efm8bb1 MCU
 */

#ifndef ADDRESSES_H
#define ADDRESSES_H

/* ADC Addresses  */
const char r_ADC0AC   =  0xB3; //ADC0 Accumulator Config
const char r_ADC0CF   =  0xBC; //ADC0 Config
const char r_ADC0CN0  =  0xE8; //ADC0 Control 0
const char r_ADC0CN1  =  0xB2; //ADC0 Control 1
const char r_ADC0GTH  =  0xC4; //ADC0 Greater-Than High char
const char r_ADC0FTL  =  0xC3; //ADC0 Greater-than Low char
const char r_ADC0H    =  0xBE; //ADC0 data word high char
const char r_ADC0L    =  0xBD; //ADC0 data word low char
const char r_ADC0LTH  =  0xC6; //ADC0 Less-Than high char
const char r_ADC0LTL  =  0xC5; //ADC0 Less-than low char
const char r_ADC0MX   =  0xBB; //ADC0 Mux Selection
const char r_ADC0PWR  =  0xDF; //ADC0 Power Control

/*  Comparator 0  */
const char r_CMP0CN0  =  0x9B; //Comparator 0 Control 0
const char r_CMP0MD   =  0x9D; //Comparator 0 Mode
const char r_CMP0MX   =  0x9F; //Comparator 0 Mux Select

/* Comparator 1 */
const char r_CMP1CN0  =  0xBF; //Comparator 1 Control 0
const char r_CMP1MD   =  0xAB; //Comparator 1 Mode
const char r_CMP1MX   =  0xAA; //Comparator 1 Mux Select

/*  CRC 0 */
const char r_CRC0AUTO =  0xD2; //CRC0 Automatic Ctrl
const char r_CRC0CN0  =  0xCE; //CRC0 Control 0
const char r_CRC0CNT  =  0xD3; //CRC0 Auto Flash Select Count
const char r_CRC0DAT  =  0xDE; //CRC0 Data Output
const char r_CRC0FLIP =  0xCF; //CRC0 Bit Flip
const char r_CRC0IN   =  0xDD; //CRC0 Input Data

/* General Interrupt Registers  */
const char r_IE       =  0xA8; //IE
const char r_IP       =  0xB8; //Int Priority
const char IT01CF     =  0xE4; //INT0/1 Configuration

/*  Port I/O Crossbar */
const char r_XBR0     =  0xE1; //I/O crossbar 0
const char r_XBR1     =  0xE2; //I/O crossbar 1
const char r_XBR2     =  0xE3; //I/O crossbar 2

/* Interrupt 1  */
const char r_EIE1     =  0xE6; //Extended IE 1
const char r_EIP1     =  0xF3; //Int Prior 1

/* Oscillator Control */
const char r_HFO0CAL  =  0xC7; //High Freq Osc 0 Calibration
const char r_LFO0CN   =  0xB1; //Low Freq Osc Con

/*  Programmable Counter Array  */
const char r_PCA0CENT =  0x9E; //PCA Center Alignment en
const char r_PCA0CLR  =  0x9C; //PCA Comparator Clear
const char r_PCA0CN0  =  0xD8; //PCA Control
const char r_PCA0CPH0 =  0xFC; //PCA Ch0 Capt Module High byte
const char r_PCA0CPH1 =  0xEA; //PCA Ch1 Capt Module High byte
const char r_PCA0CPH2 =  0xEC; //PCA Ch2 Capt Module High byte
const char r_PCA0CPL0 =  0xFB; //PCA Ch0 Capt Module Low byte
const char r_PCA0CPL1 =  0xE9; //PCA Ch1 Capt Module Low byte
const char r_PCA0CPL2 =  0xEB; //PCA Ch2 Capt Module Low byte
const char r_PCA0CPM0 =  0xDA; //PCA Ch0 Cap/Comp Mode
const char r_PCA0CPM1 =  0xDB; //PCA Ch1 Cap/Comp mode
const char r_PCA0CPM2 =  0xDC; //PCA Ch2 Cap/Comp mode
const char r_PCA0H    =  0xFA; //PCA Counter/Timer high byte
const char r_PCA0L    =  0xF9; //PCA Counter/Timer low byte
const char r_PCA0MD   =  0xD9; //PCA Mode
const char r_PCA0POL  =  0x96; //PCA output polarity
const char r_PCA0PWM  =  0xF7; //PCA PWM Config

/* Port 0 */
const char r_P0       =  0x80; //P0 Pin Latch
const char r_P0MASK   =  0xFE; //P0 Mask
const char r_P0MAT    =  0xFD; //P0 Match
const char r_P0MDIN   =  0xF1; //P0 Input Mode
const char r_P0MDOUT  =  0xA4; //P0 Output Mode
const char r_P0SKIP   =  0xD4; //P0 Skip

/* Port 1 */
const char r_P1       =  0x90; //P1 Pin Latch
const char r_P1MASK   =  0xEE; //P1 Mask
const char r_P1MAT    =  0xED; //P1 Match
const char r_P1MDIN   =  0xF2; //P1 Input Mode
const char r_P1MDOUT  =  0xA5; //P1 Output Mode
const char r_P1SKIP   =  0xD5; //P1 Skip

/* Port 2 */
const char r_P2       =  0xA0; //Port 2 Pin Latch
const char r_P2MDOUT  =  0xA6; //Port 2 Output mode

/*  Special Function Register Addresses p.31*/
const char r_ACC      =  0xE0; //Accumulator
const char r_B        =  0xF0; //B Register
const char r_CKCON0   =  0x8E; //Clock Control 0
const char r_CLKSEL   =  0xA9; //Clock Select
const char r_DERIVID  =  0xAD; //Derivative ID
const char r_DEVICEID =  0xB5; //Device ID
const char r_DPH      =  0x83; //Data Pointer High
const char r_DPL      =  0x82; //Data Pointer Low
const char r_FLKEY    =  0xB7; //Flash Lock Key
const char r_PCON     =  0x87; //Power Control
const char r_PRTDRV   =  0xF6; //Port Drive Str
const char r_PSCTL    =  0x8F; //Program store control
const char r_PSW      =  0xD0; //program status word
const char r_REF0CN   =  0xD1; //Volt Ref Control
const char r_REG0CN   =  0xC9; //Volt Reg Control
const char r_REVID    =  0xB6; //Revision ID
const char r_RSTSRC   =  0xEF; //Reset Source
const char r_SP       =  0x81; //Stack Pointer
const char r_VDM0CN   =  0xFF; //Supply Monitor Control
const char r_WDTCN    =  0x97; //Watchdog Timer Control

/*  SPI   */
const char r_SPI0CFG  =  0xA1; //SPI0 config
const char r_SPI0CKR  =  0xA2; //SPI0 clock rate
const char r_SPI0CN0  =  0xF8; //SPI0 control
const char r_SPI0DAT  =  0xA3; //SPIO data


/*  System Management Bus */
const char r_SMB0ADM  =  0xD6; //SMB0 slave addr mask
const char r_SMB0ADR  =  0xD7; //SMB0 slave address
const char r_SMB0CF   =  0xC1; //SMB0 config
const char r_SMB0CN0  =  0xC0; //SMB0 control
const char r_SMB0DAT  =  0xC2; //SMB0 data
const char r_SMB0TC   =  0xAC; //SMB0 timing/pin control

/*  Timers  */
const char r_TCON     =  0x88; //Timer 0/1 control
const char r_TH0      =  0x8C; //Timer 0 high byte
const char r_TL0      =  0x8A; //Timer 0 low byte
const char r_TH1      =  0x8D; //Timer 1 high byte
const char r_TL1      =  0x8B; //Timer 1 low byte
const char r_TM0D     =  0x89; //Timer 0/1 Mode
const char r_TMR2CN0  =  0xC8; //TImer 2 Control 0
const char r_TMR2H    =  0xCD; //TImer 2 high byte
const char r_TMR2L    =  0xCC; //Timer 2 low byte
const char r_TMR2RLH  =  0xCB; //Timer 2 Reload High byte
const char r_TMR2RLL  =  0xCA; //timer 2 reload low byte
const char r_TMR3CN0  =  0x91; //timer 3 control 0
const char r_TMR3H    =  0x95; //timer 3 high byte
const char r_TMR3L    =  0x94; //timer 3 low byte
const char r_TMR3RLH  =  0x93; //timer 3 reload high byte
const char r_TMR3RLL  =  0x92; //timer 3 reload low byte

/*  UART  */
const char r_SBUF0    =  0x99; //UART0 ser data buff
const char r_SCON0    =  0x98; //UART0 ser control

#endif
