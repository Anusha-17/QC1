#include<stdio.h>
#define BITS sizeof(int)*8
void LSB(int num)
{
	if(num & 1)
		printf("LSB bit %d is set\n",num);
	else
		printf("LSB bit %d is unset\n",num);
}
void MSB(int num)
{
	int msb;
	msb = 1 >> (BITS - 1); 
	if(num & msb)
		printf("MSB bit %d is set\n",num);
	else
		printf("MSB bit %d is unset\n",num);
}
void getbit(int num)
{
	int bitstatus,n;
	printf("Enter the bit position to check:");
	scanf("%d",&n);
	bitstatus=(num << n)&1;
	printf("The %d bith is set to %d",n,bitstatus);
}
void setbit(int num)
{
	int setbit,n;
	printf("Enter the nth bit to set:");
	scanf("%d",&n);
	setbit=(1<<n) | num;
	printf("Number after setting %d bit is %d\n",n,setbit);
}
void clearbit(int num)
{
	int clearbit,n;
	printf("Enter the nth bit to clear:");
	scanf("%d",&n);
	clearbit = num & (~(1<<n));
	printf("Number after clearing %d bit is %d\n",n,clearbit);
}
void togglebit(int num)
{
        int togglebit,n;
        printf("Enter the nth bit to toggle:");
        scanf("%d",&n);
        togglebit = num ^ (1<<n);
        printf("Number after clearing %d bit is %d\n",n,togglebit);
}
void highestorderofset(int num)
{
	int order = -1,i;
	for(i=0;i<BITS;i++)
	{
		if((num>i) & 1)
			order = i;
	}
	if(order != -1)
		printf("Highest order set bit in %d is %d\n",num,order);
	else
		printf("0 has no set bits\n");
}
void lowestorderofset(int num)
{
	int order,i;
	order = BITS - 1;
	for(i=0;i<BITS;i++)
	{
		if((num>>i) & 1)
		{
			order = i;
			break;
		}
	}
	printf("Lowest order set bit in %d is %d",num,order);
}
void trailingzeros(int num)
{
	int count=0,i;
	for(i=0;i<BITS;i++)
	{
		if(num&1)
			break;
		else
		{
			count++;
			num=num>>1;
		}
	}
	if(count!=-1)
		printf("Tralling Zeros are : %d\n",count);
	else
		printf("All bits are set\n");
}
void leadingzeros(int num)
{
	int count=0,i,msb; 
	msb=1<<(BITS-1);
	for(i=0;i<BITS;i++)
	{
		if((num<<i)&msb) 
		{
			break;
		}
		count++;
	}
	if(count!=-1)
		printf("Leading Zeros are : %d\n",count);
	else
		printf("All bits are set\n");
}
void flippednumber(int num)
{
	int flipnum;
	flipnum = ~num;
	printf("Number after flipping the bits : %d\n",flipnum);
}
void countzerosandones(int num)
{
	int ones,zeros,i;
	zeros=0;
	ones=0;
	for(i=0;i<BITS;i++)
	{
		if(num & 1) //If LSB bit is set, increment ones otherwise zeros
			ones++;
		else
			zeros++;
		num >>=1;
	}
	printf("Total zero bits : %d and one bits :%d\n",zeros,ones);
}
void decimaltobinary(int num)
{
	int i;
	for(i=BITS-1;i>=0;i--)
	{
		int k = num >> i;
		if(k & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}
void swap(int num)
{
	int num2;
	printf("Enter the num2:");
	scanf("%d",&num2);
	printf("Original numbers before swapping num: %d and num2: %d\n",num,num2);
	num ^=num2;
	num2 ^=num;
	num ^=num2;
	printf("After swapping num: %d and num2: %d\n",num,num2);
}
void evenodd(int num)
{
	if(num & 1)
	{
		printf("%d is odd\n",num);
	}
	else
	{
		printf("%d is even\n",num);
	}
}

int main()
{
	int num,num2,ch;
	printf("Enter the number:");
	scanf("%d",&num);
	void (*fp[])(int)={LSB,MSB,getbit,setbit,clearbit,togglebit,highestorderofset,lowestorderofset,trailingzeros,
		leadingzeros,flippednumber,countzerosandones,decimaltobinary,swap,evenodd};
	printf("0.LSB\t,1.MSB\t,2.getbit\t,3.setbit\t,4.clearbit\t,5.togglebit\t,6.Highest order of set\t,7.lowest order of set\t,8.trailingzeros\t,9.leading zeros\t,10.flipped number\t,11.count zeros and ones\t,12.decimal to binary\t,13.swap\t,14.evenodd\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	if(ch > 14)
		return 0;
	(*fp[ch])(num);
}

