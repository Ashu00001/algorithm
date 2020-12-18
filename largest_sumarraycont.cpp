#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int currentsum=0,maxsum=0;
    int left,right;
    int  a[]={-4,1,3,-2,6,2,-8,-9,4};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {int temp=0;
    for(int j=i;j<n;j++)
    {
        int currentsum=0;
        for(int k=i;k<j;k++)
        {
          currentsum+=a[k];  
            
        }
        if(currentsum>maxsum)
            {
                maxsum=currentsum;
                left=i;
                right=j;
            }
    }
    }
    cout<<"sum : "<<maxsum<<"\n";
    for(int i=left;i<right;i++)
    cout<<a[i]<<" ";
}
