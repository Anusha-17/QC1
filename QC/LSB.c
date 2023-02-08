#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n & 1)
		printf("LSB is set to 1\n");
	else
		printf("LSB is set to 0\n");
}
