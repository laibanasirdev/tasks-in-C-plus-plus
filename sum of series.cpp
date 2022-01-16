#include <iostream>

using namespace std;

int main()
{
    float a=2,sum=1.0;
    int limit;
    cout<<"enter limit of series "<<endl;
    cin>>limit;
    while(a<=limit){
        
      sum=sum+1.0/a;
      a=a+2;
    }
    cout<<"sum of series within upper and lower limit is "<<sum<<endl;
    return 0;
}
