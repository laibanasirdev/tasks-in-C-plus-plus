#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n,tab;
    cout<<"enter number "<<endl;
    cin>>n;
  
    
    for(int i=0;i<=10;++i){
       tab=n*i;
       cout<<n <<" * "<<i<<" = "<<tab<<endl;
    }
    return 0;
}