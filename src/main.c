#include <xc.h>
#include "lcd.h"

#pragma config FOSC = INTIO67
#pragma config PLLCFG = OFF
#pragma config WDTEN = OFF
#pragma config LVP = OFF

void main() {
    OSCCON = 0b01110010; // Configurar oscilador interno a 16 MHz
    LCD_Init();          // Inicializa el LCD
    
    __delay_ms(2000);  // Espera 2 segundos
    LCD_Clear();  // Limpia la pantalla

    LCD_SetCursor(1, 0);
    LCD_String("Hola, PIC18F!");

    while (1);
}
