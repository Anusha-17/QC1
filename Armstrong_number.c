#include<stdio.h>
void armstrong_num(int num)
{
	int rem,sum=0,temp;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	if(temp==sum)
		printf("%d is armstrong number.\n",sum);
	else
		printf("%d is not armstrong number.\n",sum);
}
void main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	void (*fp)(int)=armstrong_num;
	fp(num);
}

