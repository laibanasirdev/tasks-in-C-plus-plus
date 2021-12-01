#include <iostream>
using namespace std;
int main()
{
    int a,b,c,max;
cout<<"enter numbers"<<endl;
cin>>a>>b>>c;

if(a>b&&a>c)
cout<<"largest number is "<<a;
else
if(b>a&&b>c)
cout<<"largest number is "<<b;
else
if(c>a&&c>b)
cout<<"largest number is "<<c;
	
	return 0;
}