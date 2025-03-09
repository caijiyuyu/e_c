#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(char* arr, char* arr1)
{
	assert(arr && arr1);
	while (*arr++ == *arr1++)
	{
		if (*arr =='\0')
		{
			return 0;
		}
		
	}
	arr--;//由于在while中的条件判断里的后置++使得跳出while循环时*arr和*arr1变成\0发生错误。
	arr1--;
	return *arr - *arr1;
}
//模拟strcmp函数
int main()
{
	char arr[20] = "abcde";
	char arr1[20] = "abcdf";
	int ret =my_strcmp(arr, arr1);
	if (ret == 0)
	{
		printf("==");
	}
	if (ret < 0)
	{
		printf("<");
	}
	if (ret > 0)
	{
		printf(">");
	}
}