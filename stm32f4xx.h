//外设寄存器
#define PERIPH_BASE         ((unsigned int)0x40000000)
	
//总线寄存器
#define APB1PERIPH_BASE     PERIPH_BASE
#define APB2PERIPH_BASE     (PERIPH_BASE + 0x00010000)
#define AHB1PERIPH_BASE     (PERIPH_BASE + 0x00020000)
#define AHB2PERIPH_BASE     (PERIPH_BASE + 0x10000000)

//GPIO 寄存器
#define GPIOA_BASE          AHB1PERIPH_BASE
#define GPIOB_BASE          (AHB1PERIPH_BASE + 0x00000400)
#define GPIOC_BASE          (AHB1PERIPH_BASE + 0x00000800)
#define GPIOD_BASE          (AHB1PERIPH_BASE + 0x00000C00)
#define GPIOE_BASE          (AHB1PERIPH_BASE + 0x00001000)
#define GPIOF_BASE          (AHB1PERIPH_BASE + 0x00001400)
#define GPIOG_BASE          (AHB1PERIPH_BASE + 0x00001800)
#define GPIOH_BASE          (AHB1PERIPH_BASE + 0x00001C00)
#define GPIOI_BASE          (AHB1PERIPH_BASE + 0x00002000)
//复位和时钟控制
#define RCC_BASE            (AHB1PERIPH_BASE + 0x00003800)

//外设时钟使能寄存器
#define RCC_AHB1ENR         *((unsigned int *)(RCC_BASE + 0X30))

//GPIO 模块寄存器
#define GPIOH_MODER         *(unsigned int*)GPIOH_BASE
#define GPIOH_OTYPER        *(unsigned int*)(GPIOH_BASE + 0x04)
#define GPIOH_OSPEEDR       *(unsigned int*)(GPIOH_BASE + 0x08)
#define GPIOH_PUPDR         *(unsigned int*)(GPIOH_BASE + 0x0C)
#define GPIOH_IDR           *(unsigned int*)(GPIOH_BASE + 0x10)
#define GPIOH_ODR           *(unsigned int*)(GPIOH_BASE + 0x14)
//端口置位/复位寄存器
#define GPIOH_BSRR          *(unsigned int*)(GPIOH_BASE + 0x18)
#define GPIOH_LCKR          *(unsigned int*)(GPIOH_BASE + 0x1C)
#define GPIOH_AFRL          *(unsigned int*)(GPIOH_BASE + 0x20)
#define GPIOH_AFRH          *(unsigned int*)(GPIOH_BASE + 0x20)
