//2*2 Matrix Multiplication Using Array :

#include<iostream>
using namespace std;

int main()
{
	int i,j,k,a[2][2],b[2][2],c[2][2];
				
	cout<<"\nEnter the A matrix :"<<endl;
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
			}
		}
		
	cout<<"\nEnter the B matrix :"<<endl;	
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			cout<<"b["<<i<<"]["<<j<<"]: ";
			cin>>b[i][j];
			}							
		}
		
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			c[i][j]=0;
			for(k=1;k<=2;k++)
			{
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
				}
			}
		}
	
	cout<<"\nThe A is :";	
	cout<<"\n-------------------------------------\t";
	cout<<endl;
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			cout<<"\t "<<a[i][j];
			}
			cout<<"\n";
		}
		
	cout<<"\nThe B is :";
	cout<<"\n-------------------------------------\t";
	cout<<endl;
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			cout<<"\t "<<b[i][j];
			}
			cout<<endl;
		}
		
	cout<<"\nThe C is :";
	cout<<"\n-------------------------------\t"<<endl;	
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			cout<<"\t "<<c[i][j];
			}
			cout<<endl;
		}
		
	return 0;
	}
	
	
	
	
	
	
