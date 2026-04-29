#include<stdio.h>
int fun(int n)
{
    if(n==1||n==2)
    return 1;
    else
    return fun(n-1)+fun(n-2);
}
int main()
{
    int m,t;
    scanf("%d",&m);
    t=fun(m);
    printf("%dyou%dzi",m,t);
}