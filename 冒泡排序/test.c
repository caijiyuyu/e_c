#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	//十个数换九趟
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		//一趟冒泡排序
		for (j = 0; j <sz-1-i;j++ )
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
//冒泡排序核心思想：两个相邻元素进行比较。
int main()
{
	//把数组排成升序
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
