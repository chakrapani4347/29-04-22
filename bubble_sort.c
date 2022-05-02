#include<stdio.h>
#define SIZE 5

void bubble_sort(int *arr,int n)
{
	int temp;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0; j < n - i -1;j++)
		{
			if (arr[j] > arr[j + 1])
			{			
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[SIZE];
	for (int i = 0;i < SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,SIZE);
	for (int i = 0;i < SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

