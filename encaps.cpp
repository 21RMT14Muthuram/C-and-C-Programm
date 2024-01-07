//Encapsulation :
#include<iostream>
using namespace std;

class value
{
	private:
		int x,y;  
	public :
		void change(int a,int b)
		{
			x=a;
			y=b;
			}
		int show(int a)
		{
			return x;
			}
		int show1(int b)
		{
			return y;
			}
};

int main()
{
	int a,b;
	value obj;
	cout<<"enter the a :";
	cin>>a;
	cout<<"enter the b :";
	cin>>b;
	obj.change(a,b);
	cout<<"x="<<obj.show(a)<<endl;
	cout<<"y="<<obj.show1(b)<<endl;


}
