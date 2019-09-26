#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double  A,B,MEDIA ;

cin>>fixed>>setprecision(1);
cin>>A>>B;
MEDIA = ((A*3.5)+(B*7.5))/(3.5+7.5);

cout<<fixed<<setprecision(5);
cout<<"MEDIA ="<<MEDIA<<endl;

    return 0;
}
