//Find Factioral Using Recursion :
#include<iostream>
using namespace std;
int num(int n)
{
	if(n<=1)
	{
		return 1;
		}
	else
	{
		return (n*num(n-1));
		}
	}
	
int main()
{
	int n;
	cout<<"enter the n :";
	cin>>n;
	cout<<num(n)<<endl;
	return 0;
	}
	

