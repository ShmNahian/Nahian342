#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    while(n--)
    {
        int x,y;
        scanf("%d",&x);
        scanf("%d",&y);
        int A[x];
        bool flag = false;
       for(i=0;i<x;i++)
       {
        scanf("%d",&A[i]);
        if(A[i]== y)
        {
            flag =1;
        }
       }
       if(flag ==1)
       {
         printf("YES\n");
       }else{
        printf("NO\n");
       }

    }
}
