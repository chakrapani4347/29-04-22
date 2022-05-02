#include<stdio.h>
#include"header.h"

void swap(int *num1,int *num2)
{
	*num1 = *num1 + *num2;
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;
}
int main()
{
	int num1 = 10, num2 = 20;
	printf("Before swap : \n");
	printf("num1 = %d\tnum2 = %d\n",num1,num2);
	swap(&num1,&num2);
	printf("\nAfter swap :\n");
	printf("num1 = %d\tnum2 = %d\n",num1,num2);
	return 0;
}


