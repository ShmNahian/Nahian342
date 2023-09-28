/*
*program to calculate  the area of circles, using a for loop.
*This code is released under the IIUC  Public license.
*(c)2023,Data Pirates Team.
*/
#include<stdio.h>

#define PI 3.14159
float process(float radius);  /*function prototype */
int main()
{
     float radius,area; /*variable declaration */
     int count,n;  /*variable declaration */
     for(count =1; count<=n; ++count)
     {
         printf("*\nCircle no. %d: Radius = ", count);
         scanf("%f",&radius);
         if(radius < 0)
        {
            area = 0;
         }else
         {
             area =process(radius);
            printf("Area = %f\n", area);
         }
     }

}
float process(float r) /*function declaration */
{
    float a;  /*local variable declaration */
    a = PI * r * r;
    return a;
}
