#include<stdio.h>

void display(int a[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}
int main()
{
    int num[]= {10,20,30,40,50};
    display(num);

}
