
#include<stdio.h>
int main()
{
    int rs,cs;
    scanf("%d %d",&rs,&cs);
    int arr[rs][cs],i,j,sum=0;
    for(i=0;i<rs;i++)
    {
        for(j=0;j<cs;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<rs;i++)
    {
        for(j=0;j<cs;j++)
        {
            sum=sum+arr[i][j];
        }
    }
        printf("%d",sum);
    return 0;
}
