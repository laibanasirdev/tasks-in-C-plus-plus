/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int arr[3][4];
    cout<<"enyer values"<<endl;
   for(int i=0;i<3;i++){
       for(int j=0;j<4;j++){
           cin>>arr[i][j];
       }
   }
   for(int i=0;i<3;i++){
       for(int j=0;j<4;j++){
           sum=sum+arr[i][j];
   }
   cout<<"sum of row is "<<i+1<<" "<<sum<<endl;
   }
   
   
}
