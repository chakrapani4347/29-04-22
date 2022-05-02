#include<stdio.h>
//#include"header.h"
#define size 5
void cpy_arr(int *arr1,int *arr2)
{
	for (int i = 0;i < size;i ++)
	{
		*(arr2 + i) = *(arr1 + i);
	}
}

int main()
{
	int arr1[size],arr2[size];
	for (int i = 0;i < size;i++)
	{
		scanf("%d",&arr1[i]);
	}
	cpy_arr(arr1,arr2);
	printf("After copying of one arr elements to another elements\n");
	for (int i = 0;i < size;i++)
	{
		printf("%d ",arr2[i]);
	}
	return 0;
}



