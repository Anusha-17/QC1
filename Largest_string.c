#include<stdio.h>
#include<string.h>
int main()
{
	char s[100]="I work at thundersoft", longest[30];
	int count = 0, max = 0,i,j,index=0,length;
	length = strlen(s);
	index=0;
	for( i = 0 ; i< length ; i++)
	{
  		if(s[i] != ' ')
  		{
   			count++;
  		}
  		else
  		{
   			if(count > max)
   			{
    				max = count;
    				index = i-max;
   			}
   		count = 0;
  		}
 	}
	if(count>max)
	{  
		max = count;
  		index = length-max;
 	}
	j=0;
	for(i=index;i< index+max;i++)
	{
		longest[j] = s[i];
  		j++;
 	}
	longest[j] = '\0';
 	printf("Longest word is: %s ", longest);
 	printf("And its length is: %d\n",max);
 	return 0;
}
