
#include<stdio.h>
int main()
{
    int n,r,re, s=0,p=1;
    scanf("%d" ,&n);
    while(n>0)
    {
       r=n%10;
       n=n/10;
       p=p*r;
       s=s+r;
       
    }
    re=p-s;
    printf("%d",re);
}
