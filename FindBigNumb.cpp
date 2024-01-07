//find Big Number :
#include<iostream>
using namespace std;

int main()
{
	int i,big,a[11],small;
	for(i=1;i<=5;i++)
	{
		cout<<"[a"<<i<<"]:";
		cin>>a[i];
		}
	for(i=1;i<=5;i++)
	{
		big=a[1];
		if(a[i]>big)
		{
			big=a[i];
			}
		}
	cout<<"The biggest no. :"<<big<<endl;
	
	for(i=1;i<=5;i++)
	{
		small=a[1];
		if(a[i]<small)
		{
			small=a[i];
			}
		}
	cout<<"The smallest no. :"<<small<<endl;
		
	return 0;
	}
