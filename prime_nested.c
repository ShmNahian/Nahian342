#include<stdio.h>
int main()
{
    int n,i,x,f,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        f=0;
        x=j;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
           f=1;
        }
    }

    if(f==1 || n==1)
    {
        printf("%d Not Prime\n",x);
    }
    else{
        printf("%d Prime\n",x);
    }

    }

    return 0;
}
