#ifndef __STM32F4x9I_EVAL_DEBUG_H
#define __STM32F4x9I_EVAL_DEBUG_H
//#define USART_REC_LEN  		600  		//�����������ֽ��� 600
//#define REV_LEN_MASK  			0X3F  	//�����������ֽ��� 600

//#define EN_USART1_RX 			1		//ʹ�ܣ�1��/��ֹ��0������1����
//#define REV_FINISH_MASK         0X8000
	  	
//extern u8  USART_RX_BUF[USART_REC_LEN]; //���ջ���,���USART_REC_LEN���ֽ�.ĩ�ֽ�Ϊ���з� 
//extern u16 USART_RX_STA;         		//����״̬���	
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm324x9i_eval.h"
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* User can use this section to tailor USARTx/UARTx instance used and associated 
   resources */
/* Definition for USARTx clock resources */
#define USARTx                           USART2
#define USARTx_CLK_ENABLE()              __HAL_RCC_USART2_CLK_ENABLE();
#define USARTx_RX_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOD_CLK_ENABLE()
#define USARTx_TX_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOD_CLK_ENABLE() 

#define USARTx_FORCE_RESET()             __HAL_RCC_USART2_FORCE_RESET()
#define USARTx_RELEASE_RESET()           __HAL_RCC_USART2_RELEASE_RESET()

/* Definition for USARTx Pins */
#define USARTx_TX_PIN                    GPIO_PIN_5
#define USARTx_TX_GPIO_PORT              GPIOD  
#define USARTx_TX_AF                     GPIO_AF7_USART2
#define USARTx_RX_PIN                    GPIO_PIN_6
#define USARTx_RX_GPIO_PORT              GPIOD
#define USARTx_RX_AF                     GPIO_AF7_USART2
  
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void BSP_USART_Debug_Init(void);
void HAL_UART_MspInit(UART_HandleTypeDef *huart);
void Printf(const char * fmt, ...);


//#define  Debug   Printf

#endif 

/************************ (C) COPYRIGHT Grotesque.Nrw.Brg *****END OF FILE****/
