/*====================================================================================================*/
/*====================================================================================================*/
#include "drivers\stm32f3_system.h"

#include "uMultimeter.h"
/*====================================================================================================*/
/*====================================================================================================*/
void UM_Init( void )
{
  SystemInit();
  HAL_InitTick();

  UM_GPIO_Config();
}
/*====================================================================================================*/
/*====================================================================================================*/
void UM_Loop( void )
{
  while(1) {
    LED_R_Toggle();
    LED_G_Toggle();
    LED_B_Toggle();
    delay_ms(100);
    while(KEY_U_Read()) {
      LED_R_Toggle();
      LED_G_Toggle();
      LED_B_Toggle();
      delay_ms(50);
    }
    while(KEY_D_Read()) {
      LED_R_Toggle();
      LED_G_Toggle();
      LED_B_Toggle();
      delay_ms(200);
    }
    while(KEY_R_Read()) {
      LED_R_Toggle();
      delay_ms(100);
      LED_G_Toggle();
      delay_ms(100);
      LED_B_Toggle();
      delay_ms(100);
    }
    while(KEY_P_Read()) {
      
    }
    while(KEY_L_Read()) {
      LED_B_Toggle();
      delay_ms(100);
      LED_G_Toggle();
      delay_ms(100);
      LED_R_Toggle();
      delay_ms(100);
    }
  }
}
/*====================================================================================================*/
/*====================================================================================================*/
