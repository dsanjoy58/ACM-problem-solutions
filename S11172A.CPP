#include <iostream>
using namespace std;

int main()
{
 int t;
 long int a,b;
 cin>>t;

 int i=0;
 while(i<t)
 { cin>>a>>b;

  if(a==b)
  cout<<"=\n";
  else if(a<b)
  cout<<"<\n";
  else
  cout<<">\n";
  i++;
 }

return 0;
}
