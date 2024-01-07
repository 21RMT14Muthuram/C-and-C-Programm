//Construtor and Destructor

#include<iostream>
using namespace std;

class ram
{
	private:
		int a,b,c;
	public :
		ram(int x, int y)
		{
			a=x;
			b=y;
			}
		~ram()
		{
			cout<<"Destructor"<<endl;
		}
		int cal()
		{
			return(a+b);
			}
		int prn()
		{
			return (a-b);
			}
};

int main()
{	
	int x,y;
	cout<<"Enter the x";
	cin>>x;
	cout<<"Enter the y";
	cin>>y;
	ram obj(x,y);
	cout<<"a+b :"<<obj.cal()<<endl;
	cout<<"a-b :"<<obj.prn();
	cout<<endl;
	return 0;
	}

