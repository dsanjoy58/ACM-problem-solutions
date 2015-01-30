#include <iostream>
using namespace std;
int main()
{
	char str[100];
	while(cin>>str)
	{
         int i=0;
		 while(str[i]!='\0')
		 {
			 
			 
			 if(str[i]<65)
			 {
			   char choice=str[i];
			
			 
			   switch(choice)
	   		   {
			     case '1':
				 case '0':
				 case '-':  cout<<choice;break;
				 
  			    }
			 }
			 
			 else

			 {
				 if(str[i]<=67)
					 cout<<2;
				 else if(str[i]<=70)
					 cout<<3;
				  else if(str[i]<=73)
					 cout<<4;

				  else if(str[i]<=76)
					 cout<<5;

				   else if(str[i]<=79)
					 cout<<6;

				   else if(str[i]<=83)
					 cout<<7;

				    else if(str[i]<=86)
					 cout<<8;

				    else if(str[i]<=90)
					 cout<<9;

			 }

			 
			 i++;
		 }
		 cout<<endl;
		
	}
	return 0;
}