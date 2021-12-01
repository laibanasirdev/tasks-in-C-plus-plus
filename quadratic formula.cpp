#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    float a,b,c,x,y,disc,imag,real;
    cout<<"enter values of a b and c"<<endl;
    cin>>a>>b>>c;
    disc=b*b-4*a*c;
    if(disc>0)
    {
        x=(-b+ sqrt(disc))/(2*a);
        y=(-b - sqrt(disc))/(2*a);
        cout<<"Roots are real and different  "<<endl;
        cout<<"values are"<<x<<"  and  "<<y<<endl;
    }
    else if(disc==0){
      cout<<"roots are real and same "<<endl;  
    }
   else{
    real= -b/(2*a);
    
   imag=sqrt(-disc)/(2*a);
   cout << "Roots are complex and different."  << endl;
   
   cout << "x is " << real << "+" << imag << "i" << endl;
    cout<< "y is " << real << "-" << imag << "i" << endl;
  
   }

    return 0;
}