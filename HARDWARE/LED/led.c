#include "led.h"
#include "delay.h"
#include "motor.h"
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
//OUT1-PA4  OUT3-PA6 OUT2-PA5 OUT4-PA7
//初始化为输出口.并使能这两个口的时钟		    
//LED IO初始化

void LED_Init(void)
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC|RCC_APB2Periph_GPIOA, ENABLE);		 //使能端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;				 //LED0--> 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIO

}

void KEY_Init(void)
{
  GPIO_InitTypeDef  GPIO_InitStructure;
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);		 //使能端口时钟
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;				 //LED0--> 端口配置
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD ; 		 //下拉输入
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
  GPIO_Init(GPIOA, &GPIO_InitStructure);					 //根据设定参数初始化GPIO
	

}

void KEY_Scan(void)
 {
		
	if(OUT4 == 0&&OUT1 == 0&&OUT2 == 1&&OUT3 == 1)   //直走
		{
				delay_ms(5);//消抖
				if(OUT4 == 0&&OUT1 == 0&&OUT2 == 1&&OUT3 == 1)
				{
					 //LED4 =~LED4;
					//delay_ms(50);
					GOGOGO();
					delay_ms(35);
				}
		}
		
		if(OUT4 == 0&&OUT1 == 0&&OUT2 == 1&&OUT3 == 0)   //直走
		{
				delay_ms(5);//消抖
				if(OUT4 == 0&&OUT1 == 0&&OUT2 == 1&&OUT3 == 0)
				{
					 //LED4 =~LED4;
					//delay_ms(50);
					GOGOGO();
					delay_ms(35);
				}
		}
		if(OUT4 == 0&&OUT1 == 0&&OUT2 == 0&&OUT3 == 1)   //直走
		{
				delay_ms(5);//消抖
				if(OUT4 == 0&&OUT1 == 0&&OUT2 == 0&&OUT3 == 1)
				{
					 //LED4 =~LED4;
					//delay_ms(50);
					GOGOGO();
					delay_ms(35);
				}
		}
			if(OUT1 == 1&&OUT2 == 1&&OUT3 == 1&&OUT4 == 1)   //大黑线停
		{
				delay_ms(5);//消抖
				if(OUT1 == 1&&OUT2 == 1&&OUT3 == 1&&OUT4 == 1)
				{
					 //LED4 =~LED4;
					//delay_ms(50);
					 RightfrontBreak();
					 LeftfrontBreak();
           LeftrearBreak();
           RightbackBreak();
           
				}
		}
		
		if(OUT4 == 1&&OUT3 == 1&&OUT2 == 0&&OUT1 == 0)   //左转
		{
				delay_ms(5);//消抖
				if(OUT4 == 1&&OUT3 == 1&&OUT2 == 0&&OUT1 == 0)
				{
					RightfrontGo();//右前 正
					RightbackGo(); //右后 正 
					LeftfrontBreak();
          LeftrearBreak();
				}
		}
		
/*				if(OUT4 == 1&&OUT3 == 0&&OUT2 == 0&&OUT1 == 0)   //左转
		{
				delay_ms(5);//消抖
				if(OUT4 == 1&&OUT3 == 0&&OUT2 == 0&&OUT1 == 0)
				{
					RightfrontGo();//右前 正
					RightbackGo(); //右后 正 
					LeftfrontBack();
          LeftrearBack();///!!!!
				}
		}
		*/
			if(OUT1 == 1&&OUT2 == 1&&OUT3 == 0&&OUT4 == 0)   //右转
		{
				delay_ms(5);//消抖
				if(OUT1 == 1&&OUT2 == 1&&OUT3 == 0&&OUT4 == 0)
				{
					LeftfrontGo();//左前  正 
					LeftrearGo(); //左后  正
          RightbackBreak();
          RightfrontBreak();					
				}
		}
		
/*		if(OUT1 == 1&&OUT2 == 0&&OUT3 == 0&&OUT4 == 0)   //右转
		{
				delay_ms(5);//消抖
				if(OUT1 == 1&&OUT2 == 0&&OUT3 == 0&&OUT4 == 0)
				{
					LeftfrontGo();//左前  正 
					LeftrearGo(); //左后  正
          RightfrontBack();
          RightbackBack();/////!!!
				}
		}
		*/
		/*if(OUT4 == 0&&OUT1 == 0&&OUT2 == 0&&OUT3 == 0)   //后退
		{
				delay_ms(5);//消抖
				if(OUT4 == 0&&OUT1 == 0&&OUT2 == 0&&OUT3 == 0)
				{
					 
					BackBackBack();
				}
		}
		*/
	}