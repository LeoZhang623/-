#include<stdio.h>
int main()
{
	int input;
	while(1)
	{
		printf("请输入-1，0，1中的一个数字：\n");
		scanf("%d",&input);
		if(input==-1)
		{
			printf("程序退出");
			break;
		}		
		else if(input==0)
		{
			printf("helloworld\n");
		}
		else if(input==1)
		{
			printf("HELLOWORLD\n");
		}
		else
		{
			printf("您输入的数字不符合要求\n");
		}
	}	
	return 0;
}
