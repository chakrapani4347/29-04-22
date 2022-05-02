#include<stdio.h>


void sort_arr(int *arr,int size)
{
	int i = 0,temp;
	for (i = 0;i < size;i++)
	{
		for (int j = i + 1;j < size;j++)
		{
			if (*(arr + i) > *(arr + j))
			{
				temp = *(arr + i);
				*(arr + i )= *(arr + j);
				*(arr + j) = temp;
			}
		}
	}
}
int main()
{
	int size = 5;
	int arr[size];
	for(int i = 0;i < size;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort_arr(arr,size);
	for (int i = 0;i < size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;

}
