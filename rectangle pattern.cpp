/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{int n;
    char ch;
    
  cout<<"enter symbol"<<endl;
  cin>>ch;
  cout<<"enter no of repitition of pattern"<<endl;
  cin>>n;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
          cout<<ch;
         
      }
      cout<<endl;
  }

    return 0;
}
