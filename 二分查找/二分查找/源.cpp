#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int want = 0;
	scanf("%d", &want);
	int sz = sizeof(arr) / sizeof(arr[0]);//size = 10
	int mid = sz / 2;
	int right = sz;
	int left = 0;
	while (arr[mid] != want)
	{
		if (want > arr[mid]) 
		{
			left = mid;
			mid = (left + right)/2;
			continue;
		}
		if (want < arr[mid])
		{
			right = mid;
			mid = (left + right)/2;
			continue;
		}


	}
	if (arr[mid] == want)
		printf("%d", mid);


	return 0;
}