#include<stdio.h>
int main()
{
    int n,q,i,arr[100010],l,r;
    long long int sum,psum[100010];

    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    psum[0]=0;
    for(i=1;i<=n;i++)
    {
        psum[i]= psum[i-1]+ arr[i];
    }

    for(i=0;i<q;i++)
    {
        scanf("%d %d",&l,&r);
        sum = psum[r] - psum[l-1];
        printf("%lld\n",sum);

    }
    return 0;

}
