#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void* my_memcpy( void* dest, const void* src, size_t num)
{
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int arr1[10] = { 0 };
	my_memcpy(arr1, arr, 28);
	
}