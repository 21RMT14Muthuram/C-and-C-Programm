//Create Basic Class and Object
#include<iostream>
using namespace std;

class math
{
	private:
		int a,b,add,sub;
	public :
		void in()
		{
			cout<<"enter the a :";
			cin>>a;
			cout<<"enter the b :";
			cin>>b;
			}
		void cal()
		{
			add=a+b;
			sub=a-b;
			}
		void out()
		{
			cout<<"a+b="<<add<<endl;
			cout<<"a-b="<<sub<<endl;
			}
};

int main()
{
	math obj;
	obj.in();
	obj.cal();
	obj.out();
	return 0;
}

