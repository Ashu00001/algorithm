#include<iostream>
using namespace std;
void sievePrime(int *a)
{
	a[0]=0;
	a[1]=0;
	a[2]=1;
	for(long long i=3;i<1000000;i+=2)
	{
		a[i]=1;
	}
	for(long long i=3;i<1000000;i+=2)
	{
		if(a[i]==1)
		{
		for(long long j=i*i;j<1000000;j=j+i)
		{
			a[j]=0;
		}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int a[1000005]={0};
	sievePrime(a);
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			cout<<i<<" ";
		}
	}
}
