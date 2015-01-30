#include <iostream>
using namespace std;


int main()
{
   long int A,L,cas=0,s,d,j=0,terms;

   while(1)
   {
        if(j!=0)
        {
            cout<<"Case "<<cas<<": A = "<<s<<", limit = "<<d<<", number of terms = "<<terms<<"\n";
        }

        cin>>A>>L;
        s=A;
        d=L;
          terms=0;

        if(A<0&&L<0)
        {break;
        }                                                                                         // Case 1: A = 3, limit = 100, number of terms = 8


	while(L>=A&&A!=1)
        {

          if(A%2==0)
          {
              A=A/2;

          }
          else
          {
              A=3*A+1;

	  }
	  terms++;
	}
	if(A==1)
	terms++;
       j++;cas++;
    }

    return 0;
}
