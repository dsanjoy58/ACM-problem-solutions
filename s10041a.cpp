#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    long int n,r,i=0;
    cin>>n;
    while(i<n)
    {
        cin>>r;
        long int arr[600];
        for(int m=0;m<r;m++)
        cin>>arr[m];
        sort(arr,arr+r);
        long int s=floor(r/2),sum=0;
        for(int j=0;j<r;j++)
        {
            if((arr[j]-arr[s])<0)
            sum=sum-arr[j]+arr[s];
            else
            sum=sum+arr[j]-arr[s];

        }
        cout<<sum;

        i++;cout<<endl;
    }


    return 0;
}
