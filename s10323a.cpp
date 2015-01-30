#include <iostream>

using namespace std;

int main()
{
       long int input;

     while(cin>>input)
    {
        if(input<0)
        {
            if(input%2==0)
            {
                cout<<"Underflow!";
            }
            else
            cout<<"Overflow!";
        }

         else if(input<8)
         cout<<"Underflow!";
         else if(input>13)
         cout<<"Overflow!";
         else
         {

             if(input==8) cout<<"40320";
              else if(input==9) cout<<"362880";
             else if(input==10) cout<<"3628800" ;
             else if(input==11) cout<<"39916800";
               else if(input==12) cout<<"479001600";
                 else if(input==13) cout<<"6227020800";
         }
         cout<<endl;
     }
    return 0;
}
