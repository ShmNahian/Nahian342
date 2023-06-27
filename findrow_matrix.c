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
    for(i=0;i<r;i++)
    {

        printf("%d ",arr[i][x-1]);
        printf("\n");
    }
    return 0;
}

/* sum
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
    for(i=0;i<r;i++)
    {


        printf("%d ",arr[i][x-2]);
        printf("\n");
        sum+=arr[i][x-2];

    }
    printf("%d ",sum);

    return 0;
}
*/
