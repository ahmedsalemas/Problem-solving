#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name ;
    double salary,total,TOTAL ;
    cin>>name;
    cin>>salary>>total ;
    TOTAL =((total*0.15)+salary);
    cout<<fixed<<setprecision(2);
    cout << "TOTAL = R$ " <<TOTAL<< endl;
    return 0;
}
