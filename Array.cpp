//Simple array :

#include<iostream>
using namespace std;
int main()
{
	int i,a[100],n;
	cout<<"enter the n :";
	cin >>n;
	for(i=1;i<=n;i++)
	{
		cout<<"a["<<i<<"]:";
		cin >> a[i];
		}
	for(i=1;i<=n;i++)
	{
		cout<<"a["<<i<<"]:"<<a[i]<<endl;
	}
	return 0;
	}
