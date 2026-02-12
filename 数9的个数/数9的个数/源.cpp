#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char num[10] = {};
//	int len = strlen(num);
//	int i = 0;
//	int count = 0;
//	char nine = '9';
//	int x = 0;
//	for (x = 1; x <= 100; x++)
//		{
//		sprintf(num, "%d",x);
//			for (i = 0; i <= len; i++)
//			{
//				if (num[i] == nine)
//					count++;
//			}
//		}
//	printf("%d¸ö", count);
//
//	return 0;
//}
#include <stdio.h>


int main()
{
	int i = 0;
	int count = 0;


	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d\n", count);
	return 0;
}