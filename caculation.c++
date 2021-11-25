#include <iostream>
#include <math.h>
using namespace std;

int main()

{
    int operation ,a,b,c;
    cout<<"enter numbers"<<endl;
    cin>>a;
    cin>>b;
    cout<<"enter what you want to calculate"<<endl;
    cin>>operation;
  switch(operation){
     case 1:
     c=a+b;
      cout<<c;
      break;
     case 2:
     c=a-b;
      cout<<c;
       break;
     case 3:
     c=a*b;
      cout<<c;
       break;
     case 4:
     c=a/b;
      cout<<c;
       break;
     case 5:
     c=a%b;
      cout<<c;
       break;
     case 6:
     c=pow(a,b);
      cout<<c;
       break;
     case 7:
     c=sqrt(a);
     cout<<c;
      break;
     default:
     cout<<"INVALId"<<endl;
     
     
     
     
  }  
	return 0;
}