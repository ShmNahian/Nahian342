#include<stdio.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
           flag=1;
        }
    }
    if(flag==1 || n==1)
    {
        printf("Not Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}
