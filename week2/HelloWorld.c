#include<stdio.h>
int main()
{
	int input;
	while(1)
	{
		printf("������-1��0��1�е�һ�����֣�\n");
		scanf("%d",&input);
		if(input==-1)
		{
			printf("�����˳�");
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
			printf("����������ֲ�����Ҫ��\n");
		}
	}	
	return 0;
}
