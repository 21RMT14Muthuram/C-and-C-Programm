//Simple Hierarchical Inheritance

#include<iostream>
using namespace std;

class muthu
{
	protected:
		int a,b;
	public:
		muthu()
		{
			cout<<"Enter the a:";
			cin>>a;
			cout<<"ente the b :";
			cin>>b;
			}
};

class ram:public muthu
{	
	protected:
		int x,y,z;
		float d;
	public:
		void cal()
		{
			x=a+b;
			y=a-b;
			z=a*b;
			d=a/b;
			}
};

class show:public ram
{
	public:
		void out()
		{
			cout<<"a+b :"<<x<<endl;
			cout<<"a-b :"<<y<<endl;
			cout<<"a*b :"<<z<<endl;
			cout<<"a/b :"<<d<<endl;
			}

};





int main()
{
	show oj;
	oj.cal();
	oj.out();
	return 0;
	}	

