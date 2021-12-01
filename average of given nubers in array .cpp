#include <iostream>
using namespace std;
int main()
{
    int n,num[100];
    
    float sum=0.0;
    float average;
    cout<<"enter no of values yoiu want to enter "<<endl;
    cin>>n;
    cout<<"now enter values "<<endl;
    for(int i=0;i<n;++i){
    cin>>num[i];
    sum=sum+num[i];
}
average=sum/n;
cout<<"Average is : "<<average<<endl;
return 0;
}