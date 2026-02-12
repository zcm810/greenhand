#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
//生成随机数大致是这样，但这么写只能生成一次、要想生成多次，则使用循环，但seed只要设置一次就好
int main()
{
	srand((unsigned int)time(NULL));//时间戳设置seed
	int ret = rand();
	printf("%d", ret);
	return 0;
}