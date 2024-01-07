//Ascending Order and Discending Order :

#include<iostream>
using namespace std;
int main()
{
	int i,j,a[100],n,tmp;
	cout<<"enter the n :";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cout<<"a["<<i<<"] :";
		cin>>a[i];
		}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
				}
			}
		}
		
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<endl;
		}
	return 0;
	}	
