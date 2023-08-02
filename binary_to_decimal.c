#include<stdio.h>
#include<math.h>
int main()
{
    long long  n,m,x,y;
    int i,dec=0,dec1=0,sum;
    scanf("%lld %lld",&n,&m);

    if(n!=0 && m!=0)
    {
        x=n%10;
        n/=10;

        y=m%10;
        m/=10;
        for(i=0;i<=n;++i)
        {
            dec=dec + (x*pow(2,i));
            dec1=dec1 + (y*pow(2,i));

            dec++;
            dec1++;
        }
        sum =dec+dec1;
        printf("%d",sum);
    }
    return 0;
}
