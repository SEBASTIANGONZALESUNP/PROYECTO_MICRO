/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2023] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB0 aliases
#define RX_TRIS                 TRISBbits.TRISB0
#define RX_LAT                  LATBbits.LATB0
#define RX_PORT                 PORTBbits.RB0
#define RX_WPU                  WPUBbits.WPUB0
#define RX_OD                   ODCONBbits.ODCB0
#define RX_ANS                  ANSELBbits.ANSELB0
#define RX_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define RX_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define RX_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RX_GetValue()           PORTBbits.RB0
#define RX_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define RX_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define RX_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define RX_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define RX_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define RX_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define RX_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define RX_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)
   
// get/set RB3 aliases
#define TX_TRIS                 TRISBbits.TRISB3
#define TX_LAT                  LATBbits.LATB3
#define TX_PORT                 PORTBbits.RB3
#define TX_WPU                  WPUBbits.WPUB3
#define TX_OD                   ODCONBbits.ODCB3
#define TX_ANS                  ANSELBbits.ANSELB3
#define TX_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define TX_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define TX_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define TX_GetValue()           PORTBbits.RB3
#define TX_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define TX_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define TX_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define TX_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define TX_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define TX_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define TX_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define TX_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)
   
// get/set RC4 aliases
#define I3_TRIS                 TRISCbits.TRISC4
#define I3_LAT                  LATCbits.LATC4
#define I3_PORT                 PORTCbits.RC4
#define I3_WPU                  WPUCbits.WPUC4
#define I3_OD                   ODCONCbits.ODCC4
#define I3_ANS                  ANSELCbits.ANSELC4
#define I3_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define I3_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define I3_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define I3_GetValue()           PORTCbits.RC4
#define I3_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define I3_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define I3_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define I3_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define I3_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define I3_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define I3_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define I3_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)
   
// get/set RC5 aliases
#define I4_TRIS                 TRISCbits.TRISC5
#define I4_LAT                  LATCbits.LATC5
#define I4_PORT                 PORTCbits.RC5
#define I4_WPU                  WPUCbits.WPUC5
#define I4_OD                   ODCONCbits.ODCC5
#define I4_ANS                  ANSELCbits.ANSELC5
#define I4_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define I4_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define I4_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define I4_GetValue()           PORTCbits.RC5
#define I4_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define I4_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define I4_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define I4_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define I4_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define I4_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define I4_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define I4_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)
   
// get/set RC6 aliases
#define D3_TRIS                 TRISCbits.TRISC6
#define D3_LAT                  LATCbits.LATC6
#define D3_PORT                 PORTCbits.RC6
#define D3_WPU                  WPUCbits.WPUC6
#define D3_OD                   ODCONCbits.ODCC6
#define D3_ANS                  ANSELCbits.ANSELC6
#define D3_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define D3_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define D3_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define D3_GetValue()           PORTCbits.RC6
#define D3_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define D3_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define D3_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define D3_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define D3_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define D3_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define D3_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define D3_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)
   
// get/set RD4 aliases
#define D4_TRIS                 TRISDbits.TRISD4
#define D4_LAT                  LATDbits.LATD4
#define D4_PORT                 PORTDbits.RD4
#define D4_WPU                  WPUDbits.WPUD4
#define D4_OD                   ODCONDbits.ODCD4
#define D4_ANS                  ANSELDbits.ANSELD4
#define D4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define D4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define D4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define D4_GetValue()           PORTDbits.RD4
#define D4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define D4_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define D4_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define D4_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define D4_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define D4_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define D4_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)
   
// get/set RF4 aliases
#define D1_TRIS                 TRISFbits.TRISF4
#define D1_LAT                  LATFbits.LATF4
#define D1_PORT                 PORTFbits.RF4
#define D1_WPU                  WPUFbits.WPUF4
#define D1_OD                   ODCONFbits.ODCF4
#define D1_ANS                  ANSELFbits.ANSELF4
#define D1_SetHigh()            do { LATFbits.LATF4 = 1; } while(0)
#define D1_SetLow()             do { LATFbits.LATF4 = 0; } while(0)
#define D1_Toggle()             do { LATFbits.LATF4 = ~LATFbits.LATF4; } while(0)
#define D1_GetValue()           PORTFbits.RF4
#define D1_SetDigitalInput()    do { TRISFbits.TRISF4 = 1; } while(0)
#define D1_SetDigitalOutput()   do { TRISFbits.TRISF4 = 0; } while(0)
#define D1_SetPullup()          do { WPUFbits.WPUF4 = 1; } while(0)
#define D1_ResetPullup()        do { WPUFbits.WPUF4 = 0; } while(0)
#define D1_SetPushPull()        do { ODCONFbits.ODCF4 = 0; } while(0)
#define D1_SetOpenDrain()       do { ODCONFbits.ODCF4 = 1; } while(0)
#define D1_SetAnalogMode()      do { ANSELFbits.ANSELF4 = 1; } while(0)
#define D1_SetDigitalMode()     do { ANSELFbits.ANSELF4 = 0; } while(0)
   
// get/set RF5 aliases
#define D2_TRIS                 TRISFbits.TRISF5
#define D2_LAT                  LATFbits.LATF5
#define D2_PORT                 PORTFbits.RF5
#define D2_WPU                  WPUFbits.WPUF5
#define D2_OD                   ODCONFbits.ODCF5
#define D2_ANS                  ANSELFbits.ANSELF5
#define D2_SetHigh()            do { LATFbits.LATF5 = 1; } while(0)
#define D2_SetLow()             do { LATFbits.LATF5 = 0; } while(0)
#define D2_Toggle()             do { LATFbits.LATF5 = ~LATFbits.LATF5; } while(0)
#define D2_GetValue()           PORTFbits.RF5
#define D2_SetDigitalInput()    do { TRISFbits.TRISF5 = 1; } while(0)
#define D2_SetDigitalOutput()   do { TRISFbits.TRISF5 = 0; } while(0)
#define D2_SetPullup()          do { WPUFbits.WPUF5 = 1; } while(0)
#define D2_ResetPullup()        do { WPUFbits.WPUF5 = 0; } while(0)
#define D2_SetPushPull()        do { ODCONFbits.ODCF5 = 0; } while(0)
#define D2_SetOpenDrain()       do { ODCONFbits.ODCF5 = 1; } while(0)
#define D2_SetAnalogMode()      do { ANSELFbits.ANSELF5 = 1; } while(0)
#define D2_SetDigitalMode()     do { ANSELFbits.ANSELF5 = 0; } while(0)
   
// get/set RF6 aliases
#define I2_TRIS                 TRISFbits.TRISF6
#define I2_LAT                  LATFbits.LATF6
#define I2_PORT                 PORTFbits.RF6
#define I2_WPU                  WPUFbits.WPUF6
#define I2_OD                   ODCONFbits.ODCF6
#define I2_ANS                  ANSELFbits.ANSELF6
#define I2_SetHigh()            do { LATFbits.LATF6 = 1; } while(0)
#define I2_SetLow()             do { LATFbits.LATF6 = 0; } while(0)
#define I2_Toggle()             do { LATFbits.LATF6 = ~LATFbits.LATF6; } while(0)
#define I2_GetValue()           PORTFbits.RF6
#define I2_SetDigitalInput()    do { TRISFbits.TRISF6 = 1; } while(0)
#define I2_SetDigitalOutput()   do { TRISFbits.TRISF6 = 0; } while(0)
#define I2_SetPullup()          do { WPUFbits.WPUF6 = 1; } while(0)
#define I2_ResetPullup()        do { WPUFbits.WPUF6 = 0; } while(0)
#define I2_SetPushPull()        do { ODCONFbits.ODCF6 = 0; } while(0)
#define I2_SetOpenDrain()       do { ODCONFbits.ODCF6 = 1; } while(0)
#define I2_SetAnalogMode()      do { ANSELFbits.ANSELF6 = 1; } while(0)
#define I2_SetDigitalMode()     do { ANSELFbits.ANSELF6 = 0; } while(0)
   
// get/set RF7 aliases
#define I1_TRIS                 TRISFbits.TRISF7
#define I1_LAT                  LATFbits.LATF7
#define I1_PORT                 PORTFbits.RF7
#define I1_WPU                  WPUFbits.WPUF7
#define I1_OD                   ODCONFbits.ODCF7
#define I1_ANS                  ANSELFbits.ANSELF7
#define I1_SetHigh()            do { LATFbits.LATF7 = 1; } while(0)
#define I1_SetLow()             do { LATFbits.LATF7 = 0; } while(0)
#define I1_Toggle()             do { LATFbits.LATF7 = ~LATFbits.LATF7; } while(0)
#define I1_GetValue()           PORTFbits.RF7
#define I1_SetDigitalInput()    do { TRISFbits.TRISF7 = 1; } while(0)
#define I1_SetDigitalOutput()   do { TRISFbits.TRISF7 = 0; } while(0)
#define I1_SetPullup()          do { WPUFbits.WPUF7 = 1; } while(0)
#define I1_ResetPullup()        do { WPUFbits.WPUF7 = 0; } while(0)
#define I1_SetPushPull()        do { ODCONFbits.ODCF7 = 0; } while(0)
#define I1_SetOpenDrain()       do { ODCONFbits.ODCF7 = 1; } while(0)
#define I1_SetAnalogMode()      do { ANSELFbits.ANSELF7 = 1; } while(0)
#define I1_SetDigitalMode()     do { ANSELFbits.ANSELF7 = 0; } while(0)
   
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/