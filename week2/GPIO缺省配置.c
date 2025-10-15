#include<stdio.h>
typedef enum
{	
	GPIO_Speed_2MHz=10,
	GPIO_Speed_10MHz=20,
	GPIO_Speed_50MHz=30
}GStype;
typedef struct
{
	GStype GPIO_Speed;
}GS;
void GPI0_StructureInit(GS*p)
{
	p->GPIO_Speed=GPIO_Speed_2MHz;
}
void PrintGS(GStype speed)
{
	switch (speed) 
	{
		case GPIO_Speed_2MHz:
			printf("GPIO配置速度为：GPIO_Speed_2MHz\n");
			break;
		case GPIO_Speed_10MHz:
			printf("GPIO配置速度为：GPIO_Speed_10MHz\n");
			break;
		case GPIO_Speed_50MHz:
			printf("GPIO配置速度为：GPIO_Speed_50MHz\n");
			break;
		default:
			printf("未知GPIO配置速度\n");
			break;
	}
}
int main()
{
	GS GPIO;
	GPI0_StructureInit(&GPIO);
	printf("GPIO速度配置值为：%d\n",GPIO.GPIO_Speed);
	PrintGS(GPIO.GPIO_Speed);
	return 0;
}
