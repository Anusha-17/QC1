/* To find Maximum difference between two elements of an Array
 
   5 4 3 2 1 

   Max = 5
   Min = 1
   Max difference = max - min
   5-1=4

*/

#include<stdio.h>
void max_diff(int a[],int n)
{
	int max,min;
	max=min=a[0];
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("Max Difference is : %d\n",max-min);
}
void main()
{
	int a[10],i,n;
	printf("Enter no of elements in an array:");
	scanf("%d",&n);
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	void (*fp)(int[],int)=max_diff;
	fp(a,n);
}


