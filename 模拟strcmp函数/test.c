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
	arr--;//������while�е������ж���ĺ���++ʹ������whileѭ��ʱ*arr��*arr1���\0��������
	arr1--;
	return *arr - *arr1;
}
//ģ��strcmp����
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