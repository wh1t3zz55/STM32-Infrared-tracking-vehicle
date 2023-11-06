#include "tim.h"
#include "led.h"
#include "usart.h"           

int x=0;
void TIM1_Int_Init(u16 arr,u16 psc)
{
	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	NVIC_InitTypeDef NVIC_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE); 
	

	TIM_TimeBaseStructure.TIM_Period = (arr-1); 	
	TIM_TimeBaseStructure.TIM_Prescaler =(psc-1);
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1; //72MHZ																				
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  
	TIM_TimeBaseStructure.TIM_RepetitionCounter = 0x0;
	TIM_TimeBaseInit(TIM1, &TIM_TimeBaseStructure);

	TIM_ITConfig(TIM1,TIM_IT_Update,ENABLE ); 


	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	
	NVIC_InitStructure.NVIC_IRQChannel =  TIM1_UP_IRQn;  
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 3;  
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;  
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; 
	NVIC_Init(&NVIC_InitStructure);  

	TIM_Cmd(TIM1, ENABLE); 
  
}

void TIM1_UP_IRQHandler(void)  
{
	if ((TIM_GetITStatus(TIM1, TIM_IT_Update) != RESET)  )
	{	
		x++;
		//GPIO_WriteBit(GPIOC,GPIO_Pin_13 ,(BitAction)!(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_13)));//500ms÷¥––“ª¥Œ
		TIM_ClearITPendingBit(TIM1, TIM_IT_Update);  
	}
}
