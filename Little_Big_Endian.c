#include<stdio.h>
void main()
{
	/*-----Converting lower order to higher order-----*/
	int a, var=0;
	printf("Enter the number:");
	scanf("%x",&a);
	printf("Number before converting = 0x%x\n",a);
	var |= ((0x000000ff & a)<<24);
	printf("Number before converting = 0x%x\n",var);
	/*-------------------------------------------------*/

        /*-----Converting higher order to lower order-----
        int a, var=0;
        printf("Enter the number:");
        scanf("%x",&a);
        printf("Number before converting = 0x%x\n",a);
        var |= ((0xff000000 & a)>>24);
        printf("Number before converting = 0x%x\n",var);
        -------------------------------------------------*/

	/*---------Little Endian to Big Endian-------------
	int a=1;
	char *ptr;
	ptr = (char *)&a;
	if(ptr)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");*/
}
