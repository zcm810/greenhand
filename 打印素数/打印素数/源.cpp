#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int num = 0;
	int judge = 0;
	scanf("%d", &num);
	for(i=2;i<num;i++)
		if (num % i == 0) 
		{
			printf("%d不是素数",num);
			judge = 1;
			break;
		}
	if (judge == 0)
		printf("%d 是素数", num);
	return 0;
}