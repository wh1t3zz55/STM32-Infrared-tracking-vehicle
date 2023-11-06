#ifndef __MOTOR_H
#define __MOTOR_H	 
#include "sys.h"

#define EN_A PBout(2)// PC2
#define EN_B PEout(3)// PC3	

void LeftfrontBack(void);//左前  反   !
void LeftfrontGo(void);//左前  正     ！

void LeftrearBack(void); //左后 反  
void LeftrearGo(void); //左后   正

void RightbackGo(void); //右后 正  
void RightbackBack(void); //右后 反

void RightfrontBack(void);//右前  反
void RightfrontGo(void);//右前 正

void GOGOGO(void);
void BackBackBack(void);



void LeftfrontBreak(void);
void LeftrearBreak(void);
void RightbackBreak(void);
void RightfrontBreak(void);

#endif


