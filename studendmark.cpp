//Studend MarkSheet Using String function:
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int tot,m1,m2,i=1;
	char name[10],res[10],cls[10],ans[11];
	float avg;
	
start:
	cout<<"The Studend No."<<i;
	cout<<"\nEnter the Name :";
	cin>>name;
	cout<<"enter the Mark1 :";
	cin>>m1;
	cout<<"enter the Mark2 :";
	cin>>m2;
	
	tot=m1+m2;
	avg=tot/2;

	if(m1>=35 && m2>=35)
	{
		strcpy(res,"Pass");
		if(avg>=80)
		{
			strcpy(cls,"dist");
			}
		else if(avg>=60)
		{
			strcpy(cls,"first");
			}
		else if(avg>=40)
		{
			strcpy(cls,"second");
			}
		else 
		{
			strcpy(cls,"third");
			}
			}
	else
	{
		strcpy(res,"defet");
		strcpy(cls,"nill");
	}
	cout<<"\n-------------------------------\t";
	cout<<"\nName    :"<<name;
	cout<<"\nMark-1  :"<<m1;
	cout<<"\nMark-2  :"<<m2;
	cout<<"\nTotal   :"<<tot;
	cout<<"\nAverage :"<<avg;
	cout<<"\nClass   :"<<cls;
	cout<<"\n-------------------------------\t";
	cout<<"\nAre you to continue (y/n) ?:";
	cin>>ans;
	
	if(strcmp(ans,"y")==0)
	{
		i++;
		goto start;
		}
	else
	{
		goto end;
	}	
end:
	return 0;
	}
		
	
