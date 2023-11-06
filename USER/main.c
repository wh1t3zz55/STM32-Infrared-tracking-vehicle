#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "timer.h"
#include "motor.h"
#include "tcrt.h"
#include "tim.h"

extern int x;
int i;

	
 int main(void)
 {		
// 	u16 led0pwmval=0;
	 
//	u8 dir=1;	
	u8 key; 
	delay_init();	    	 //延时函数初始化	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	TIM1_Int_Init(4999,7199); 
	uart_init(115200);	 //串口初始化为115200
 	LED_Init();			     //LED端口初始化
  
	 
	 

  //GOGOGO();//全速前进
	 //BackBackBack();//撤退
	 
	 while(1)
	{
     	KEY_Scan();
		//GOGOGO();
			/*LeftrearBack();
		delay_ms(10000);
		 LeftrearBreak();
		delay_ms(10000);
 
		
			LeftfrontGo();
		delay_ms(10000);
		LeftfrontBreak();
		delay_ms(10000);
 
		
			RightbackGo();
		delay_ms(10000);
		 RightbackBreak();
		delay_ms(10000);
 .
		
			RightfrontGo();
		delay_ms(10000);
		 RightfrontBreak();
		delay_ms(10000);
		*/
 
    }

}

	

