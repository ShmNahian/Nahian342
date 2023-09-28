/*
 *program to display constant string to the console.
 *This code is released under the IIUC Public Licence.
 *(c)2023, Data Pirates Team.
*/
#include<stdio.h>
/*Declaring a constant string*/
int smaller(int a, int b);
int main()
{

int a, b, min;
printf("Please enter the first number: ");
scanf("%d",&a);
printf("Please enter the second number: ");
scanf("%d",&b);

min = smaller(a,b);
printf("\nThe smaller number is : %d", min);
}
int smaller(int a, int b)
{
    if(a<=b)
        return(a);
    else
        return(b);
}
