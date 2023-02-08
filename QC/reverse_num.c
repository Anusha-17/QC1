#include<stdio.h>
void reverse(int num)
{
	int rev=0;
	while(num!=0)
	{
		rev=rev*10+num%10;
		num=num/10;
	}
	printf("Reversed number is:%d\n",rev);
}
void main()
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	void (*fp)(int)=reverse;
	fp(num);
}
