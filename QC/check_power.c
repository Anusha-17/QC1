#include<stdio.h>
void checkpowerof2(int num)
{
	if((num & (num-1)) == 0)
		printf("Given number is power of 2\n");
	else
		printf("Given number is not power of 2\n");
}
void main()
{
	int num=0;
	printf("Enter number:");
	scanf("%d",&num);
	/*
	if(checkpowerof2(num))
		printf("Given number is power of 2\n");
	else
		printf("Given number is not power of 2\n");*/
	void (*fp)(int)=checkpowerof2;
	fp(num);
}
