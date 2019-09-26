#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double X1,X2,Y1,Y2,distance ;
    cin>>X1>>Y1;
    cin>>X2>>Y2;
    distance=(sqrt((pow((X2-X1),2))+ (pow((Y2-Y1),2))));
    cout<<fixed<<setprecision(4);
    cout <<distance<< endl;
    return 0;
}
