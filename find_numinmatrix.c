#include<stdio.h>
int main()
{
    int arr[100][100];
    int r,c,x,i,j;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&x);
    int f=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         if(arr[i][j]==x)
         {
           f=1;
         }
        }
    }
    if(f==1){

            printf("Yes\n");
    }
    else printf("N0\n");
    return 0;
}




/* sum of those number in matrix
#include<stdio.h>
int main()
{
    int arr[100][100];
    int r,c,x,i,j;
    int sum=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&x);
    int f=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         if(arr[i][j]==x)
         {
              sum=sum+x;
           f=1;

         }
        }
    }
    if(f==1){


            printf("%d",sum);
    }
    else printf("N0\n");
    return 0;
}
*/
