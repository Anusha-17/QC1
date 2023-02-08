#include<stdio.h>
#define NUM_SIZE sizeof(int)*2
void decimal_to_binary(int num)
{
	int i;
	for(i=NUM_SIZE-1;i>=0;i--)
	{
		int k = num >> i;
		if(k & 1)
			printf("1");
		else 
			printf("0");
	}
	printf("\n");
}

void decimal_to_binary2(int num)
{
	int i,index,a[NUM_SIZE];
	index=NUM_SIZE-1;
	while(index>=0)
	{
		a[index]=num & 1;
		index--;
		num >>= 1;
	}
	for(i=0;i<NUM_SIZE;i++)
		printf("%d",a[i]);
	printf("\n");
}
void arithmetic(int num)
{
	int i,a[NUM_SIZE];
	for(i=0;num>0;i++)
	{
		a[i]=num%2;
		num=num/2;
	}
	printf("Binary number is:");
	for(i=i-1;i>=0;i--)
		printf("%d",a[i]);
	printf("\n");
}

int main()
{
	int num;
	printf("Enter the number to convert:");
	scanf("%d",&num);
        void (*fp[])(int)={decimal_to_binary,decimal_to_binary2,arithmetic};
	int ch;
	printf("0.Bitwise1\t1.Bitwise2\t2.Arithmetic\n");
	printf("Enter the choice:");
	scanf("%d",&ch);
	if(ch > 2)
		return 0;
	(*fp[ch])(num);

}

