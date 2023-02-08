#include<stdio.h>
void mul(int a,int b)
{
	int result=0;
	while(b!=0)
	{
		result = result + a;
		b--;
	}
	printf("Product is : %d\n",result);
}
void product(int a,int b)
{
	int p=0;
	while(b>0)
	{
		if((b&1)!=0)
			p=p+a;
		a=a<<1;
		b=b>>1;
	}
	printf("%d\n",p);

}
void main()
{
        int a,b;
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
	void (*fp)(int,int)=mul;
	fp(a,b);
	product(a,b);
}

