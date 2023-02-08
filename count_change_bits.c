#include<stdio.h>
void change_bits(int a,int b)
{
	int count=0,res;
	res=a^b;
	while(res>0)
	{
		count++;
		res=res & (res-1);
	}
	printf("%d\n",count);
}
void main()
{
	int a,b;
	printf("Enter numbers to change:\n");
	scanf("%d %d",&a,&b);
	void (*fp)(int,int)=change_bits;
	fp(a,b);
}
