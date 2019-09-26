#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double  A,R ;
const double N = 3.14159;

cin>>R;

A = N*(R*R);
cout<<fixed<<setprecision(4);
cout<<"A="<<A<<endl;

    return 0;
}
