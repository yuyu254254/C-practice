#include<stdio.h>
void fun(int n)
{
    if(n==0)
    return;
    printf("%d",n%10);
    fun(n/10);
}
int main()
{
    int num;
    scanf("%d",&num);
    if(num==0)
    printf("0");
    else
    fun(num);
    printf("\n");
    return 0;
}