#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int j = 0;
//
//	for (j = 0; j < sz - 1; j++)
//	{
//		int i = 0;
//		for (i = 0; i < sz - 1 - j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int temp = 0;
//				temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//}

int cmp(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}
int main()
{
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}