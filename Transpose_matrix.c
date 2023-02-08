/* Transposing rows and columns of 2D array */

#include<stdio.h>
int main()
{
	int a[10][10],i,j,r,c;
	printf("Enter no on rows and columns:");
	scanf("%d %d",&r,&c);

	printf("Enter the data into rows and columns:");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);

	printf("Elements are :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("After transposing elements of an array area:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[j][i]);
		}
	        printf("\n");
	}
	return 0;
}


