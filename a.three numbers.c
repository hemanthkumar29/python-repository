//Program of average of three numbers//
#include <stdio.h>
int main()
{
	int a,b,c,avg;
	printf("enter values of a&b&c:");
	scanf("%d %d %d",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("\navg=%d",avg);
	return 0;
}

