#include <iostream>
using namespace std;
int main()
{	
	int n;
	bool prime=true;
	cout<<"enter number"<<endl;
	cin>>n;
	if(n==0||n==1)
	prime=false;
	else
	for(int i=2;i<=n/2;++i)
	    if(n%i==0)
	    prime=false;
	  
	    if(prime)
	    cout<<"number is prime"<<endl;
	    else
	    cout<<"not prime"<<endl;
	
	return 0;
}