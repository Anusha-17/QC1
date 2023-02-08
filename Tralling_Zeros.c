#include<stdio.h>
#define NUM_SIZE sizeof(int)*8  //32 bits 
void main()
{
	int x,count=0,i;
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=0;i<NUM_SIZE;i++)
	{
		if(x&1)
			break;
		else
		{
			count++;
			x=x>>1;
		}
	}
	if(count!=-1)
		printf("Tralling Zeros are : %d\n",count);
	else
		printf("All bits are set\n");
}

/*#include<stdio.h>
#define NUM_SIZE sizeof(int)*8  //32 bits 
void tralling_zeros(int x)
{
	int count=0,i;
	for(i=0;i<NUM_SIZE;i++)
        {
                if(x&1)
                        break;
                else
                {
                        count++;
                        x=x>>1;
                }
        }
        if(count!=-1)
                printf("Tralling Zeros are : %d\n",count);
        else
                printf("All bits are set\n");
}
void main()
{
        int x,count=0,i;
        printf("Enter the number:");
        scanf("%d",&x);
        void (*fp)(int)=tralling_zeros;
	fp(x);
}
*/

/*
1111 1111 0011 0000
               ----
Tralling 0's : 4

0001 0110 1111 1110
---
Leading 0's : 3
*/
