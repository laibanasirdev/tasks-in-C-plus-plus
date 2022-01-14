/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int a ,b,c,d;
   // Initialize all variables to 0
  a=b=c=d=0;
  cout<<"the initialize values of a b c and d are "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
  //assign a to b  suing postfix
  b=a++;
  //assign d to c using prefix
  c=++d;
   cout<<" the assign value of a after postfix operetaion  is "<<a<<endl;
   
    cout<<"the assign value of c after prefix operatio is "<<c<<endl;
  
  
}
