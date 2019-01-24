/*******************************************************************************
* �ļ�����main.c
* ��  ����
* ��  �ߣ�CLAY
* �汾�ţ�v1.0.0
* ��  ��: 2019��1��23��20:01:26
* ��  ע����ʱʵ��PC8��Ӧ��LED1��˸
*         
*******************************************************************************
*/

#include "stm32f10x.h"
#include "led.h"


int main(void)
{
	int i;
	
	LEDInit();
	
	while(1)
	{
		GPIOD->ODR |= (1<<2);//PD2��1��ʹ��573������
		GPIOC->ODR ^= (1<<8);//PC8����ȡ��
		GPIOD->ODR &= ~(1<<2);//PD2��0���ر�573������
		for(i=0; i<500000; i++);
	}
}

