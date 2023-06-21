#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=4;i++)
    {
        for(j=4;j>0;j--)
         printf("%d %d\n",i,j);
    }
    return 0;
}
