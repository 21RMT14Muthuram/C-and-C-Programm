//Find the roots quardratic equationn :

#include<iostream>
#include<cmath>
using namespace std;

/*----------------------------------------------
find the roots of quardratic equation ax2+bx+c=0
------------------------------------------------*/

int main()
{
	double a,b,c,disc,r1,r2,rp,im;
	cout<<"enter the values of the coefficient a,b,c ax^2+bx+c=0 ";
	cin>>a>>b>>c;
	disc=(b*b)-(4*a*c);
	
	cout.precision(10); //control float points
	
	if(disc>=0)
	{
		r1=(-b+sqrt(disc))/(2*a);
		r2=(-b-sqrt(disc))/(2*a);
		
		cout<<"r1 is :"<<r1<<endl;
		cout<<"r2 is :"<<r2<<endl;
	}
	else
	{
		rp=-b/(2*a);
		im=sqrt(-disc)/(2*a);
										cout<<"r1is :"<<rp<<"+"<<im<<"i"<<endl;
		cout<<"r1is :"<<rp<<"-"<<im<<"i"<<endl;
	
		}
	
	
	return 0;
	}
