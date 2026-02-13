#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fun(int x) 
{
	if (x >= 10)
	{
		int a1 = 0;
		a1 = x % 10;
		printf("%d\n", a1);
		int next = x / 10;
		fun(next);
	}
	else
		printf("%d\n", x);
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	fun(num);
	return 0;
}