#include<stdio.h>
int main()
{
	int a;
	int n;
	int result=1;
	scanf("%d",&a);
	for(n=1;n<=a;n++)
	{
		result*=n;
	}
	printf("%d",result);
	return 0;
 } 
