#include <iostream>
using namespace std;
int main()
{
unsigned long int a,b;

while(cin>>a>>b)
{    if(b>a)
    cout<<(b-a)<<endl;
    else
    cout<<(a-b)<<endl;
}
return 0;
}
