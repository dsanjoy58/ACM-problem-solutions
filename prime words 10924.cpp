#include <iostream>
using namespace std;
int main()
{
	char str[100];
	while(cin>>str)
	{
		int i=0;
		long int sum=0;
		while(str[i]!='\0')
		{
			if(str[i]>=97)
			{
				sum=sum+str[i]-96;
			}
			else 
			{
				sum=sum+str[i]-38;
			}
             


			i++;
		}

		long int l=sum/2;
		int flag=0;
		while(l>1&&flag==0)
		{
			if(sum%l==0)
			{
				flag=1;
			}
			else
			l--;
		}
		if(flag==0)
			cout<<"It is a prime word.";
		else
			cout<<"It is not a prime word.";

      cout<<endl;
	}
	return 0;
}