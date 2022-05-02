#include<stdio.h>
#define row 3
#define col 3
void add_arr(int (*arr1)[row] ,int (*arr2)[row],int (*sum)[row])
{
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			*(*(sum + i)+j) = *(*(arr1 + i) + i) + *(*(arr2 + i) + j);
		}
	}
}
int main()
{
	int arr1[row][col],arr2[row][col],sum[row][col],i = 0,j = 0;
	printf("Enter arr1 elements : \n");
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	printf("Entere secund arr elements \n");
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}
	add_arr(arr1,arr2,sum);
	printf("Addition of two numbers : \n");
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}




