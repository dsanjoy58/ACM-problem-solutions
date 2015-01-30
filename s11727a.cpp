#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long int t,arr[3],i=1;
    cin>>t;

    while(i<=t)
    {
      cin>>arr[0]>>arr[1]>>arr[2];        //Case 1: 2000
      sort(arr,arr+3);
      cout<<"Case "<<i<<": "<<arr[1];
      cout<<endl;
      i++;
    }


    return 0;
}
