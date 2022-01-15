//swapping using two variables 
#include <iostream>
using namespace std;
int main()
{

int a,b,temp;
cout<<"enter values of a and b"<<endl;
cin>>a>>b;
cout<<"value of a and b before swapping is "<<a<<" and  "<<b<<endl;
temp=a;
a=b;
b=temp;
cout<<"Values of a and b after swapping is "<<a<<" and "<<b<<endl;
return 0;
}