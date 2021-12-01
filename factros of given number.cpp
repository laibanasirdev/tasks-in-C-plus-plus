#include <iostream>
using namespace std;
int main()
{
    int a;
cout<<"enter numbers"<<endl;
cin>>a;
for(int i=1;i<=a;i++){
if(a%i==0){
    //factors of given numebrs
    cout<<i<<endl;
}
}
	return 0;
}