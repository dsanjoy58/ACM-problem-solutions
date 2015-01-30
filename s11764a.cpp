#include <iostream>

using namespace std;

int main()
{
    int t,i=1;
    cin>>t;
    while(i<=t)
    {
        int w;
        cin>>w;
        int arr[100],j;
        for( j=0;j<w;j++)
        {
            cin>>arr[j];
        }
        int high=0,low=0;


        for(j=0;j<w-1;j++)
        {
            if(arr[j]==arr[j+1])
            continue;
            else if(arr[j]>arr[j+1])        // Case 3: 4 0
            {
                high++;
            }
            else
            low++;
        }
         cout<<"Case "<<i<<": "<<low<<" "<<high;
        i++;cout<<endl;
    }

    return 0;
}
