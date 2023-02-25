 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
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
#include "mcc_generated_files/system/system.h"

char val; 

void Forward(){
    D1_SetLow();
    D2_SetHigh();
    I1_SetLow();
    I2_SetHigh();
    D3_SetHigh();
    D4_SetLow();
    I3_SetLow();
    I4_SetHigh();
    
}
void Back(){
    D1_SetHigh();
    D2_SetLow();
    I1_SetHigh();
    I2_SetLow();
    D3_SetLow();
    D4_SetHigh();
    I3_SetHigh();
    I4_SetLow();
    
}
void Right_f(){
    I1_SetLow();
    I2_SetHigh();
    I3_SetLow();
    I4_SetHigh();
}
void Right_b(){
    I1_SetHigh();
    I2_SetLow();
    I3_SetHigh();
    I4_SetLow();
}
void Left_f(){
    D1_SetLow();
    D2_SetHigh();
    D3_SetHigh();
    D4_SetLow();
}
void Left_b(){
    D1_SetHigh();
    D2_SetLow();
    D3_SetLow();
    D4_SetHigh();
}


int main(void)
{
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts 
    // Use the following macros to: 

    // Enable the Global High Interrupts 
    //INTERRUPT_GlobalInterruptHighEnable(); 

    // Disable the Global High Interrupts 
    //INTERRUPT_GlobalInterruptHighDisable(); 

    // Enable the Global Low Interrupts 
    //INTERRUPT_GlobalInterruptLowEnable(); 

    // Disable the Global Low Interrupts 
    //INTERRUPT_GlobalInterruptLowDisable();W
    
    while(1)
    {    
        if (val == 'F'){
        case 'F' : Forward(); break;
        else if (val == 'B')
        case 'B' : Forward(); break;
        else if(val == 'R_F')
        case 'R_F' : Forward(); break;
        case 'R_B' : Forward(); break;
        case 'L_F' : Forward(); break;
        case 'L_B' : Forward(); break;
    }    
}