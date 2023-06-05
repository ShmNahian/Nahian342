#include<stdio.h>

void calculatepower(double base,double exp)
{
    double result=1,i;

    for(i=1;i<=exp;i++)
    {
        result = result * base;
    }
        printf("%.1lf\n",result);

}




int main()
{

    double base,exp;

    printf("Enter base : ");
    scanf("%lf",&base);
    printf("Enter exp : ");
    scanf("%lf",&exp);

    calculatepower(base,exp);
}
