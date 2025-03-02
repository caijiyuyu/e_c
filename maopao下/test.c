#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//struct stu
//{
//	char name[20];
//	int age;
//};

//简单模拟qsort函数
void Swap(char *buff1,char* buff2,int width)
{
	char tmp = *buff1;
	*buff1 = *buff2;
	*buff2 = tmp;
	buff1++;
	buff2++;

}
void bubble_sort(void*base,int sz,int width,int(*cmp)(const void*e1,const void*e2))
{
	int i = 0;
	int flag = 1;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)//判断左右俩数的大小
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
			if (flag == 1)
			{
				break;
			}
		}
	}
}

int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}