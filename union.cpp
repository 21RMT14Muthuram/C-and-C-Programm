//simple Union :
#include<iostream>
using namespace std;

union stud
{
	int tot,m1,m2;
	float avg;
	};

int main()
{
	union stud s;
	cout<<"Enter mark1 :";
	cin>>s.m1;
	cout<<"Enter mark2 :";
	cin>>s.m2;
	
	s.tot=s.m1+s.m2;
	cout<<"\nTotal   :"<<s.tot;

	s.avg=s.tot/2;
	cout<<"\nAverge  :"<<s.avg<<endl;
		
	return 0;
	}
