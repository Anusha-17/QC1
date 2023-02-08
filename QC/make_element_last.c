#include<stdio.h>
void fun(int a[],int n,int x)
{
	int i,temp,j,k,l;
	for(i=0,j=n-1;i<n;i++)
	{
		if(a[i]==x)
		{
		   temp=a[i];
		   
		   for(k=i+1,l=i;k<=j;k++,l++)
		   {
		      a[l]=a[k];
		    }
		   a[j]=temp;	
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
int main()
{
	int a[10]={1,2,7,3,4,7,5,6,7,8},i,n=10,b=7;
	fun(a,n,b);
}
