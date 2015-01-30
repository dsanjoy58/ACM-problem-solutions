#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    char st1[1000000],st2[1000000];
    long int l;
    while(gets(st1))
    {
        l=strlen(st1);long int i=0,m=0;
        while(i<l)
        {
            st2[m]=st1[i];
            i++;
            if(st1[i]==' ')
            {
                while(m>=0)
                {
                    cout<<st2[m];
                    m--;
                }
                cout<<st1[i];
                i++;m=0;
            }
            else if(st1[i]=='\0')
            {
                while(m>=0)
                {
                    cout<<st2[m];
                    m--;
                }
                m=0;
            }
            else
             {

                 m++;
             }
        }
        cout<<endl;
    }
    return 0;
}
