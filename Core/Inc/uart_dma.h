#ifndef INC_UART_DMA_H_
#define INC_UART_DMA_H_

#include "stm32l4xx_hal.h"
#include <string.h>

typedef enum
{
    UART_DMA_OK    = 0,
    UART_DMA_ERROR = 1,
    UART_DMA_BUSY  = 2,
} UART_DMA_Status;

UART_DMA_Status UART_DMA_Init(UART_HandleTypeDef *huart, uint32_t baudrate);

UART_DMA_Status UART_DMA_TransmitString(const char *str);
UART_DMA_Status UART_DMA_TransmitBuffer(const uint8_t *buf, uint16_t len);

uint8_t UART_DMA_IsTxComplete(void);

UART_DMA_Status UART_DMA_StartCircular(uint8_t *buf, uint16_t len);
UART_DMA_Status UART_DMA_StopCircular(void);

#endif /* INC_UART_DMA_H_ */
