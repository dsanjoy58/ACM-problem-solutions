#include <iostream>

using namespace std;

int main()
{
    unsigned short int T,a,b,i=1,sum;
    cin>>T;
    while(i<=T)
    {
        cin>>a>>b;                                   //Case 1: 9

        sum=0;

        if(a>b)
        {
            cout<<"Case "<<i<<": "<<0;
        }

        else if(a%2==0)
        {  a++;
            while(a<=b)
            {
                sum=sum+a;
                a=a+2;
            }
              cout<<"Case "<<i<<": "<<sum;
        }
        else
        {
              while(a<=b)
            {
                sum=sum+a;
                a=a+2;
            }
              cout<<"Case "<<i<<": "<<sum;
        }

        i++;
        cout<<endl;
    }



    return 0;
}
