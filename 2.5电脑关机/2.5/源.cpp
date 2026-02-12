#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char input[] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("你的电脑将在60s后关机，除非你输入我是猪");
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)
		system("shutdown -a");
	else
		goto again;
	return 0;
}
