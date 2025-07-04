/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software cfomponent.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

#include "lcd_driver.h"
#include "usart.h"
#include "joystick.h"
#include "snakedemo.h"
#include "breakout.h"
#include "pong.h"
#include "playmariosound.h"
#include "game1942.h"
#include <stdio.h>

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define JS1_VRX_Pin GPIO_PIN_0
#define JS1_VRX_GPIO_Port GPIOA
#define JS1_VRY_Pin GPIO_PIN_1
#define JS1_VRY_GPIO_Port GPIOA
#define JS2_VRX_Pin GPIO_PIN_4
#define JS2_VRX_GPIO_Port GPIOA
#define JS2_VRY_Pin GPIO_PIN_0
#define JS2_VRY_GPIO_Port GPIOB
#define JS1_SW_Pin GPIO_PIN_10
#define JS1_SW_GPIO_Port GPIOB
#define LCD_DC_Pin GPIO_PIN_8
#define LCD_DC_GPIO_Port GPIOA
#define LCD_RST_Pin GPIO_PIN_9
#define LCD_RST_GPIO_Port GPIOA
#define JS2_SW_Pin GPIO_PIN_4
#define JS2_SW_GPIO_Port GPIOB
#define LCD_CS_Pin GPIO_PIN_6
#define LCD_CS_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
