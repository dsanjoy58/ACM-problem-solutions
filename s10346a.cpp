#include <iostream>

using namespace std;

int main()
{
    long int n,k,sum,cary;
    while(cin>>n>>k)
    {


        sum=n;cary=0;
          cary=cary+n%k;

        while(n!=0&&n>0)
        {




              n=n/k;  sum=sum+n;
               cary=cary+n%k;
              while(cary>=k)
             {
                 sum++;
                 cary=cary/k+cary%k;

             }


        }

            while(cary>=k)
            {
                sum++;
                cary=cary/k+cary%k;
            }


        cout<<sum<<endl;
    }
    return 0;
}
