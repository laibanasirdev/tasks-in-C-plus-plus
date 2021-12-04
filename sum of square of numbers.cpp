#include <iostream>
using namespace std;

int main()
{
    int n,square,sum=0;
    cout<<"enter no of digit "<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        square=i*i;
        sum=sum+square;
 }
     cout<<"sum of square is "<<sum<<endl;
    
    return 0;
}
