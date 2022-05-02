#include<stdio.h>
#define SIZE 5

void selection_sort(int *arr,int n)
{
	int min,temp;
	for (int i = 0;i < n;i++)
	{
		min = i;
		
			for (int j = i + 1;j < n;j++)
			{
				if (arr[j] < arr[min])
				{
					min = j;
				}
			}
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
	}
}
		

int main()
{
	int arr[SIZE];
	for (int i = 0;i < SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,SIZE);
	for (int i = 0;i < SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

