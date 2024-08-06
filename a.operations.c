//Program for arthmetic operations//
#include <stdio.h>
int main()
{
	int a,b,sum,sub,mul,rem;
	float quo;
	printf("enter values of a&b:");
	scanf("%d %d",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	quo=a/b;
	rem=a%b;
	printf("\nsum=%d\nsub=%d\nmul=%d\nquo=%d\nrem=%d",sum,sub,mul,quo,rem);
	return 0;
}
