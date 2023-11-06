#ifndef __TIMER_H
#define __TIMER_H
#include "sys.h"



void TIM3_Int_Init(u16 arr,u16 psc);
void Q_Z1_PWM_INIT(u16 arr,u16 psc);
void Q_Z2_PWM_INIT(u16 arr,u16 psc);
void TIM8_Int_Init(u16 arr,u16 psc);
void Q_Y1_PWM_INIT(u16 arr,u16 psc);
void Q_Y2_PWM_INIT(u16 arr,u16 psc);
void TIM4_Int_Init(u16 arr,u16 psc);
void H_Z1_PWM_INIT(u16 arr,u16 psc);
void H_Z2_PWM_INIT(u16 arr,u16 psc);
void H_Y1_PWM_INIT(u16 arr,u16 psc);
void H_Y2_PWM_INIT(u16 arr,u16 psc);
#endif
