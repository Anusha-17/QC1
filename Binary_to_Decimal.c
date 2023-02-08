#include<stdio.h>
void BinarytoDecimal(int num)
{
	int bnum,dnum=0,base=1,rem;
	while(num>0)
	{
		rem=num%10;
		dnum=dnum+rem*base;
		num=num/10;
		base=base*2;
	}
	printf("Decimal number is : %d\n",dnum);
}
void main()
{
	int num;
	printf("Enter binary number:");
	scanf("%d",&num);
	void (*fp)(int)=BinarytoDecimal;
	fp(num);
	
}

