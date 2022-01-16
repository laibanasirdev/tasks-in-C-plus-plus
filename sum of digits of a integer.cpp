/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,val,r,sum=0;
   cout<<"enter number"<<endl;
   cin>>n;
   val=n;
   while(n!=0){
       r=n%10;
       if(r==0)
           sum=sum+n;
       
       else{
           sum=sum+r;
           n/=10;
       }
   }
   cout<<"the sum of digits of number "<<val<<"  = "<<sum<<endl;
   
    return 0;
}
