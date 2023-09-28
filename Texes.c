#include<stdio.h>
/*Declaring a constant string*/
int main()
{
    float gross, tax, net;

    printf("Gross salary:  ");
    scanf("%f",&gross);
    tax = .14*gross;
    net = gross - tax;
    printf("Taxes withheld: %.2f\n");
    printf("Net salary : %2f",net);
}
