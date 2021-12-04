#include <iostream>
using namespace std;

int main()
{
    int n1,n2,hcf,max;
    cout<<"enter numbers "<<endl;
    cin>>n1>>n2;
    if(n1>n2)
    {
     max=n2;
     n2=n1;
     n1=max;
    }
   
   for(int i=1;i<=n2;++i){
       if(n1%i==0&&n2%i==0){
           hcf=i;
       
       }
       
   }
   
       cout<<"HCF of "<<n1<<" and "<<n2<<" is "<<hcf<<endl;
    return 0;
}