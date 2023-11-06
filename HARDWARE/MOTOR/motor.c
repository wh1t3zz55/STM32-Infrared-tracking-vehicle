#include "motor.h"
//初始化为输出口.并使能这两个口的时钟		    
//QL298N EN-A、B初始化
////////////////////////////////////////////////////////////////////////
void LeftfrontBack(void)//pc6 pc0 pc1    左前轮反转
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1|GPIO_Pin_6;				 //LED0--> 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIO
	
 GPIO_SetBits(GPIOC,GPIO_Pin_1|GPIO_Pin_6);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_0);
 
}
 
void LeftfrontGo(void)//pc6 pc0 pc1
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1|GPIO_Pin_6;				 //LED0--> 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIO
	
 GPIO_SetBits(GPIOC,GPIO_Pin_0|GPIO_Pin_6);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_1);
 
}
/////////////////////////////////////////////////////////////////////////
void LeftrearBack(void)
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_12;				 //LED0--> 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIO
	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);	 //使能端口时钟	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;				 //端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOD, &GPIO_InitStructure);


 GPIO_ResetBits(GPIOD,GPIO_Pin_2);	
 GPIO_SetBits(GPIOC,GPIO_Pin_9|GPIO_Pin_12);
}

void LeftrearGo(void)//
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_12;				 //LED0--> 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIO
 		
	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);	 //使能端口时钟	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;				 //端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOD, &GPIO_InitStructure);
	GPIO_ResetBits(GPIOC,GPIO_Pin_12);
  GPIO_SetBits(GPIOC,GPIO_Pin_9);		
  GPIO_SetBits(GPIOD,GPIO_Pin_2);
}
////////////////////////////////////////////////////////////////
void RightbackGo(void)
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_10|GPIO_Pin_11;				 //LED0--> 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIO
	
 GPIO_SetBits(GPIOC,GPIO_Pin_11|GPIO_Pin_8);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_10);
 
}

void RightbackBack(void)
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_10|GPIO_Pin_11;				 //LED0--> 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIO
	
 GPIO_SetBits(GPIOC,GPIO_Pin_8|GPIO_Pin_10);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_11);
}


void RightfrontBack(void)//右前 反 
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2 | GPIO_Pin_3|GPIO_Pin_7;				 //LED0--> 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIO
	
 GPIO_SetBits(GPIOC,GPIO_Pin_3|GPIO_Pin_7);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_2);
}

void RightfrontGo(void)//右前 正
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2 | GPIO_Pin_3|GPIO_Pin_7;				 //LED0--> 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIO
	
 GPIO_SetBits(GPIOC,GPIO_Pin_2|GPIO_Pin_7);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_3);
}

///////////////////////////////////前进后退
void GOGOGO(void)
{
  LeftfrontGo();//左前  正
  RightfrontGo();//右前 正
	 RightbackGo(); //右后 正 
	 LeftrearGo(); //左后   正
}

void BackBackBack(void)
{
	RightbackBack(); //右后 反
	LeftrearBack(); //左后 反 
  RightfrontBack();//右前  反
	LeftfrontBack();//左前  反 
	
}









////////////////////////////////////////////////停止
void LeftfrontBreak(void)
{
GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1|GPIO_Pin_6;				 //LED0--> 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIO
		
 GPIO_ResetBits(GPIOC,GPIO_Pin_0|GPIO_Pin_6|GPIO_Pin_1);
}

void LeftrearBreak(void)
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_12;				 //LED0--> 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIO
	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);	 //使能端口时钟	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;				 //端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOD, &GPIO_InitStructure);


 GPIO_ResetBits(GPIOD,GPIO_Pin_2);	
 GPIO_ResetBits(GPIOC,GPIO_Pin_9|GPIO_Pin_12);
}

void RightbackBreak(void)
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_10|GPIO_Pin_11;				 //LED0--> 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIO
	
 GPIO_ResetBits(GPIOC,GPIO_Pin_8|GPIO_Pin_10);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_11);
}


void RightfrontBreak(void)
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2 | GPIO_Pin_3|GPIO_Pin_7;				 //LED0--> 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //根据设定参数初始化GPIO
	
 GPIO_ResetBits(GPIOC,GPIO_Pin_3|GPIO_Pin_7);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_2);
}