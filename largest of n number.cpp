/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
int large(int a,int b);

using namespace std;

int main()
{
    int max,n,num;
    cout<<"how many o do you want"<<endl;
    cin>>n;
    cout<<"enter  numbers"<<endl;
    
max=0;
for(int i=1;i<=n;i++){
    cin>>num;
    max=large(max,num);
}
cout<<"Largest number is "<<max<<endl;
    
    return 0;
}
int large(int a ,int b){
    if(a>=b)
    return a;
    else
    return b;
    
}
