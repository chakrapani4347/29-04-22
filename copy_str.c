#include<stdio.h>
int str_copy(char *str1,char *str2)
{
	int count = 1,i = 0;
	for (i = 0;*(str1 + i) != '\0';i++)
	{
		*(str2 + i) = *(str1 + i);
		count ++;
	}
	//printf("%s",str2);
	return count;
}
int main()
{
	char str1[] = "chakri",str2[100];
	int str_len = str_copy(str1,str2);
	printf("%d\n",str_len);
	return 0;
}


