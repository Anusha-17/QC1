#include<stdio.h>
#define NUM_SIZE sizeof(int)*4  //32 bits 
void main()
{
	int x,count=0,i,msb; // 0000 0000 0000 1010
	printf("Enter the number:");
	scanf("%d",&x);
	msb=1<<(NUM_SIZE-1);//1000 0000 0000 0000 
	for(i=0;i<NUM_SIZE;i++)
	{
		if((x<<i)&msb) 
		{
			break;
		}
		count++;
	}
	if(count!=-1)
		printf("Leading Zeros are : %d\n",count);
	else
		printf("All bits are set\n");
}

/*
#include<stdio.h>
#define NUM_SIZE sizeof(int)*4  //32 bits
void leading_zeros(int x)
{
	int count=0,i,msb;
	msb=1<<(NUM_SIZE-1);
        for(i=0;i<NUM_SIZE;i++)
        {
                if((x<<i)&msb)
                {
                        break;
                }
                count++;
        }
        if(count!=-1)
                printf("Leading Zeros are : %d\n",count);
        else
                printf("All bits are set\n");
}
void main()
{
        int x;
        printf("Enter the number:");
        scanf("%d",&x);
        void (*fp)(int)=leading_zeros;
	fp(x);
}
*/

/*
0001 0110 1111 1110
---
Leading 0's : 3
*/
