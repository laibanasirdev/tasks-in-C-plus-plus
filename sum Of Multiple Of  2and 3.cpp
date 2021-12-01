/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cmath>

using namespace std;

int main()

{
    int n;
    int sum=0;
    cout<<"enter number"<<endl;
    cin>>n;
for (int i=0;i<n;i++){
    if(i%2==0&&i%3==0){
       sum=sum+i;
    }
   
}
 cout<<sum;
    return 0;
}
