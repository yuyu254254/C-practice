#include<stdio.h>
int main()
{
    int a,b,c,share;
    a=8;b=9;c=10;
    share=a/3;
    a=share;
    b=b+share;
    c=c+share;
    
    share=b/3;
    b=share;
    a=a+share;
    c=c+share;
    
    share=c/3;
     c=share;
    a=a+share;
    b=b+share;
    printf("%d %d %d",a,b,c);
    return 0;
}
