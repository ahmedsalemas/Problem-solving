#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int time,speed,distance;
    double liters ;
    cin>> time>>speed;
   // distance = time*speed;
    liters = ((time*speed)*(0.08333333333));

    cout<<fixed<<setprecision(3);
    cout <<liters<< endl;
    return 0;
}
