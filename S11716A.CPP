#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;


int main()
{
     char str[10001],cod[101][101];
    int T,i=0;
    cin>>T;
    gets(str);
    while(i<T)
    {
	int z=1,timer=2;
        gets(str);
        int l;
        l=strlen(str);
        while((z*z)!=l)
        { z++;
         if((z*z)>l)
          {
             cout<<"INVALID";
             timer=1; break;
          }

        }
        if(timer!=1)
        {
            int row=z,col=z,size=0,m,n;

            for( m=0;m<row;m++)
            {
                for( n=0;n<col;n++ )
                {
                  cod[m][n]=str[size];
                  size++;
                }
            }
            for(n=0;n<col;n++)
            {
                for(m=0;m<row;m++)
                {
                    cout<<cod[m][n];
                }
            }




        }




        i++;cout<<endl;
    }




    return 0;
}
