//Studend Mark Sheet Using Structure :
#include<iostream>
#include<cstring>
using namespace std;

struct stud
{
	int m1,m2,tot;
	float avg;
	char name[22],res[22],cls[22];
};

int main()
{
	int i=1,n;
	struct stud s[100];
	cout<<"Enter the n :";
	cin>>n;
	cout<<"The Studend NO."<<i;
	for(i=1;i<=n;i++)
	{
		cout<<"\nenter the name :"<<s[i].name;
		cin>>s[i].name;
		cout<<"enter the mark1 :"<<s[i].m1;
		cin>>s[i].m1;
		cout<<"enter the mark2 :"<<s[i].m2;
		cin>>s[i].m2;
		}
	for(i=1;i<=n;i++)
	{	
		s[i].tot=s[i].m1+s[i].m2;
		s[i].avg=s[i].tot/2;
	
	if(s[i].m1>=35 and s[i].m2>=35)
	{
		strcpy(s[i].res,"Pass");
		if(s[i].avg>=80)
			strcpy(s[i].cls,"dist");
		else if(s[i].avg>=60)
			strcpy(s[i].cls,"first");
		else
			strcpy(s[i].cls,"second");
			}
	else
	{
		strcpy(s[i].res,"fail");
		strcpy(s[i].cls,"nill");
		}
	}
	cout<<"\ns.no"<<"\tName"<<"\tMark1"<<"\tMark2"<<"\tTotal"<<"\tAverage"<<"\tResult"<<"\tClass";
	cout<<"\n-------------------------------------------------------------------\t";
	
	for(i=1;i<=n;i++)
	{
								  cout<<"\n"<<i<<"\t"<<s[i].name<<"\t"<<s[i].m1<<"\t"<<s[i].m2<<"\t"<<s[i].tot<<"\t"<<s[i].avg<<"\t"<<s[i].res<<"\t"<<s[i].cls;
}	
	cout<<endl;
	return 0;
	}			
		
		
		









