#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],n,i,j,k;
	printf("Enter size:\n");
	scanf("%d",&n);
	printf("Enter the elements in first matrix:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("Enter the elements in second matrix:\n");
	for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                        scanf("%d",&b[i][j]);
	for(i=0;i<n;i++)
	{
                for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}   
	printf("Product of the two matrix is:\n");
	for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                        printf("%d ",c[i][j]);
		printf("\n");



}

