#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    const double pi =3.14159;
    double R,V;
    cin>>R;
    V=((4.0/3)*pi*(R*R*R));
    cout<<fixed<<setprecision(3);
    cout<<"VOLUME = "<<V<<endl;
    return 0;
}
