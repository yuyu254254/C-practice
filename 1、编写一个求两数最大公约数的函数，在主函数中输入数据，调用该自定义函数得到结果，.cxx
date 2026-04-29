#include<stdio.h>
int lun(int m,int n)
{
    int temp;
    while(n!=0)
    {
        temp=m%n;
        m=n;
        n=temp;
        }
        return m;
}
     int main()
     {
         int a,b;
         {
             scanf("%d %d",&a,&b);
             printf("%d",lun(a,b));
         }
     }