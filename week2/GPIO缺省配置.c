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
			printf("GPIO�����ٶ�Ϊ��GPIO_Speed_2MHz\n");
			break;
		case GPIO_Speed_10MHz:
			printf("GPIO�����ٶ�Ϊ��GPIO_Speed_10MHz\n");
			break;
		case GPIO_Speed_50MHz:
			printf("GPIO�����ٶ�Ϊ��GPIO_Speed_50MHz\n");
			break;
		default:
			printf("δ֪GPIO�����ٶ�\n");
			break;
	}
}
int main()
{
	GS GPIO;
	GPI0_StructureInit(&GPIO);
	printf("GPIO�ٶ�����ֵΪ��%d\n",GPIO.GPIO_Speed);
	PrintGS(GPIO.GPIO_Speed);
	return 0;
}
