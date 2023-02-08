#include<stdio.h>
void delete(char s[],char ch)
{
	int i,j;
	for(i=0;s[i]!='\0';i++)
		if(s[i]==ch)
			for(j=i;s[j]!='\0';j++)
				s[j]=s[j+1];
	printf("String after deleting a character: %s\n",s);
}
int main()
{
	char s[20],ch;
	scanf("%s",s);
	scanf(" %c",&ch);
	delete(s,ch);
}

