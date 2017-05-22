/**
  ******************************************************************************
  * @file    iar_stm32f407zg_sk.h
  * @brief   This file contains definitions for Leds, push-buttons
  *          and COM ports hardware resources.
  ******************************************************************************
  * @copy
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2010 STMicroelectronics</center></h2>
  */ 
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GNUC_STM32F303VC_SK_H
#define __GNUC_STM32F303VC_SK_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f30x.h"
   
typedef enum 
{
  LED1 = 0,
  LED2 = 1,
  LED3 = 2,
  LED4 = 3,
  LED5 = 4,
  LED6 = 5,
  LED7 = 6,
  LED8 = 7
} Led_TypeDef;

typedef enum 
{  
  BUTTON_USER = 0
} Button_TypeDef;

typedef enum 
{  
  BUTTON_MODE_GPIO = 0,
  BUTTON_MODE_EXTI = 1
} ButtonMode_TypeDef;

#define LEDn                             8

#define LED1_PIN                         GPIO_Pin_9
#define LED1_GPIO_PORT                   GPIOE
#define LED1_GPIO_CLK                    RCC_AHBPeriph_GPIOE
  
#define LED2_PIN                         GPIO_Pin_8
#define LED2_GPIO_PORT                   GPIOE
#define LED2_GPIO_CLK                    RCC_AHBPeriph_GPIOE
  
#define LED3_PIN                         GPIO_Pin_10
#define LED3_GPIO_PORT                   GPIOE
#define LED3_GPIO_CLK                    RCC_AHBPeriph_GPIOE
  
#define LED4_PIN                         GPIO_Pin_15
#define LED4_GPIO_PORT                   GPIOE
#define LED4_GPIO_CLK                    RCC_AHBPeriph_GPIOE

#define LED5_PIN                         GPIO_Pin_11
#define LED5_GPIO_PORT                   GPIOE
#define LED5_GPIO_CLK                    RCC_AHBPeriph_GPIOE

#define LED6_PIN                         GPIO_Pin_14
#define LED6_GPIO_PORT                   GPIOE
#define LED6_GPIO_CLK                    RCC_AHBPeriph_GPIOE

#define LED7_PIN                         GPIO_Pin_12
#define LED7_GPIO_PORT                   GPIOE
#define LED7_GPIO_CLK                    RCC_AHBPeriph_GPIOE

#define LED8_PIN                         GPIO_Pin_13
#define LED8_GPIO_PORT                   GPIOE
#define LED8_GPIO_CLK                    RCC_AHBPeriph_GPIOE
/**
  * @}
  */ 
  
/** @addtogroup GCC_STM32F303VC_SK_LOW_LEVEL_BUTTON
  * @{
  */  
#define BUTTONn                          8 /**/

/**
 * @brief Key push-button
 */
#define USER_BUTTON_PIN                   GPIO_Pin_0
#define USER_BUTTON_GPIO_PORT             GPIOA
#define USER_BUTTON_GPIO_CLK              RCC_AHBPeriph_GPIOA
#define USER_BUTTON_EXTI_LINE             EXTI_Line6
#define USER_BUTTON_EXTI_PORT_SOURCE      EXTI_PortSourceGPIOA
#define USER_BUTTON_EXTI_PIN_SOURCE       EXTI_PinSource6
#define USER_BUTTON_EXTI_IRQn             EXTI9_5_IRQn

/**
  * @}
  */ 

/**
  * @USB OTG
  */ 
#define OTG_FS_VBUS_PIN                    GPIO_Pin_9
#define OTG_FS_VBUS_PORT                   GPIOA
#define OTG_FS_VBUS_CLK                    RCC_AHB1Periph_GPIOA
#define OTG_FS_VBUS_SOURCE                 GPIO_PinSource9

#define USB_FS_VBUSON_PIN                  GPIO_Pin_2
#define USB_FS_VBUSON_PORT                 GPIOC
#define USB_FS_VBUSON_CLK                  RCC_AHB1Periph_GPIOC
#define USB_FS_VBUSON_SOURCE               GPIO_PinSource2

#define USB_FS_FAULT_PIN                   GPIO_Pin_10
#define USB_FS_FAULT_PORT                  GPIOB
#define USB_FS_FAULT_CLK                   RCC_AHB1Periph_GPIOB
#define USB_FS_FAULT_SOURCE                GPIO_PinSource10

/**
  * @USB HOST
  */ 
#define OTG_HS_VBUS_PIN                    GPIO_Pin_13
#define OTG_HS_VBUS_PORT                   GPIOB
#define OTG_HS_VBUS_CLK                    RCC_AHB1Periph_GPIOB
#define OTG_HS_VBUS_SOURCE                 GPIO_PinSource13

#define USB_HS_VBUSON_PIN                  GPIO_Pin_3
#define USB_HS_VBUSON_PORT                 GPIOE
#define USB_HS_VBUSON_CLK                  RCC_AHB1Periph_GPIOE
#define USB_HS_VBUSON_SOURCE               GPIO_PinSource3

#define USB_HS_FAULT_PIN                   GPIO_Pin_13
#define USB_HS_FAULT_PORT                  GPIOD
#define USB_HS_FAULT_CLK                   RCC_AHB1Periph_GPIOD
#define USB_HS_FAULT_SOURCE                GPIO_PinSource13

#define OTG_HS_ID_PIN                      GPIO_Pin_12
#define OTG_HS_ID_PORT                     GPIOB
#define OTG_HS_ID_CLK                      RCC_AHB1Periph_GPIOB
#define OTG_HS_ID_SOURCE                   GPIO_PinSource12

/**
  * @TRIMER
  */ 
#define TRIMER_PIN                      GPIO_Pin_0
#define TRIMER_PORT                     GPIOC
#define TRIMER_CLK                      RCC_AHB1Periph_GPIOC
#define TRIMER_SOURCE                   GPIO_PinSource0
#define TRIMER_CHANNEL                  ADC_Channel_10

/** @addtogroup GCC_STM32F303VC_SK_LOW_LEVEL_SD_FLASH
  * @{
  */ 
/**
  * @SD
  */ 
#define SD_CP_PIN                       GPIO_Pin_3
#define SD_CP_PORT                      GPIOD
#define SD_CP_CLK                       RCC_AHB1Periph_GPIOD
#define SD_CP_SOURCE                    GPIO_PinSource3

#define SD_WP_PIN                       GPIO_Pin_4
#define SD_WP_PORT                      GPIOE
#define SD_WP_CLK                       RCC_AHB1Periph_GPIOE
#define SD_WP_SOURCE                    GPIO_PinSource4

#define SD_CMD_PIN                      GPIO_Pin_2
#define SD_CMD_PORT                     GPIOD
#define SD_CMD_CLK                      RCC_AHB1Periph_GPIOD
#define SD_CMD_SOURCE                   GPIO_PinSource2

#define SD_D0_PIN                       GPIO_Pin_8
#define SD_D0_PORT                      GPIOC
#define SD_D0_CLK                       RCC_AHB1Periph_GPIOC
#define SD_D0_SOURCE                    GPIO_PinSource8

#define SD_D1_PIN                       GPIO_Pin_9
#define SD_D1_PORT                      GPIOC
#define SD_D1_CLK                       RCC_AHB1Periph_GPIOC
#define SD_D1_SOURCE                    GPIO_PinSource9

#define SD_D2_PIN                       GPIO_Pin_10
#define SD_D2_PORT                      GPIOC
#define SD_D2_CLK                       RCC_AHB1Periph_GPIOC
#define SD_D2_SOURCE                    GPIO_PinSource10

#define SD_D3_PIN                       GPIO_Pin_11
#define SD_D3_PORT                      GPIOC
#define SD_D3_CLK                       RCC_AHB1Periph_GPIOC
#define SD_D3_SOURCE                    GPIO_PinSource11

#define SD_CLK_PIN                      GPIO_Pin_12
#define SD_CLK_PORT                     GPIOC
#define SD_CLK_CLK                      RCC_AHB1Periph_GPIOC
#define SD_CLK_SOURCE                   GPIO_PinSource12
/**
  * @brief  SD FLASH SDIO Interface
  */ 
#define SD_SDIO_DMA_STREAM3	          3
//#define SD_SDIO_DMA_STREAM6           6

#ifdef SD_SDIO_DMA_STREAM3
 #define SD_SDIO_DMA_STREAM            DMA2_Stream3
 #define SD_SDIO_DMA_CHANNEL           DMA_Channel_4
 #define SD_SDIO_DMA_FLAG_FEIF         DMA_FLAG_FEIF3
 #define SD_SDIO_DMA_FLAG_DMEIF        DMA_FLAG_DMEIF3
 #define SD_SDIO_DMA_FLAG_TEIF         DMA_FLAG_TEIF3
 #define SD_SDIO_DMA_FLAG_HTIF         DMA_FLAG_HTIF3
 #define SD_SDIO_DMA_FLAG_TCIF         DMA_FLAG_TCIF3 
#elif defined SD_SDIO_DMA_STREAM6
 #define SD_SDIO_DMA_STREAM            DMA2_Stream6
 #define SD_SDIO_DMA_CHANNEL           DMA_Channel_4
 #define SD_SDIO_DMA_FLAG_FEIF         DMA_FLAG_FEIF6
 #define SD_SDIO_DMA_FLAG_DMEIF        DMA_FLAG_DMEIF6
 #define SD_SDIO_DMA_FLAG_TEIF         DMA_FLAG_TEIF6
 #define SD_SDIO_DMA_FLAG_HTIF         DMA_FLAG_HTIF6
 #define SD_SDIO_DMA_FLAG_TCIF         DMA_FLAG_TCIF6 
#endif /* SD_SDIO_DMA_STREAM3 */

/**
  * @}
  */ 
  
/**
  * @CAN
  */ 
#define CAN_TX_PIN                      GPIO_Pin_9
#define CAN_TX_PORT                     GPIOB
#define CAN_TX_CLK                      RCC_AHB1Periph_GPIOB
#define CAN_TX_AF                       GPIO_AF_CAN1
#define CAN_TX_SOURCE                   GPIO_PinSource9

#define CAN_RX_PIN                      GPIO_Pin_8
#define CAN_RX_PORT                     GPIOB
#define CAN_RX_CLK                      RCC_AHB1Periph_GPIOB
#define CAN_RX_AF                       GPIO_AF_CAN1
#define CAN_RX_SOURCE                   GPIO_PinSource8

#define CAN_CTRL_PIN                    GPIO_Pin_6
#define CAN_CTRL_PORT                   GPIOD
#define CAN_CTRL_CLK                    RCC_AHB1Periph_GPIOD
#define CAN_CTRL_SOURCE                 GPIO_PinSource6

/**
  * @}
  */  
/**
  * @}
  */ 
  
/** @defgroup GCC_STM32F303VC_SK_LOW_LEVEL_Exported_Macros
  * @{
  */  
/**
  * @}
  */ 


/** @defgroup GCC_STM32F303VC_SK_LOW_LEVEL_Exported_Functions
  * @{
  */
void STM_EVAL_LEDInit(Led_TypeDef Led);
void STM_EVAL_LEDOn(Led_TypeDef Led);
void STM_EVAL_LEDOff(Led_TypeDef Led);
void STM_EVAL_LEDToggle(Led_TypeDef Led);
void STM_EVAL_PBInit(Button_TypeDef Button, ButtonMode_TypeDef Button_Mode);
uint32_t STM_EVAL_PBGetState(Button_TypeDef Button);
/**
  * @}
  */
  
#ifdef __cplusplus
}
#endif

#endif /* __GNUC_STM32F303VC_SK_H */
/**
  * @}
  */ 

/**
  * @}
  */ 

/**
  * @}
  */

/**
  * @}
  */  

/******************* (C) COPYRIGHT 2010 STMicroelectronics *****END OF FILE****/
