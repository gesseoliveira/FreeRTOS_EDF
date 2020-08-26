/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "FreeRTOS.h"
#include "task.h"
#include "MS_FREERTOS.h"
#include "macros.h"
#include "sys_cfg_stm32f407.h"
#include  "TASK_SET.h"


uint16_t t=11360; //11250  = 1ms freertos
float ex_t;

void SystemClock_Config(void);

TaskHandle_t MyTaks = NULL;
TaskHandle_t MyTaks2 = NULL;

void TimingDelay(unsigned int tick)
{
//#define DELAY_TIMER

#ifndef DELAY_TIMER
  for(uint16_t k = 0 ; k <tick;k++)
  {

    for(uint32_t i = 0 ; i <t;i++)
    {
    }
  }
#else
  Ms_delay[Ms_currentTaskIndex].DelayStart = Ms_delay[Ms_currentTaskIndex].DelayApp +tick ;

  while(Ms_delay[Ms_currentTaskIndex].DelayApp <  Ms_delay[Ms_currentTaskIndex].DelayStart )
  {
  }
#endif
}

void MyTask_Func1(void *pvParameters )
{
 uint16_t *d =(uint16_t *) pvParameters;

 static uint16_t l_d = 0;

 l_d = *d;

  while(1)
  {
    TimingDelay(l_d);
    Ms_EndJob_Exec();
  }
}


void MyTask_Func2(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func3(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func4(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func5(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func6(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func7(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func8(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func9(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}


void MyTask_Func10(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}


void MyTask_Func11(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}


void MyTask_Func12(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}


void MyTask_Func13(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}



void MyTask_Func14(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}


void MyTask_Func15(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}


void MyTask_Func16(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}


void MyTask_Func17(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}


void MyTask_Func18(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func19(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func20(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}
void MyTask_Func21(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

  static uint16_t l_d = 0;

  l_d = *d;

   while(1)
   {
     TimingDelay(l_d);
     Ms_EndJob_Exec();
   }
}
void MyTask_Func22(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}
void MyTask_Func23(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}
void MyTask_Func24(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}
void MyTask_Func25(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}
void MyTask_Func26(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}
void MyTask_Func27(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}
void MyTask_Func28(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func29(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func30(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func31(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func32(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func33(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func34(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func35(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func36(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func37(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func38(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func39(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func40(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func41(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func42(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func43(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func44(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func45(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func46(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func47(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func48(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func49(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func50(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}


void MyTask_Func51(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func52(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func53(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func54(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func55(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func56(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func57(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func58(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func59(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}

void MyTask_Func60(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}


void MyTask_Func61(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}


void MyTask_Func62(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}


void MyTask_Func63(void *pvParameters )
{
  uint16_t *d =(uint16_t *) pvParameters;

   while(1)
   {
     TimingDelay(*d);
     Ms_EndJob_Exec();
   }
}




uint16_t CostTask1   ;
uint16_t PeriodTask1 ;


uint16_t CostTask2   ;
uint16_t PeriodTask2 ;


uint16_t CostTask3   ;
uint16_t PeriodTask3 ;


uint16_t CostTask4   ;
uint16_t PeriodTask4;

uint16_t CostTask5   ;
uint16_t PeriodTask5 ;

uint16_t CostTask6   ;
uint16_t PeriodTask6 ;

uint16_t CostTask7   ;
uint16_t PeriodTask7 ;

uint16_t CostTask8   ;
uint16_t PeriodTask8 ;

uint16_t CostTask9   ;
uint16_t PeriodTask9 ;

uint16_t CostTask10   ;
uint16_t PeriodTask10 ;

uint16_t CostTask11   ;
uint16_t PeriodTask11 ;

uint16_t CostTask12   ;
uint16_t PeriodTask12 ;

uint16_t CostTask13   ;
uint16_t PeriodTask13 ;

uint16_t CostTask14   ;
uint16_t PeriodTask14 ;

uint16_t CostTask15   ;
uint16_t PeriodTask15 ;

uint16_t CostTask16   ;
uint16_t PeriodTask16 ;

uint16_t CostTask17   ;
uint16_t PeriodTask17 ;

uint16_t CostTask18   ;
uint16_t PeriodTask18 ;

uint16_t CostTask19   ;
uint16_t PeriodTask19 ;

uint16_t CostTask20   ;
uint16_t PeriodTask20 ;

uint16_t CostTask21   ;
uint16_t PeriodTask21 ;

uint16_t CostTask22   ;
uint16_t PeriodTask22 ;

uint16_t CostTask23   ;
uint16_t PeriodTask23 ;

uint16_t CostTask24   ;
uint16_t PeriodTask24 ;

uint16_t CostTask25   ;
uint16_t PeriodTask25 ;

uint16_t CostTask26   ;
uint16_t PeriodTask26;

uint16_t CostTask27   ;
uint16_t PeriodTask27 ;

uint16_t CostTask28  ;
uint16_t PeriodTask28;

uint16_t CostTask29   ;
uint16_t PeriodTask29 ;

uint16_t CostTask30   ;
uint16_t PeriodTask30 ;

uint16_t CostTask31   ;
uint16_t PeriodTask31 ;

uint16_t CostTask32   ;
uint16_t PeriodTask32 ;

uint16_t CostTask33   ;
uint16_t PeriodTask33 ;

uint16_t CostTask34   ;
uint16_t PeriodTask34 ;

uint16_t CostTask35   ;
uint16_t PeriodTask35 ;

uint16_t CostTask36   ;
uint16_t PeriodTask36 ;

uint16_t CostTask36   ;
uint16_t PeriodTask36 ;

uint16_t CostTask37   ;
uint16_t PeriodTask37 ;

uint16_t CostTask38   ;
uint16_t PeriodTask38 ;

uint16_t CostTask39   ;
uint16_t PeriodTask39 ;

uint16_t CostTask40   ;
uint16_t PeriodTask40 ;

uint16_t CostTask41   ;
uint16_t PeriodTask41 ;

uint16_t CostTask42   ;
uint16_t PeriodTask42 ;

uint16_t CostTask43   ;
uint16_t PeriodTask43 ;

uint16_t CostTask44   ;
uint16_t PeriodTask44 ;

uint16_t CostTask45   ;
uint16_t PeriodTask45 ;

uint16_t CostTask46   ;
uint16_t PeriodTask46 ;

uint16_t CostTask47   ;
uint16_t PeriodTask47 ;

uint16_t CostTask48   ;
uint16_t PeriodTask48 ;

uint16_t CostTask49   ;
uint16_t PeriodTask49 ;

uint16_t CostTask50   ;
uint16_t PeriodTask50 ;

uint16_t CostTask51   ;
uint16_t PeriodTask51 ;

uint16_t CostTask52   ;
uint16_t PeriodTask52 ;

uint16_t CostTask53   ;
uint16_t PeriodTask53 ;

uint16_t CostTask54   ;
uint16_t PeriodTask54 ;

uint16_t CostTask55   ;
uint16_t PeriodTask55 ;

uint16_t CostTask56   ;
uint16_t PeriodTask56 ;

uint16_t CostTask57   ;
uint16_t PeriodTask57 ;

uint16_t CostTask58   ;
uint16_t PeriodTask58 ;

uint16_t CostTask59   ;
uint16_t PeriodTask59 ;

uint16_t CostTask60   ;
uint16_t PeriodTask60 ;

uint16_t CostTask61   ;
uint16_t PeriodTask61 ;

uint16_t CostTask62   ;
uint16_t PeriodTask62 ;

uint16_t CostTask63   ;
uint16_t PeriodTask63 ;




int main(void)
{
#define stack_task 100

  setup();

  int s;
  uint64_t x;

  x = (uint64_t) 1<<31 ;

  x = ~x;

  s = NEXT_LIST( 0, x );

  //  SystemClock_Config();

  Sys_Enable_Peripherals_Clock();

  Sys_Configure_Clock_168MHz();

  SEGGER_SYSVIEW_Conf();

  PeriodTask1=8.0;CostTask1=1.0;MsFreeRTOS_CreateTask(  MyTask_Func1, "Task1", stack_task, (void*) &CostTask1 , 2 , NULL  , PeriodTask1,PeriodTask1, CostTask1 );

  PeriodTask2=11.0;CostTask2=4.0;MsFreeRTOS_CreateTask(  MyTask_Func2, "Task2", stack_task, (void*) &CostTask2 , 2 , NULL  , PeriodTask2,PeriodTask2, CostTask2 );

  PeriodTask3=19.0;CostTask3=1.0;MsFreeRTOS_CreateTask(  MyTask_Func3, "Task3", stack_task, (void*) &CostTask3 , 2 , NULL  , PeriodTask3,PeriodTask3, CostTask3 );

  PeriodTask4=21.0;CostTask4=4.0;MsFreeRTOS_CreateTask(  MyTask_Func4, "Task4", stack_task, (void*) &CostTask4 , 2 , NULL  , PeriodTask4,PeriodTask4, CostTask4 );

  PeriodTask5=70.0;CostTask5=19.0;MsFreeRTOS_CreateTask(  MyTask_Func5, "Task5", stack_task, (void*) &CostTask5 , 2 , NULL  , PeriodTask5,PeriodTask5, CostTask5 );

   /*CPU utilization: 0.9185573198731094*/

  vTaskStartScheduler();

  while (1)
  {
  }
}

/**
 * @brief System Clock Configuration
 * @retval None
 */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
   */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the CPU, AHB and APB busses clocks
   */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks
   */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
  |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
 * @brief  This function is executed in case of error occurrence.
 * @retval None
 */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
