#include "stm32f4xx.h" 

int main(void)
{
	RCC_AHB1ENR |= (1<<7);
	
	GPIOH_MODER  &= ~( 0x03<< (2*10));	
	/*PH10 MODER10 = 01b 输出模式*/
	GPIOH_MODER |= (1<<2*10);
	
	/*GPIOH OTYPER10清空*/
	GPIOH_OTYPER &= ~(1<<1*10);
	/*PH10 OTYPER10 = 0b 推挽模式*/
	GPIOH_OTYPER |= (0<<1*10);
	
	/*GPIOH OSPEEDR10清空*/
	GPIOH_OSPEEDR &= ~(0x03<<2*10);
	/*PH10 OSPEEDR10 = 0b 速率2MHz*/
	GPIOH_OSPEEDR |= (0<<2*10);
	
	/*GPIOH PUPDR10清空*/
	GPIOH_PUPDR &= ~(0x03<<2*10);
	/*PH10 PUPDR10 = 01b 上拉模式*/
	GPIOH_PUPDR |= (1<<2*10);
	
	/*PH10 BSRR寄存器的 BR10置1，使引脚输出低电平*/
	GPIOH_BSRR |= (1<<16<<10);
	
	while(1);
}

void SystemInit(void)
{
}
