#include <stdio.h>
#include <string.h>
int main()
{
    char a[10]="ANUSHA",temp;
    int n=strlen(a),mid=n/2,i,j;
    printf("%d  %d ",n,mid);
    for(i=mid,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("%s \n",a);
}
