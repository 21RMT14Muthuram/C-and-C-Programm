#include<iostream>
using namespace std;

int add(int a,int b,int c,int d)
{
    int z;
    z=a+b+c+d;
    return ("a+b :",z);
}
//add(a,b);
int main()
{
    int a,b,c=1,d=100;
    int (*p) (int a,int b,int c,int d);
    cout<<"enter the a:";
    cin>> a;
    cout<<"enter the b :";
    cin>>b;
    p=&add;
    cout<<p(a,b,d,c)<<endl;
    return 0;
}


