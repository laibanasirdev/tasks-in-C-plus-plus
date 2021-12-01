#include <iostream>

using namespace std;

int main()
{
    int a,b,lcm;
    cout<<"enter numbers"<<endl;
    cin>>a>>b;
    if(a>b)
    lcm=a;
    else
    lcm=b;
    do{
        if(lcm%a==0&&lcm%b==0){
        cout<<"LCM is "<<lcm<<endl;
        break;}
        else
        lcm++;
    }
    while(true);

    return 0;
}
