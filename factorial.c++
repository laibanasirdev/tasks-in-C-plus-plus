#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int n;
    cin>>n;
    int a=1;
    if(n<0)
    cout<<"error"<<endl;
    else
    for(int i=1;i<=n;++i){
        a=a*i;
    }
    cout<<a;
	return 0;
}