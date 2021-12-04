//binay to decimal
#include <iostream>
using namespace std;

int main()
{
    int n,reverse=0,rem,decimal=0,num,a=1;
    
    cout<<"enter number in binary"<<endl;
    cin>>n;
 num=n;
    
   while(num>0){
       rem=num%10;
       decimal=decimal+rem*a;
       a=a*2;
       num=num/10;
       
       
   }
   cout<<"the conversion of binary number "<< n<<" is "<<decimal;
 
   
    return 0;
}
