#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the a :");
	scanf("%d",&a);
	printf("enter the b :");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	printf("\na =%d",a);
	printf("\nb =%d",b);
	}
