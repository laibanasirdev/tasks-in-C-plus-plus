#include <iostream>
using namespace std;

int main()
{
    int n,n1=0,n2=1,temp;
    cout<<"enter no of series "<<endl;
    cin>>n;
    cout<<"fibonnachi series is "<<endl;
    for (int i=0;i<n;i++){
        cout<<n1<<endl;
        temp=n1+n2;
        n1=n2;
        n2=temp;
    }
    
   

    return 0;
}
