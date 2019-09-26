#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int NUMBER ,WORKED;
double  SALARY ;

cin>>fixed>>setprecision(2);
cin>>NUMBER>>WORKED>>SALARY;
SALARY = SALARY*WORKED;

cout<<fixed<<setprecision(2);
cout<<"NUMBER = "<<NUMBER<<endl;
cout<<"SALARY = U$ "<<SALARY<<endl;

    return 0;
}
