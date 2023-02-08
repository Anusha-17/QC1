#include<stdio.h>
void main()
{
	int num,flipnum;
	printf("Enter the number:");
	scanf("%d",&num);
	flipnum = ~num;
	printf("Number after flipping the bits : %d\n",flipnum);
}


/*#include<stdio.h>
void flip(int num)
{
	int flipnum;
	flipnum= ~num;
	printf("Number after flipping the bits : %d\n",flipnum);
}
void main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	void (*fp)(int)=flip;
	fp(num);
}*/

