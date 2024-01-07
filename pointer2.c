#include<stdio.h>

int main()
{
	int a[10],i;
	int *p;
	for(i=0;i<=5;i++)
	{
		printf("enter the a[%d] :",i);
		scanf("%d",&a[i]);
		}
	printf("sum of %d",arraysum(a[]));
	return 0;
	} 
	
int arraysum(int a[])
{
	int i,sum=0;
	for(i=1;i<=5;i++)
	{
		sum+=a[i];
		}	
	return sum;
	}
