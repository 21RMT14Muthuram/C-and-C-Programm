//find Greatest Number Using Nest-If:
#include<iostream>
using namespace std;


int main()
{
	int a,b,c;
	cout<<"enter the a :";
	cin>>a;
	cout<<"enter the b :";
	cin>>b;
	cout<<"enter the c :";
	cin>>c;
	
	if(a==b&&b==c)
		cout<<"all are equal";
	else
	{
		if(a>b)
		{
			if(a>c)
			{
				cout<<"a is greater";
				}
			else
			{
				cout<<"c is greater";
				}
			}
		else
		{
			if(b>c)
				cout<<"b is greater";
			else
				cout<<"c is greater";
			}
		}
	return 0;
	}
				



		






	
