#include<stdio.h>
#define size 5
void array_avg(int a[])
{
	int i,sum=0,avg;
        for(i=0;i<size;i++)
        {
                sum=sum+a[i];
        }
        avg=sum/size;
        printf("The average of the array elements : %d\n",avg);
}

void main()
{
	int a[]={1,2,3,4,5};
/*	int i,sum=0,avg;
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/size;
	printf("The average of the array elements : %d\n",avg);*/
	void (*fp)(int[])=array_avg;
	fp(a);
}

