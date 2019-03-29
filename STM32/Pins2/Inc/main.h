/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2019 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
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
#define output20_Pin GPIO_PIN_2
#define output20_GPIO_Port GPIOE
#define output21_Pin GPIO_PIN_3
#define output21_GPIO_Port GPIOE
#define output22_Pin GPIO_PIN_4
#define output22_GPIO_Port GPIOE
#define PC14_OSC32_IN_Pin GPIO_PIN_14
#define PC14_OSC32_IN_GPIO_Port GPIOC
#define PC15_OSC32_OUT_Pin GPIO_PIN_15
#define PC15_OSC32_OUT_GPIO_Port GPIOC
#define PH0_OSC_IN_Pin GPIO_PIN_0
#define PH0_OSC_IN_GPIO_Port GPIOH
#define PH1_OSC_OUT_Pin GPIO_PIN_1
#define PH1_OSC_OUT_GPIO_Port GPIOH
#define output5_Pin GPIO_PIN_0
#define output5_GPIO_Port GPIOC
#define output6_Pin GPIO_PIN_1
#define output6_GPIO_Port GPIOC
#define output7_Pin GPIO_PIN_2
#define output7_GPIO_Port GPIOC
#define PDM_OUT_Pin GPIO_PIN_3
#define PDM_OUT_GPIO_Port GPIOC
#define B1_Pin GPIO_PIN_0
#define B1_GPIO_Port GPIOA
#define Servo1_Pin GPIO_PIN_1
#define Servo1_GPIO_Port GPIOA
#define Servo2_Pin GPIO_PIN_2
#define Servo2_GPIO_Port GPIOA
#define Servo3_Pin GPIO_PIN_3
#define Servo3_GPIO_Port GPIOA
#define interrupt1_Pin GPIO_PIN_4
#define interrupt1_GPIO_Port GPIOA
#define interrupt2_Pin GPIO_PIN_5
#define interrupt2_GPIO_Port GPIOA
#define interrupt3_Pin GPIO_PIN_6
#define interrupt3_GPIO_Port GPIOA
#define interrupt4_Pin GPIO_PIN_7
#define interrupt4_GPIO_Port GPIOA
#define input8_Pin GPIO_PIN_4
#define input8_GPIO_Port GPIOC
#define input9_Pin GPIO_PIN_5
#define input9_GPIO_Port GPIOC
#define Servo4_Pin GPIO_PIN_0
#define Servo4_GPIO_Port GPIOB
#define Servo5_Pin GPIO_PIN_1
#define Servo5_GPIO_Port GPIOB
#define BOOT1_Pin GPIO_PIN_2
#define BOOT1_GPIO_Port GPIOB
#define input14_Pin GPIO_PIN_7
#define input14_GPIO_Port GPIOE
#define input15_Pin GPIO_PIN_8
#define input15_GPIO_Port GPIOE
#define motor1PWM_Pin GPIO_PIN_9
#define motor1PWM_GPIO_Port GPIOE
#define input16_Pin GPIO_PIN_10
#define input16_GPIO_Port GPIOE
#define motor2PWM_Pin GPIO_PIN_11
#define motor2PWM_GPIO_Port GPIOE
#define input17_Pin GPIO_PIN_12
#define input17_GPIO_Port GPIOE
#define motor3PWM_Pin GPIO_PIN_13
#define motor3PWM_GPIO_Port GPIOE
#define motor4PWM_Pin GPIO_PIN_14
#define motor4PWM_GPIO_Port GPIOE
#define input18_Pin GPIO_PIN_15
#define input18_GPIO_Port GPIOE
#define CLK_IN_Pin GPIO_PIN_10
#define CLK_IN_GPIO_Port GPIOB
#define input5_Pin GPIO_PIN_11
#define input5_GPIO_Port GPIOB
#define input6_Pin GPIO_PIN_12
#define input6_GPIO_Port GPIOB
#define input7_Pin GPIO_PIN_13
#define input7_GPIO_Port GPIOB
#define interrupt7_Pin GPIO_PIN_14
#define interrupt7_GPIO_Port GPIOB
#define interrupt8_Pin GPIO_PIN_15
#define interrupt8_GPIO_Port GPIOB
#define input12_Pin GPIO_PIN_8
#define input12_GPIO_Port GPIOD
#define input13_Pin GPIO_PIN_9
#define input13_GPIO_Port GPIOD
#define interrupt9_Pin GPIO_PIN_10
#define interrupt9_GPIO_Port GPIOD
#define interrupt10_Pin GPIO_PIN_11
#define interrupt10_GPIO_Port GPIOD
#define LD4_Pin GPIO_PIN_12
#define LD4_GPIO_Port GPIOD
#define LD3_Pin GPIO_PIN_13
#define LD3_GPIO_Port GPIOD
#define LD5_Pin GPIO_PIN_14
#define LD5_GPIO_Port GPIOD
#define LD6_Pin GPIO_PIN_15
#define LD6_GPIO_Port GPIOD
#define Servo7_Pin GPIO_PIN_6
#define Servo7_GPIO_Port GPIOC
#define input10_Pin GPIO_PIN_7
#define input10_GPIO_Port GPIOC
#define input11_Pin GPIO_PIN_8
#define input11_GPIO_Port GPIOC
#define interrupt6_Pin GPIO_PIN_9
#define interrupt6_GPIO_Port GPIOC
#define interrupt5_Pin GPIO_PIN_8
#define interrupt5_GPIO_Port GPIOA
#define input1_Pin GPIO_PIN_9
#define input1_GPIO_Port GPIOA
#define input2_Pin GPIO_PIN_10
#define input2_GPIO_Port GPIOA
#define input3_Pin GPIO_PIN_11
#define input3_GPIO_Port GPIOA
#define input4_Pin GPIO_PIN_12
#define input4_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define output1_Pin GPIO_PIN_15
#define output1_GPIO_Port GPIOA
#define output8_Pin GPIO_PIN_10
#define output8_GPIO_Port GPIOC
#define output9_Pin GPIO_PIN_11
#define output9_GPIO_Port GPIOC
#define output10_Pin GPIO_PIN_12
#define output10_GPIO_Port GPIOC
#define output11_Pin GPIO_PIN_0
#define output11_GPIO_Port GPIOD
#define output12_Pin GPIO_PIN_1
#define output12_GPIO_Port GPIOD
#define output13_Pin GPIO_PIN_2
#define output13_GPIO_Port GPIOD
#define output14_Pin GPIO_PIN_3
#define output14_GPIO_Port GPIOD
#define output15_Pin GPIO_PIN_4
#define output15_GPIO_Port GPIOD
#define output16_Pin GPIO_PIN_5
#define output16_GPIO_Port GPIOD
#define output17_Pin GPIO_PIN_6
#define output17_GPIO_Port GPIOD
#define output18_Pin GPIO_PIN_7
#define output18_GPIO_Port GPIOD
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define output2_Pin GPIO_PIN_4
#define output2_GPIO_Port GPIOB
#define Servo6_Pin GPIO_PIN_5
#define Servo6_GPIO_Port GPIOB
#define SCL_Pin GPIO_PIN_6
#define SCL_GPIO_Port GPIOB
#define output3_Pin GPIO_PIN_7
#define output3_GPIO_Port GPIOB
#define output1B8_Pin GPIO_PIN_8
#define output1B8_GPIO_Port GPIOB
#define SDA_Pin GPIO_PIN_9
#define SDA_GPIO_Port GPIOB
#define output19_Pin GPIO_PIN_0
#define output19_GPIO_Port GPIOE
#define MEMS_INT2_Pin GPIO_PIN_1
#define MEMS_INT2_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
