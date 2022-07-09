#include<stdio.h>
int main()
{
    int l,b,h,c,a,area;
    scanf("%d%d%d%d",&l,&b,&h,&c);
    a=l*b;
    area=((l+(2*h))*(b+(2*h)));
    int total;
    total=(area-a)*c;
    printf("%d",total);
    return 0;
}