#include<stdio.h>
#define size 5
void array_position(int *p,int pos,int ele)
{
    int i;
    if(pos <= size && pos >= 0)
    {
    	for(i = size; i > pos; i--)
            *(p+i) = *(p+i-1);
        *(p+pos) = ele;
        for(i = 0; i <= size; i++)
            printf("%d ", *(p+i));
    }
    else
        printf("Invalid Position\n");
}
int main()
{
    int a[size] = {10,20,30,40,50};
    int ele, pos,*p;
    p=a;
    printf("Enter position and element\n");
    scanf("%d%d",&pos,&ele);
    void (*fp)(int *,int,int)=array_position;
    fp(a,pos,ele);
    
    return 0;
  }
