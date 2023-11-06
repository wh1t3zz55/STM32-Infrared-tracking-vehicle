#ifndef __LED_H
#define __LED_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK战舰STM32开发板
//LED驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2012/9/2
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 
//OUT1-PA4  OUT3-PA6 OUT2-PA5 OUT4-PA7 灯
#define LED0 PBout(5)// PB5
#define LED1 PEout(5)// PE5	


#define LED4  PCout(13)//PC13  定义LED的IO口，PCout（13）指 GPIOC_Pin_13 输出模式
#define KEY0  PAin(0) //按键

#define OUT1  PAin(4)//灯
#define OUT2  PAin(5)
#define OUT3  PAin(6)
#define OUT4  PAin(7)

/////////////////////////////////////////////////////////////////////////////////////

void LED_Init(void);//初始化

void KEY_Init(void);
void KEY_Scan(void);
		 				    
#endif
