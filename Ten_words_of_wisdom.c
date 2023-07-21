#include<stdio.h>
int main()
{
    int n,a,b,x,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int cont=0;
        int flag=0;
        scanf("%d",&x);
       for(i=1;i<=n;i++)
        {
          scanf("%d %d",&a,&b);
          if(a<=10 && b > cont)
          {
              flag =i;
              cont =b;
          }
        }
        printf("%d",flag);
    }
}
