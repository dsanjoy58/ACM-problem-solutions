#include <iostream>
#include <math.h>
#include<stdio.h>
using namespace std;

int main()
{
    unsigned long int n;


    while(1)
    {  cin>>n;
      if(n==0)
      break;

      if(floor(sqrt(n))==ceil(sqrt(n)))
      cout<<"yes"<<endl;
      else
      cout<<"no"<<endl;

    }

    return 0;
}
