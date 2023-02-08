#include<stdio.h>
unsigned char swapnibbles(unsigned char num)
{
	num=((num & 0x0f)<<4 | (num & 0xf0)>>4);
}
void main()
{
	unsigned char num=22;
	printf("%u\n",swapnibbles(num));
}


/*  num = 22 
    0001 0110
    num=((num & 0x0f)<<4 | (num & 0xf0)>>4);
    
    0001 0110     0001 0110
    0000 1111     1111 0000
    ---------     ---------
    0000 0110     0001 0000
    Left shift    right shift
    0110 0000     0000 0001

    OR Operation

    0110 0000
    0000 0001
    ---------
    0110 0001
 */
