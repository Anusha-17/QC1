#include<stdio.h>
#define INT_SIZE sizeof(int)*4
void main()
{
	int num,zeros,ones,i;
	printf("Enter the number:");
	scanf("%d",&num);
	zeros=0;
	ones=0;
	for(i=0;i<INT_SIZE;i++)
	{
		if(num & 1) //If LSB bit is set, increment ones otherwise zeros
			ones++;
		else
			zeros++;
		num >>=1;
	}
	printf("Total zero bits : %d and one bits :%d\n",zeros,ones);
}


/*#include<stdio.h>
#define INT_SIZE sizeof(int)*4
void count(int num)
{
	int zeros,ones,i;
	zeros=0;
        ones=0;
        for(i=0;i<INT_SIZE;i++)
        {
                if(num & 1)
                        ones++;
                else
                        zeros++;
                num >>=1;
        }
        printf("Total zero bits : %d and one bits :%d\n",zeros,ones);
}
void main()
{
        int num,zeros,ones,i;
        printf("Enter the number:");
        scanf("%d",&num);
        void (*fp)(int)=count;
	fp(num);
}
*/
