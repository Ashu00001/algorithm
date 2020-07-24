#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a==b)
	{
		return a;
	}
	if(a==0 || b==0)
	{
		return a;
	}
	if(a>b)
	{
		return(a-b,b);
	}
	else
	return(a,b-a);
}
int main()
{
	int a,b;
	cin>>a>>b;
	if(b>a)
	{
		int temp=a;
		a=b;
		b=a;
	}
	int result=gcd(a,b);
	cout<<"gcd ,: "<<result;
}
