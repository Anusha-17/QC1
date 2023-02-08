#include<stdio.h>
#include<string.h>
void reverse(char s[],int index, int size)
{
	char temp;
	temp = s[index];
	s[index] = s[size - index];
	s[size - index] = temp;
	if(index == size/2)
	{
		return;
	}
	reverse(s, index+1, size);
}

void main()
{
	char s[20];
	int size;
	printf("Enter string:");
	gets(s);
	size=strlen(s);
	reverse(s, 0, size-1);
	printf("Reverse string is : %s\n",s);
	
}

