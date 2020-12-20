#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int currentsum=0,maxsum=0;
    int left,right;
    int  a[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n=sizeof(a)/sizeof(a[0]);
    int cumsum[n];
    cumsum[0]=a[0];
    for(int i=1;i<n;i++)
    {
    	cumsum[i]=cumsum[i-1]+a[i]; //to calculate cumulative sum in array
	}
    for(int i=0;i<n;i++)
    {

    for(int j=i;j<n;j++)
    {
        int currentsum=0;
        currentsum=cumsum[j]-cumsum[i-1];// to calculate current cumilative sum from array
        if(currentsum>maxsum)
            {
                maxsum=currentsum;  //to update the max sum
                left=i;
                right=j;
            }
    }
    }
    cout<<"sum : "<<maxsum<<"\n";
    for(int i=left;i<right;i++)
    cout<<a[i]<<" ";
}
