#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char str[20],m[2];
    long int N,i=0;
    cin>>N;
    gets(m);
    while(i<N)
    {
        gets(str);
        int j=0;
        long int sum1=0,test,sum2=0;
        while(str[j]!='\0')
        {
          if(str[j]==' ')
            {
              j++;;                    //  5181 2710 9900 0012
            continue;
            }
           else
          {


            test=(str[j]-48)*2;
            if(test/10!=0)
            {
                while(test!=0)
                {
                    sum1=sum1+test%10;
                    test=test/10;
                }
                j=j+2;
            }
            else
            {
                sum1=sum1+test;
                j=j+2;
            }
          }
        }

        j--;

          while(j>=0)
        {
          if(str[j]==' ')
            {
              j--;                    //  5181 2710 9900 0012    Invalid
                                                                            //Valid
            continue;
            }
           else
          {


            test=(str[j]-48);



                sum2=sum2+test;
                j=j-2;

          }
        }
         long int sum;
         sum=sum1+sum2;
        if(sum%10==0)
        cout<<"Valid";
        else
        cout<<"Invalid";


        i++;cout<<endl;
    }

    return 0;
}
