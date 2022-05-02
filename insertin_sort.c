#include<stdio.h>
#define SIZE 5

void insertion_sort(int *arr,int n)
{
	int key,j ;
	for (int i = 1;i < n;i++)
	{
		key = arr[i];
		j = i - 1;
		while (key < arr[j] && j >= 0)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	int arr[SIZE];
	for (int i = 0;i < SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,SIZE);
	for (int i = 0;i < SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

