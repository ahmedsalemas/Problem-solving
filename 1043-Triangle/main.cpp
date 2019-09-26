#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
float a,b,c;
cin>>a>>b>>c;
cout<<fixed<<setprecision(1);
if(a+b>c && a+c> b && b+c >a)
   {cout<<"Perimetro = "<<a+b+c<<endl;}
    else
    {cout<<"Area = "<<(((a+b)/2)*c)<<endl;}
    return 0;
}
