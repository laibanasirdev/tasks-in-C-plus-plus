#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int num,mid,sum=0;
    cout << "Enter a  integer: ";
    cin >> num;
    mid=num/2;
    for(int i=1;i<=mid;i++){
        if(num%i==0)
            sum=sum+i;
    }
    
    if(sum==num)
    cout<<num<<" is a perfect number"<<endl;
    else
    cout<<num<<" is not a perfect number"<<endl;
   
}