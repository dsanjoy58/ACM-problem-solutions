#include <iostream>
#include <algorithm>
using namespace std;
int arr[2000001];
int main()
{
     long int n;
    while(1)
    {
        cin>>n;
        if(n==0)
        break;
        for(long int i=0;i<n;i++ )
        cin>>arr[i];
        sort(arr,arr+n);
        for(long int j=0;j<n;j++)
        {
            cout<<arr[j];
            if(j<n-1)
            cout<<" ";


        }
        cout<<endl;
    }
    return 0;
}
