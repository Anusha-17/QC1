#include<stdio.h>
void main()
{
	int a[10],freq[10],i,j,count,size;
	printf("Enter no of elements in an array:");
	scanf("%d",&size);
	printf("Enter %d elements of an array:",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		freq[i]=-1;
	}
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				freq[j]=0;
			}
		}
	if(freq[i]!=0)
	{
		freq[i]=count;
	}
	}
	printf("Frequency of all the elements in the array are:\n");
	for(i=0;i<size;i++)
	{
		if(freq[i]!=0)
		{
			printf("%d occurs %d times\n",a[i],freq[i]);
		}
	}
}
